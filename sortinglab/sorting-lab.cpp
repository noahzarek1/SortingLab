#include <iostream>
#include "sorting-lab.h"

sorts::sorts() {
    //nothing to do here
}

sorts::~sorts() {
    //nothing to do here
}

//does sorting, using selection sort algo
void sorts::selectionSort(int * unsortedArr, int arrSize) {

	// Set the current sorted_pos to 0
	for (int sorted_pos = 0; sorted_pos <= arrSize - 1; sorted_pos++)
	{
		int smallest_elem_pos = sorted_pos; //keeping track of smallest position's index rather than value so it's easier to swap

		// Find the smallest element in the rest of list
		for(int j = sorted_pos +1; j < arrSize; j++){
		    if(unsortedArr[j] < unsortedArr[smallest_elem_pos]){
		        smallest_elem_pos = j;
		    }

		}
		// YT link on how selection sort works: https://www.youtube.com/watch?v=g-PGLbMth_g

		// Swap the smallest element in the list with the element at sorted_pos
		std::swap(unsortedArr[smallest_elem_pos], unsortedArr[sorted_pos]);

		// Increment sorted_pos by 1 (done by loop)
		// Repeat 2-4 until list is sorted (until sorted_pos is n-1) (done by loop)
	}
}

//does sorting, using insertion sort algo
void sorts::insertionSort(int * unsortedArr, int arrSize) {
	// Start at the front of the list
	for (int i = 1; i < arrSize; i++) //starting at one so there's something to the left
	{
		int curr = unsortedArr[i];
		int j = i - 1; //declaring outside so we can use it outside of for loop
        while(j>= 0 && unsortedArr[j] > curr){

            unsortedArr[j+1] = unsortedArr[j];
            j = j -1;
        }
        unsortedArr[j+1] = curr;
		// Compare the current element to the element immediately to its left
		// If the current element is smaller than the element immediately to its left...
		// ...compare the current element to all the other elements to the left
		// Do this until the current element is not smaller than the element its being compared to
		//while the previous item is greater than the next item, continue swapping
        //hint: remember there are many shifts in insertion sort, what does it take to make a shift?
        //YT link on how insertion sort works: https://www.youtube.com/watch?v=JU767SDMDvA
	}
}

void sorts::print(int data[], int n, std::ostream& os) {
    for(int i=0;i<n;i++)
        os << data[i] << " ";
}

void sorts::merge(int data[],int temp[],int low, int mid, int high) {
    //create sizes for each left and right subarray
    //std::cout << "low " << low << " mid " << mid << " high " << high << std::endl;
    int size1 = mid - low + 1;
    int size2 = high - mid;
    //create left and right subbarray
    int tempL[size1], tempR[size2];

    //copy data into left
	for(int l = 0;l < size1; l++) {

        tempL[l] = data[low + l];
        //std::cout << "left " << tempL[l] << std::endl;;
	}
	//copy data into right
	for(int r = 0; r < size2; r++){

	    tempR[r] = data[mid + 1 + r];
	    //std::cout << "right " << tempR[r] << std::endl;
	}
    //inital index of the first subarray
	int i = 0;
	//idx second subarray
	int j = 0;
	//idx of merged subarray
	int k = low;

	//while we have items in left and right subarray...
	while(i <size1 && j <size2) {
        //if left is smaller, we put it to its right/sorted position in the array.
        if(tempL[i] <= tempR[j]){
            data[k] = tempL[i];
            i++;
        }
        else{

            data[k] = tempR[j];
            j++;
        }

        k++;

	}
	//sometimes we have items left in the left subarray, so we copy it to the final nums array. They're in sorted order at this point, so we just copy them
	//we copy them by adding the rest of the items in the subarray to the array
    while (i < size1) {
        data[k] = tempL[i];
        i++;
        k++;
    }
	//same reasoning for the last while loop applies to this loop, but for the right subarray
    while (j < size2) {
       data[k] = tempR[j];
       j++;
       k++;
    }
}

//Worst Case Merge: O(n log n)
//In terms of low high: T(n) = 2 * low + mid
// T(n)= ( ((high + low) / 2) - low + 1) + (high- ((high + low) / 2)) + ( ((high + low) / 2) - low +1)
//

void sorts::mergesort(int data[], int low, int high) {
    //base case for recursive method calls
	if(low >= high) {
    	return;
 	}
    //look for the middle index to partition the array into 2 equal subarrays. We set a variable to determine the middle of the list
    int mid = low +(high - low)/2;
    //divide portion

    //call the merge sort method recursively on the left subarray (use that middle variable you just wrote above as a parameter)
    mergesort(data,low,mid);
	//call the merge sort method recursively on the right subarray (use that middle variable you just wrote above as a parameter)
    mergesort(data,mid + 1,high);
	//conquer (where we call the helper function
	int temp[high];
	merge(data,temp,low,mid,high);
}

void sorts::mergesort(int data[], int n) {
    mergesort(data, 0, n-1);
}

void sorts::swap(int& x, int& y){
  int temp = x;
  x = y;
  y = temp;
}

int sorts::partition(int data[], int low, int high) {

    // Time complexity = T(n) = high
  //we could generate a random item for the pivot, but we're using a middle item instead
  int pivdex = data[high];
  //make the pivot be the last item in the array
  int i = (low - 1);

  //write code that decides what are the items that will be on the left side of the pivot or the right side of the pivot
  //we need to write something that goes through the whole list, checks if the data being checked is less than the data within the pivot, ans swap accordingly
  for(int j = low; j <= high - 1; j++){
      if(data[j] < pivdex){
          i++;
          swap(data[i], data[j]);
      }


  }
  swap(data[i+1], data[high]);
  //return index of pivot
  return i+1;
}

void sorts::quicksort(int data[], int low, int high) {
  //base case, takes care of the same case we hinted on in mergesort
   if (low > high){
       return;
   }
  //find a pivot item, run the partition on the array according to what the pivot is
  //like merge sort, we make a variable to keep track of this

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
    if (low < high) {
        int pi = partition(data, low, high);

        quicksort(data, low, pi - 1);

        quicksort(data, pi + 1, high);
    }
}


void sorts::quicksort(int data[], int n){
  quicksort(data, 0, n - 1);
}