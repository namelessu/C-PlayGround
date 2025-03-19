/*---------------------------------------------Introduction to algorithms and data-structures-------------------------------------------------------------*/
//An algorithms can be defined as a way solve a problem an example of an algorithm can be a cooking reciepe or gps instructions to find the direction to a location.
//In computer science knowledge we define algorithms as a way to solve a computing problem and try to find the most optimum method to solve the problem by balancing between Time complexity and Space complexity.
//Time complexity:is defined as the length of time the program takes to operate.
//Space complexity:is defined as the amount of memory or resources the program takes.
//Sometimes we can achieve less time complexity at the cost of space complexity and sometimes we achieve the opposite so there is a decrease relation between them as we can never achieve everything.
//We also define specific terms to analyze this algorithms such as average-case,worst-case,best-case and asympotitc case in this methods we always look at the relation between time-complexity and space-complexity which is seen in what we call The big-O notation.
//--Worst case:is the worst way the algorithm will work to achieve the output.
//--Best case:is the best way the algorithm will work to achieve the output.
//--Asyomptitc case:a logrithmic O(n) is optimum at high values but not the same for a linear O(n) in here we use this method to define which is the most optimum path.
//if we take linear search for example it can be in its worst case at high value but it is different for the binary search.
//--Average case:in this method we expirement with the algorithm with different inputs and then define the average complexity based on those.
//There are several methods to solve problems one of them is divide and conquer where we divide the problem into subproblems and conquer each one and solve it.
/******************************************************************************************************************************************/
/*In this Document we are going to see some of important algorithms we need in our studies using C-programming language*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Searching algorithms:-
//1-Linear search:-
/*Assume that im thinking about a number between 1 to 100 like 58 and i ask someone to guess it if asks it is 1 or 2 or 3..... till he reaches the number this is called the linear search*/
/*Pseudo-code for linear-search:-
 Start
 linear_search ( array, value)
  For each element in the array // loop the element till the size 
    If (searched element == value)
      return key
    end if
    end for
    end*/
//Coding in C:-
//Define a function that takes 3 parameters the array we are searching for an element inside,the number of elements in the array and the key-value. 
int Linear_search(int array[],int size,int key_value){
//By using iterative for-loop we search for each element in the array starting from zero index to the l// The Quicksort function Implementationast element
for (int i=0;i<size;i++){
    if(array[i]==key_value){
        return i;  //return the index of the key-value
    }
}
return false; //return false if the element is not in the array
}

//complexity O(n)
/****************************************************************************************************************************/
//2-Binary search:-
/*In this method it is important to have the array we can try to use any sort of sorting algorithms such as mergeSort for an example.
  Then we try to reduce the searching range lets take same example above numbers from 1 to 100 and the number we are looking for is 56 we ask if it bigger or lower than 50 then it is bigger we exclude numbers below 50.
  Then we ask if it between 60 and 50 and so on here we reduce range of searching and made it better at some input scenarios than the linear search method.*/
/*Pseudo-code for binary_search:-
   binarySearch(array, size)
       loop until start is not equal to finish
           midIndex = (start + finish)/2
           if (element == array[midIndex] )
               return midIndex
           else if (element > array[midIndex] )
               start = midIndex + 1
           else
               finish = midIndex – 1 */
//coding in C:-
//Define a function that takes 3 parameters the array we are searching for an element inside,the number of elements in the array and the key-value. 
int binary_search(int array[],int size,int key_value){// The Binary sort function Implementation
    int first=0;  //first index
    int last=size-1; //last index
    while (first<=last) //looping while first index is less than or equal to the last index
    {
        int midpoint=(first+last)/2; //define an iterative midpoint
        if (array[midpoint]==key_value) //if arr[midpoint] is equal to value then return the index of the value
        {
            return midpoint;
        }
        
        if(array[midpoint]<key_value){ //if it is less then start looping from the value after midpoint
            first=midpoint+1;
        }
        else{
            last=midpoint-1; //if it is greater start looping till the value before midpoint
        }
    }
return false; //if the key-value is not found then return false.
}
//Complexity O(log(n))
/*********************************************************************************************************/
//Sorting Algorithms
//1-Selection sorting:-
/*it is an algorithm th selects the least number in an unsorted list then goes till it reach highest value*/
//Since we are going to swap values in this array we are going to define a swap function.
/*pseudo-code:-
   function Selection_sort(int Arr):
     for i=0 to length(Arr):
     Minimum_element  = Arr[0]
           for each unsorted element:
                   if element < Minimum_element
           element = New_minimum
      swap (Minimum_element, first unsorted position)
end Selection_sorts sorted.*/
//coding in C:-
void swap(int *xp,int *yp){
    int temp=*xp; 
    *xp=*yp; 
    *yp=temp;
}
void selection_sorting(int arr[],int size){
    int min_index=0;
    for (int i = 0; i < size-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_index = i; 
        for (int j = i+1; j < size; j++)
          if (arr[j] < arr[min_index]) 
            min_index = j; 
  
        // Swap the found minimum element with the first element 
           if(min_index != i) 
            swap(&arr[min_index], &arr[i]); 
    } 
    }
/*********************************************************************************************************/
//2-Bubble sort.
/*In this method we try to swap directly insteand of comparing with minimum element at first
this is good for small size data structures but can be bad for large arrays*/
/*In this method we compare each element with the one before it then swap it*/
void Bubble_sort(int arr[],int size){
    int i,j;
    bool swapped; //define a bool named swap to make it more simple
        for(i=0;i<size-1;i++){
            swapped=false; //Initialize swapped with false bool;
            for(int j=0;j<size;j++){ //in here we compare each element with the one before
                if(arr[j]>arr[j+1]){
                    swap(&arr[j], &arr[j+1]); //we use the swap function we mentioned before by passing by refrence
                    swapped=true; //then it is swapped
                }
            }
            if (swapped=false){ //if there is no two elements swapped then break and get out of the loop
                break;
            }
        }
    }
/*complexity:O(n2)*/
/*********************************************************************************************************/
//3-quick-sort:-
/*in this method we choose a pivot then partition around it
ex    6 3 7 5 1 2 [4]:4 is the pivot
then  3 1 [2] 4 6 7 [5] so all elements above pivot after it and all that is less is before it
then  1 2  3  4  5 7 [6]
then  1 2  3  4  5 6  7*/
/*pseudo-code*/
/*function quickSort(arr, l, r)
    if l < r
        pivotIndex = partition(arr, l, r)
        quickSort(arr, l, pivotIndex - 1)
        quickSort(arr, pivotIndex + 1, r)

function partition(arr, l, r)
    pivot = a bubble sort arr[j] < pivot
            i = i + 1
            swap arr[i] and arr[j]
    
    swap arr[i + 1] and arr[r]
    return i + 1*/ 
/*it is a complex algorithm in implementation as we can see it is a recursive algorithm*/
//coding in C:-
int partition(int arr[],int low,int high)
{
  int pivot=arr[high]; //choosing the pivot let it be last element in the array
  int i=(low-1);       //Index of smaller element and Indicate
  for(int j=low;j<=high;j++)
  {
    //If current element is smaller than the pivot
    if(arr[j]<pivot)
    {
      //Increment index of smaller element
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return (i+1);
}
void quickSort(int arr[],int low,int high) // The Quicksort function Implementation
{
  // when low is less than high
  if(low<high)
  {
    // pi is the partition return index of pivot
     
    int pi=partition(arr,low,high);
     
    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
//complexity n*log(n)
/***********************************************************************************/
/*merge_sort algorithm*/
/*this is the most important sorting algorithm it is a recursive algorithm that divides an array into two sub arrays
then it starts to sort those sub arrays and then merge them till it reaches the sorted array*/
/*Pseudo-code:-
                                     Merge
Input: sorted arrays C and D (length n/2 each).
Output: sorted array B (length n).
Simplifying assumption: n is even.
1 i := 1
2 j := 1
3 for k := 1 to n do
4
 if C[i] < D[j] then
5
 B[k] := C[i]
6
 i := i + 1
7
 else
8
 B[k] := D[j]
9
 j := j + 1
// populate output array
// increment i
// D[j] < C[i]

                                    MergeSort
Input: array A of n distinct integers.
Output: array with the same integers, sorted from
smallest to largest.
--ignoring base cases
C := recursively sort first half of A
D := recursively sort second half of A
return Merge (C,D)
*/
void merge_sorted_subarrays(int arr[], int left, int midpoint, int right) 
{ 
    int i, j, k; 
    int n1 = midpoint - left + 1; 
    int n2 = right - midpoint; 
  
    // Create temp arrays 
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[midpoint + 1 + j]; 
  
    // Merge the temp arrays back 
    // into arr[left..right] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = left; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int left, int right) 
{ 
    if (left < right) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and r 
        int midpoint = (left + right) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, left, midpoint); 
        mergeSort(arr, midpoint + 1, right); 
  
        merge_sorted_subarrays(arr, left, midpoint, right); 
    } 
} 
//complexity  O(n)=6n log 2 n + 6n      
int main(void){
    int arr1[6]={2,8,5,1,6,4};
    // printf("%d\n",Linear_search(arr1,5,1));
    // printf("%d\n",binary_search(arr1,5,6));
    // int arr[1000];
    // int n;
    // printf("enter the number of elements in the array\n");
    // scanf("%d",&n);
    // taking elements from user
    // printf("enter the elements of the array\t");
    // for (int i=0; i<n; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // selection_sorting(arr,n); //testing selection sorting
    // Bubble_sort(arr,n); //testing bubble sorting
    // quickSort(arr,0,n-1); //testing quicksort
    mergeSort(arr1,0,5);
    for (int i=0;i<6;i++){
        printf("%d\t",arr1[i]);
    }
}