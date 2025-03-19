/*printing the maximum and minimum element in the array*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//a function to print unique elements in array
void unique_elements_array(int arr[],int size){
  // iterate over all elements with index i
  for (int i = 0; i < size; i++)
  {
    // iterate over all elements with index j
    bool match_found = false;
    for (int j = 0; j < size; j++){
      // if we find a matching elements (that is not the same element) then 
      // the element is not unique
      if (arr[i] == arr[j] && i != j) 
        match_found = true;
    }
    // only print out the element if it is NOT unique
    if (!match_found) printf("%d\n", arr[i]);
  }
  return;
}
//a function to delete element in array by the index
   for(int i=del_index;i<size-1;i++){
      arr[i]=arr[i+1];
   }
}
//Define a function that takes 3 parameters the array we are searching for an element inside,the number of elements in the array and the key-value. 
int Linear_search(int array[],int n,int x){
//By using iterative for-loop we search for each element in the array starting from zero index to the l// The Quicksort function Implementationast element
for (int i=0;i<n;i++){
    if(array[i]==x){
        return i;  //return the index of the key-value
    }
}
return -1; //return false if the element is not in the array
}
//a function to merge sorted arrays
void merge_sorted_arrays(int arr1[],int arr2[],int size1,int size2,int result[]){
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            k++;
            i++;
        }
        else{
            result[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<size1){
        result[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2){
        result[k]=arr2[j];
        k++;
        j++;
    }
return;
}
void shift_left_once(int arr[],int size){
   for(int i=0;i<size;i++){
   arr[i]=arr[i+1];
   }
}
void shift_left(int arr[],int size,int occurence){
      for(int i=0;i<occurence;i++){
      shift_left_once(arr,size);
   }
}
void shift_right_once(int arr[],int size){
   for(int i=size-2;i>=0;i++){
      arr[size-1]=arr[i];
   }
}
//a function to remove all duplicates in an array
int *remove_duplicates(int array[], int length, int *new_length)
{
/*Allocate the maximum amount of space required for the new_array using 
  malloc, we assume that EVERY element in the array may be unique and 
  so allocate space for an array of the same length.  We will use realloc()
  to "re-size" this new_array later if needed. */
  int *new_array = malloc(length * sizeof(int)); 
  /* unique_count will keep track of the number of unique elements*/
  int unique_count = 0;
  
  // the outer loop will be used to check each element of the original array
  for (int i = 0; i < length; i++)
  {
    // this inner loop will check to see if the element at index i in the 
    // original array is found in the new_array, setting is_unique to false 
    // if this is the case
    bool is_unique = true;
    for (int j = 0; j < unique_count; j++)
      if (new_array[j] == array[i])
      {
        is_unique = false;
        break;
      }
    
/*    If the element at index i in in the original array is NOT found in 
    new_array, this must be the first occurrence of this value, and so we 
    add it to the new_array and increment unique_count.  If the element IS
    found in new_array above, we don't do this, which will have the effect 
    of filtering the duplicate values as they will NOT be added to new_array.*/
    if (is_unique)
    {
      new_array[unique_count] = array[i];
      unique_count++;
    }
  }
  // If the count of unique elements matches the original length of the array 
  // then the original array must not have contained any duplicate elements and 
  // there is no need to re-size the new_array.  But if the unique_count does 
  // not equal the length of the original array, there must have been some 
  // duplicate(s), and so new_array can be stored in less space than the 
  // original array.  So we use realloc() to reallocate space for the array, 
  // allocating just enough space to store unique_count number of ints.
  if (unique_count != length)
    new_array = realloc(new_array, unique_count * sizeof(int));
  
  // We de-reference the new_length pointer variable to set "whatever it is 
  // pointing to" to the unique_count value, as a way of "returning" to the 
  // calling environment the length of the new array with duplicates removed.
  *new_length = unique_count;
  
  // Return the pointer to the new array on the heap with duplicates removed
  return new_array;
}

//a function to rotate the array once to the left
void rotate_left_once(int arr[],int size,int occurence){
   int temp=arr[0];
   for(int i=0;i<size;i++){
      arr[i]=arr[i+1];
   }
arr[size-1]=temp;
}
//a function to rotate an array to the left
void rotate_left(int arr[],int size,int occurence){
    for(int i=0;i<occurence;i++){
        rotate_left_once(arr,size,occurence);
    }
}
void rotate_right_once(int arr[],int size){
   int temp=arr[size-1];
   for(int i=size-2;i>=0;i--){
      arr[i+1]=arr[i];
   }
arr[0]=temp;
}
void rotate_right(int arr[],int size,int occurence){
    for(int i=size-2;i>=occurence;i--){
        rotate_right_once(arr,size);
    }
}
void reverse_array(int arr[],int size){
   int temp=0; //define a temporary variable
   for(int i=0;i<size/2;i++){ 
      //we keep taking the zero'th index element and assign it to the last index_value
      temp=arr[i]; 
      arr[i]=arr[size-i-1]; 
      arr[size-i-1]=temp;
   }
   return;
}
/*a function that copies an array*/
int *array_copy(int *arr,int size){  //this function is a pointer to an array which is the copied array
   int *c= malloc(size*sizeof(int)); //allocate memory to copy elements of array
   for(int i=0;i<size;i++){          //loop through the array
      c[i]=arr[i];                   //copy each element in array and assign it to the array c[] which represents the copied array
   }
   return c;
}
//a function that finds the minimum value in an array
int min_array(int arr[],int size){
   int min_index=0,min;           //define 2 variable one which represents the minimum element and one represents the minimum index
   min_index=0;
   min=arr[min_index];
   for(int i=1;i<size;i++){      //loop through the array
      if(arr[i]<arr[min_index]){ // c
   return min;                   //if the element is less than the arr[0](make comparison)
         min_index=i;            //if it is less let minmum index = i
         min=arr[min_index];     //if it is less then assign arr[min_index] to min
      }
   }
   return min;
}
//a function that finds the maximum value in an array
int max_array(int arr[],int size){
   int max_index,max; //define 2 variable one which represents the maximum element and one represents the maximum index
   max_index=0;
   max=arr[max_index];
   for(int i=1;i<size;i++){         //loop through the array
         if(arr[i]>arr[max_index]){ //check if elements are greater than arr[0] (make comparison)
         max_index=i;               //if it is greater then let the maximum index=i
         max=arr[max_index];        //if it is greater assign arr[max_index to maximum]
   }
   }
   return max;
}
//a function the count the occurence of a number in an array
int counting_element_in_array(int arr[],int size,int value){
   int count=0;
   for(int i=0;i<size;i++){ //loop through the array
      if(arr[i]==value){ //check if value of element is equal to the value
         count++; //increase the counter
      }
   }
   return count;
}
//a function that return the sum of elements in an array
int sum_array(int arr[],int size){ 
   int sum=0;                 //define a variable called sum which is initialized with 0
   for (int i=0;i<size;i++){  //loop through an array
      sum+=arr[i];            //each time it iterates with index it adds the element to sum
   }
   return sum; 
}
bool disjoint_arrays(int arr1[], int arr2[], int n, int m){
    int i,j;
    for(i = 0;i<n;i++){
        for(j=0;j<m;j++)
        {
            if(arr1[i] == arr2[j])
            return false;
            }
            }
            return true;
            }
//a function that returns the average of an array
float average_array(int arr[],int size){
   int sum=0;
   for (int i=0;i<size;i++){
      sum+=arr[i];
   }
   return sum/size; //returns the average of array
}

int main(void){
   int arr1[1000],arr2[1000],n,key;
   printf("enter the size of the arr1\n");
   scanf("%d",&n);
   printf("enter the elements of the arr1\n");
   for (int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
   }
   //reversing an array
   // printf("the reversed arr1 is \n");
   // reverse_array(arr1,n);
   for(int i=0;i<n;i++){
   printf("%d\t",arr1[i]);
   }
   printf("\n");
   printf("the maximum element in the arr1 is %d\n",max_array(arr1,n));
   printf("the minimum element in the arr1 is %d\n",min_array(arr1,n));
   printf("enter the element you want to count in the arr1\n");
   scanf("%d",&key);
   printf("the number of occurence of the element you specified is%d\n",counting_element_in_array(arr1,n,key));
   printf("the sum of the values in the arr1 is equal to %d\n",sum_array(arr1,n));
   printf("the average of the arr1 is equal to %.2f\n",average_array(arr1,n));
   int *arr1_copy=array_copy(arr1,n);
   for(int i=0;i<n;i++){
      printf("%d",arr1_copy[i]);
   }
   printf("enter the size of the arr2\n");
   scanf("%d",&n);
   printf("enter the elements of the arr2\n");
   for (int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
   }
   if(disjoint_arrays(arr1,arr2,5,5)){
      printf("disjoint\n");
   }
   else{
      printf("not disjoint\n");
   }
   

}
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
