#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "sorting-lab.h"
#include <iostream>

TEST_CASE("Constructor") {
    sorts t;
}

TEST_CASE("Destructor") {
    sorts *t = new sorts;
    delete t;
}

TEST_CASE("selection sort") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.selectionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }
}

TEST_CASE("insertion sort") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.insertionSort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }
}

TEST_CASE("merge sort") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.mergesort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }
}

TEST_CASE("quick sort") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.quicksort(arr, size);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }
}

TEST_CASE("merge sort sub") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.mergesort(arr, 0, 0);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.mergesort(arr, 1, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.mergesort(arr, 1, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.mergesort(arr, 0, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 4 1 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.mergesort(arr, 1, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "3 1 2 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.mergesort(arr, 0, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 1 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.mergesort(arr, 2, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "4 3 1 2 ");
    }
}

TEST_CASE("quick sort sub") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.quicksort(arr, 0, 0);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.quicksort(arr, 1, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.quicksort(arr, 1, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.quicksort(arr, 0, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 4 1 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.quicksort(arr, 1, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "3 1 2 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.quicksort(arr, 0, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 1 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.quicksort(arr, 2, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "4 3 1 2 ");
    }
}

TEST_CASE("merge") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        int temp[size];
        t.merge(arr, temp, 0, 0, 0);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        int temp[size];
        t.merge(arr, temp, 0, 1, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        int temp[size];
        t.merge(arr, temp, 0, 1, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        int temp[size];
        t.merge(arr, temp, 0, 2, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 4 2 3 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        int temp[size];
        t.merge(arr, temp, 0, 1, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 1 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        int temp[size];    
        t.merge(arr, temp, 0, 1, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "3 2 1 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        int temp[size];
        t.merge(arr, temp, 1, 2, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "4 1 3 2 ");
    }
}

TEST_CASE("partition") {
    SUBCASE("1 elem"){
        sorts t;
        const int size = 1;
        int arr[size] = {1};
        t.partition(arr, 0, 0);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 ");
    }

    SUBCASE("sorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {1,2,3};
        t.partition(arr, 1, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 ");
    }

    SUBCASE("sorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {1,2,3,4};
        t.partition(arr, 1, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "1 2 3 4 ");
    }

    SUBCASE("unsorted even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,2,3,1};
        t.partition(arr, 0, 2);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 4 1 ");
    }

    SUBCASE("unsorted odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,1,2};
        t.partition(arr, 1, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "3 1 2 ");
    }

    SUBCASE("reverse odd"){
        sorts t;
        const int size = 3;
        int arr[size] = {3,2,1};
        t.partition(arr, 0, 1);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "2 3 1 ");
    }

    SUBCASE("reverse even"){
        sorts t;
        const int size = 4;
        int arr[size] = {4,3,2,1};
        t.partition(arr, 2, 3);
        std::ostringstream oss;
        t.print(arr, size, oss);
        REQUIRE(oss.str() == "4 3 1 2 ");
    }
}