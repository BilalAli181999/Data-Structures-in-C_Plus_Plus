#include<iostream>
using namespace std;
template<typename T>
void Swap(T &a, T&b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
void selectionSort(T *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
				Swap(arr[i], arr[j]);
		}
	}
}
template<typename T>
void bubbleSort(T *arr, int n)
{
	for (int i = 0; i < n; i++)
	{  
		bool s = 1;
		for (int j = 0; j < n-1; j++)
		{

			if (arr[j] > arr[j + 1] && s)
			{
				Swap(arr[j], arr[j + 1]);
			//	s = 0;
			}
		}
	}
}
template<typename T>
void insertionSort(T *arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
template<typename T>
void merge(T *arr, int l1, int u1, int l2, int u2)
{
	int s1 = (u1 - l1)+1;
	int s2 = (u2 - l2)+1;
	int s = s1 + s2;
	int k = l1;
	T *temp = new T[s];
	int i = l1, j = l2;
	while (i <= u1 && j <= u2)
	{
		if (arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++;

		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	while(i<=u1)
	{
		temp[k++] = arr[i++];
    }
	while (j <= u2)
	{
		temp[k++] = arr[j++];
	}
	for (int i = l1; i < k; i++)
	{
		arr[i] = temp[i];
	}
delete[]temp;

}
template<typename T>
void mergeSort(T *arr, int l, int u)
{
	if (l >= u)
		return;
	int mid = (u + l) / 2;
	
	mergeSort(arr, l, mid);
	mergeSort(arr, mid+1, u);
	merge(arr, l, mid, mid + 1, u);

}

//int main()
//{
//	int a[10] = { 1,7,3,9,3,12,23,4,6,0 };
////	selectionSort(a, 10);
//	for (int i = 0; i < 10; i++)
//		cout << a[i]<<" ";
//	cout << "\n";
////bubbleSort(a, 10);
////	insertionSort(a, 10);
//	mergeSort(a, 0,10);
//	for (int i = 0; i < 10; i++)
//		cout << a[i] << " ";
//}
//
//void swap(int &a, int &b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
void downHeap(int*data, int c, int n)
{
	int left = 2 * c + 1;
	int right = 2 * c + 2;
	if (left<n && data[left]>data[c])
	{
		swap(data[left], data[c]);
	}
	if (right<n && data[right]>data[c])
	{
		swap(data[right], data[c]);
	}
}
void buildHeap(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		downHeap(a, i, n);
	}
}
void heapSort(int *arr, int n)
{
	
		
}
//int main()
//{
//	int a[10] = { 100,200,50,5,150,11,70,15,18,6 };
//	heapSort(a, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//}



//Heap Sort

// C++ program for implementation of Heap Sort
//#include <iostream>
//using namespace std;
//
//// To heapify a subtree rooted with node i which is
//// an index in arr[]. n is size of heap
//void heapify(int arr[], int n, int i)
//{
//	int largest = i;  // Initialize largest as root
//	int l = 2 * i + 1;  // left = 2*i + 1
//	int r = 2 * i + 2;  // right = 2*i + 2
//
//						// If left child is larger than root
//	if (l < n && arr[l] > arr[largest])
//		largest = l;
//
//	// If right child is larger than largest so far
//	if (r < n && arr[r] > arr[largest])
//		largest = r;
//
//	// If largest is not root
//	if (largest != i)
//	{
//		swap(arr[i], arr[largest]);
//
//		// Recursively heapify the affected sub-tree
//		heapify(arr, n, largest);
//	}
//}
//
//// main function to do heap sort
//void heapSort(int arr[], int n)
//{
//	// Build heap (rearrange array)
//	for (int i = n / 2 - 1; i >= 0; i--)
//		heapify(arr, n, i);
//
//	// One by one extract an element from heap
//	for (int i = n - 1; i >= 0; i--)
//	{
//		// Move current root to end
//		swap(arr[0], arr[i]);
//
//		// call max heapify on the reduced heap
//		heapify(arr, i, 0);
//	}
//}
//
///* A utility function to print array of size n */
//void printArray(int arr[], int n)
//{
//	for (int i = 0; i<n; ++i)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
//
//// Driver program
//int main()
//{
//	int arr[] = { 12, 11, 13, 5, 6, 7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	heapSort(arr, n);
//
//	cout << "Sorted array is \n";
//	printArray(arr, n);
//}
//
//
////Quick sort
//#include<stdio.h>
//
//// A utility function to swap two elements
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
///* This function takes last element as pivot, places
//the pivot element at its correct position in sorted
//array, and places all smaller (smaller than pivot)
//to left of pivot and all greater elements to right
//of pivot */
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[high];    // pivot
//	int i = (low - 1);  // Index of smaller element
//
//	for (int j = low; j <= high - 1; j++)
//	{
//		// If current element is smaller than or
//		// equal to pivot
//		if (arr[j] <= pivot)
//		{
//			i++;    // increment index of smaller element
//			swap(&arr[i], &arr[j]);
//		}
//	}
//	swap(&arr[i + 1], &arr[high]);
//	return (i + 1);
//}
//
///* The main function that implements QuickSort
//arr[] --> Array to be sorted,
//low  --> Starting index,
//high  --> Ending index */
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		/* pi is partitioning index, arr[p] is now
//		at right place */
//		int pi = partition(arr, low, high);
//
//		// Separately sort elements before
//		// partition and after partition
//		quickSort(arr, low, pi - 1);
//		quickSort(arr, pi + 1, high);
//	}
//}
//
///* Function to print an array */
//void printArray(int arr[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	printf("n");
//}
//
//// Driver program to test above functions
//int main()
//{
//	int arr[] = { 10, 7, 8, 9, 1, 5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	quickSort(arr, 0, n - 1);
//	printf("Sorted array: n");
//	printArray(arr, n);
//	return 0;
//}
//
//
//
////Merging Sort
///* C program for Merge Sort */
//#include<stdlib.h>
//#include<stdio.h>
//
//// Merges two subarrays of arr[].
//// First subarray is arr[l..m]
//// Second subarray is arr[m+1..r]
//void merge(int arr[], int l, int m, int r)
//{
//	int i, j, k;
//	int n1 = m - l + 1;
// int n2 = r - m;
//
//	/* create temp arrays */
//	int L[n1], R[n2];
//
//	/* Copy data to temp arrays L[] and R[] */
//	for (i = 0; i < n1; i++)
//		L[i] = arr[l + i];
//	for (j = 0; j < n2; j++)
//		R[j] = arr[m + 1 + j];
//
//	/* Merge the temp arrays back into arr[l..r]*/
//	i = 0; // Initial index of first subarray
//	j = 0; // Initial index of second subarray
//	k = l; // Initial index of merged subarray
//	while (i < n1 && j < n2)
//	{
//		if (L[i] <= R[j])
//		{
//			arr[k] = L[i];
//			i++;
//		}
//		else
//		{
//			arr[k] = R[j];
//			j++;
//		}
//		k++;
//	}
//
//	/* Copy the remaining elements of L[], if there
//	are any */
//	while (i < n1)
//	{
//		arr[k] = L[i];
//		i++;
//		k++;
//	}
//
//	/* Copy the remaining elements of R[], if there
//	are any */
//	while (j < n2)
//	{
//		arr[k] = R[j];
//		j++;
//		k++;
//	}
//}
//
///* l is for left index and r is right index of the
//sub-array of arr to be sorted */
//void mergeSort(int arr[], int l, int r)
//{
//	if (l < r)
//	{
//		// Same as (l+r)/2, but avoids overflow for
//		// large l and h
//		int m = l + (r - l) / 2;
//
//		// Sort first and second halves
//		mergeSort(arr, l, m);
//		mergeSort(arr, m + 1, r);
//
//		merge(arr, l, m, r);
//	}
//}
//
///* UTILITY FUNCTIONS */
///* Function to print an array */
//void printArray(int A[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//		printf("%d ", A[i]);
//	printf("\n");
//}
//
///* Driver program to test above functions */
//int main()
//{
//	int arr[] = { 12, 11, 13, 5, 6, 7 };
//	int arr_size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("Given array is \n");
//	printArray(arr, arr_size);
//
//	mergeSort(arr, 0, arr_size - 1);
//
//	printf("\nSorted array is \n");
//	printArray(arr, arr_size);
//	return 0;
//}
//



int partition(int a[], int l, int u)
{
	int pivot = a[u];
	int i = l;
	for (int j = l; j < u - 1; j++)
	{
		i++;
		swap(a[i], a[j]);

	}
	swap(a[i + 1], a[u]);
	return i + 1;
}
void quickSort(int a[],int l,int u)
{
	if (l < u)
	{
		int p = partition(a, l, u);
		quickSort(a, l, p-1);
		quickSort(a, l + 1, u);
	}
}
int main()
{
	int a[10] = { 100,200,50,5,150,11,70,15,18,6 };
	quickSort(a, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
}


