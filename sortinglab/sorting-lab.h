#ifndef __SORTS__
#define __SORTS__

#include <ostream>
#include <algorithm>
#include <string> 

class sorts {
	public:
		sorts();
        ~sorts();
		void selectionSort(int * unsortedArr, int arrSize);
		void insertionSort(int * unsortedArr, int arrSize);
		void print(int data[], int n, std::ostream& os = std::cout);
		void merge(int data[],int temp[], int low, int mid, int high);
		void mergesort(int data[], int low, int high);
		void mergesort(int data[], int n);
		void swap(int& x, int& y);
		int partition(int data[], int low, int high);
		void quicksort(int data[], int low, int high);
		void quicksort(int data[], int n);
};

#endif