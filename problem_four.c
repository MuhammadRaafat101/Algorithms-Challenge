/*********************************************************************************
 *
 *  problem_four.c
 *  Author: Ahmed Nofal, Instructor at Sprints LLC
 *
 ********************************************************************************/


/****************************[Problem Description]*********************************
 *
 * Given a nearly sorted array of N elements in which each element maybe misplaced by
 * one position (not more than one position ), that is the X maybe at position i, i+1 or i-1
 * in the array
 *
 * Sample Input: arr = [2, 1, 3, 5, 4, 7, 6, 8, 9]
 * 				 x = 5
 * Sample output: Element 5 is at index 3
 *
 * Sample Input: arr = [2, 1, 3, 5, 4, 7, 6, 8, 9]
 * 				 x = 10
 * Sample Output: Element 10 is not found
 *
 ********************************************************************************/

#include <stdio.h>
//#include "problem_four.h"
/*********************************************************************************
 *
 * Function: searchElement
 *
 * @param: arr[], Array that the function is to count the ones in.
 * @param: arr_size, size of the array
 * @return: int, the number of ones in the array
 *
 * Description: function to get the largest number in the array.
 *
 *
 ********************************************************************************/
int searchElement(int arr[], int arr_size, int target){
	/* Your code goes here*/
        int i=0;
        for(i=1;i<arr_size-1;(i=i*2+1))
        {
            if(target == arr[i])return i;
            if(target == arr[i+1])return i+1;
            if(target == arr[i-1])return i-1;
        }
return -1;
}

void searchElement_test(void)
{
	int A[] = { 2, 1, 3, 5, 4, 7, 6, 8, 9 };
	int target = 5;

	int n = sizeof(A) / sizeof(A[0]);
	int index = searchElement(A, n, target);

	if (index != -1)
		printf("Element %d found at index %d", target, index);
	else
		printf("Element not found in the array");

}
int main()
{
//BinarySearchOccurances_test();
searchElement_test();
return 0;
}

