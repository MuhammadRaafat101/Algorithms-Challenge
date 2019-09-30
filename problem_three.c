/*********************************************************************************
 *
 *  problem_three.c
 *  Author: Ahmed Nofal, Instructor at Sprints LLC
 *
 ********************************************************************************/
#include "problem_three.h"
/****************************[Problem Description]*********************************
 *
 * Count occurances of a number in a sorted array
 * Sample Input: arr= [2,2, 4, 5, 5, 5, 5, 6, 6]
 * 				 target = 5
 * Sample Output: The number 5 occured 4 times in the array
 *
 ********************************************************************************/



/*********************************************************************************
 *
 * Function: BinarySearchOccurances
 *
 * @param: arr[], Array that the function should find the number in.
 * @param: arr_size, Size of the array
 * @param: target, The elment to be searched for the last occurance for
 * @param: searchFirst, Indicates whether you are using this function to get the
 * first occurance of the target or last (1 for first and 0 for last)
 * @return: int, the index of the last occurance of the element
 *
 * Description: function to get the number of occurances of a target element in a
 * given sorted array.
 *
 *
 ********************************************************************************/
int BinarySearchOccurances(int arr[], int arr_size, int target, int searchFirst){
	/* Your code goes here */
	int low= 0;
	int high = arr_size-1;
	int mid = 0;
	int result =-1;
	while (low <= high)
	{
		mid= (low+high)/2;
		if(arr[mid]== target)
		{
			result =mid ;
			if(searchFirst ==1)	high = mid-1;
			if(searchFirst ==0)	low = mid+1;
		}else if(arr[mid] > target)
		{
			high = mid-1;
		}
		else
			low = mid+1;

	}
	return result;
}

/* Count occurrences of a number in a sorted array with duplicates*/
void BinarySearchOccurances_test(void)
{
	int A[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int target = 6;

	int n = sizeof(A)/sizeof(A[0]);
	int first = BinarySearchOccurances(A, n, target, 1);  // 1 for first occurrence
	int last = BinarySearchOccurances(A, n, target, 0);   // 0 for last occurrence

	int count = last - first + 1;

	if (first != -1)
		printf("Element %d occurs %d times.", target, count);
	else
		printf("Element not found in the array.");
}


