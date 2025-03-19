                   /*بسم الله الرحمن الرحيم و الصلاه و السلام علي خاتم الرسل*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//From the man who sold the world to all people who want to escape from life and become programmers
/********************************************************************************/
/*write a program to read the coordinates of two points and the program
should calculate and print the euclidean distance between two points (search for the formula)*/
/********************************************************************************/
// int main(void){
// float p,q,sum=0,Euclidean; //define the equation parameters
// int n; //define the n space
// printf("enter the the number of n space:\n");
// scanf("%d",&n);
// for(int i=0;i<=n;i++){
//     printf("enter the point p:\n");
//     scanf("%f",&p);
//     printf("enter the point q:\n");
//     scanf("%f",&q);
//     sum+=pow(p-q,2); //finding the sums
// }
// Euclidean=sqrt(sum); //calculate the euclidean space according to the formula
// printf("the euclidean distance between the 2 points is equal to: %.2f",Euclidean);
// }
/**************************************************************************/
/*finding the multiplication table*/
/**************************************************************************/
// int main() {
//     //just use nested loops lol
//     int n;
//     printf("enter the value of n \n");
//     scanf("%d", &n);
//     printf("\t");
//     for(int x = 1; x <= n; x++) {
//         printf("%d\t", x);
//     }
//     printf("\n");
//     for(int c = 1; c <= n; c++) {
//         printf("%d |\t", c);
//         for(int i = 1; i <= n; i++) {
//             printf("%d\t", i * c);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/**************************************************************************
*A c program that finds the minimum and the maximum score of the student from 3 scores
*Then it calculates the average between bot of them 
***************************************************************************/
// int main(void){
// float score1,score2,score3;
// float maximum_score,minimum_score;
// //take inputs from the user
// printf("enter the first score of the student: \n");
// scanf("%f",&score1);
// printf("enter the second score of the student: \n");
// scanf("%f",&score2);
// printf("enter the third score of the student: ");
// scanf("%f",&score3);
// //check which is the maximum and which is the minimum
//     if(score1>score2 && score1>score3){
//          maximum_score=score1;
//     }
//     else if(score2>score3 && score2>score1){
//          maximum_score=score2;
// }
//     else{
//          maximum_score=score3;
//     }

//     if (score1 < score2 && score1 < score3)
//     {
//         minimum_score= score1;
//     }
//     else if (score2 < score1 && score2 <= score3)
//     {
//         minimum_score= score2;
//     }
//     else
//     {
//         minimum_score = score3;
//     }

// float average=(minimum_score+maximum_score)/2.0;
// printf("the average score is equal to %.2f",average);
// }
/***************************************************************
 * Using if-statement to print the absolute value of a number
 *
 ***************************************************************/
// int main(void){
//  //Declaration
// signed int number;
// printf("please enter the number: \n");
// scanf("%i",&number);
    ////checking whether the number is negative or postive
// if (number<0)
// {
//     number=-1*number;
// int main(
//     {
//         overPay = (hours - 40.0) * rate * 0.30;
//     } // End if
//     // Rest of the calculation
//     totalPay = regularPay + overPay;
//     // Printing output
//     printf("Regular pay= %.2f\n",regularPay); 
//     printf("Over time pay= %.2f\n",overPay);
//     printf("Total pay= %.2f",totalPay); 
// }
/***************************************************************
 * Use of an if-else statement to find a pass/no-pass grade
 *
 ***************************************************************/
// int main(void)
// {
//     // Local Declaration
//     int score;
//     // Input
//     printf("Enter a score between 0 and 100: ");
//     scanf("%i",&score);
//     // Decision
//     if (score >= 60)
//     {
//         printf("Grade is pass" );
//     } // End if
//     else
//     {
//         printf("Grade is nopass" );
//     } // End else
// }
/***************************************************************
 Use of if-else statement to print larger between two numbers
 or print the first if numbers are equal
***************************************************************/
// int main(void)
// {
//     // Declaration
//     int num1, num2;
//     int larger;
//     // Input Stataments
//     printf("Enter the first number: ");
//     scanf("%i",&num1);
//     printf("Enter the second number: ");
//     scanf("%i",&num2);
//     // Decision
//     if (num1 >= num2)
//     {
//         larger = num1;
//     } // End if
//     else
//     {
//         larger = num2;
//     } // End else
//     // Printing result
//     printf("the larger number is: %i",larger);
// }
/***************************************************************
* Find a grade given a score using the multi-way selection
*
****************************************************************/
// int main(void)
// {
//     // Declaration
//     int score;
//     char grade;
//     // Get Input
//     printf("Enter a score between 0 and 100: \n");
//     scanf("%i",&score);
//     // Multi-way decision using if-else
//     if (score >= 90)
//     {
//         grade = 'A';
//     }
//     else if (score >= 80)
//     {
//         grade = 'B';
//     }
//     else if (score >= 70)
//     {
//         grade = 'C';
//     }
//     else if (score >= 60)
//     {
//         grade = 'D';
//     }
//     else
//     {
//         grade = 'F';
//     }
//     // Output
//     printf("your grade is: %c",grade);
// } // End main
/***************************************************************
* Use a switch statement to print the days of the weeks from a 
  specific day to the end of the week.
***************************************************************/
// int main(void)
// {
//     // Declaration
//     int day;
//     // Input
//     printf("Enter a number between 0 and 6: ");
//     scanf("%i",&day);
//     // Switch statement (decision and output)
//     switch (day)
//     {
//     case 0:
//         printf("sunday\n");
//     case 1:
//         printf("monday\n");
//     case 2:
//         printf("tuesday\n");
//     case 3:
//         printf("Wednesday\n");
//     case 4:
//         printf("Thursday\n");
//     case 5:
//         printf("Friday\n");
//     case 6:
//         printf("Saturday\n");
//     } // End switch
// } // End main
/***************************************************************
 Find age eligibility to rent a car
***************************************************************/
// int main(void)
// {
//     // Declaration of variables
//     int age;
//     // Getting input
//     printf("enter your age: ");
//     scanf("%i",&age);
//     // Setting the condition
//     // Testing the condition and output
//     if ((age >= 25) & (age <= 100))
//     {
//         printf("you are eligible to rent a car: \n");
//     }
//     else
//     {
//         printf("you are not eligible to print a car: \n");
//     }
// }
/***************************************************************
 Turn the air conditioning system on if the temperature is
 below or above a certain temperature.
***************************************************************/
// int main(void)
// {
//     // Variable declaration
//     int temperature;
//     // Input the temperature
//     printf ("Enter the temperature: ");
//     scanf("%i",&temperature);
//     // Make the decision
//     if (temperature >= 75 || temperature <= 65)
//     {
//         printf("The air condition system is turned on!\n");
//         if (temperature >= 75)
//         {
//             printf("the cooler is working\n");
//         }
//         else
//         {
//             printf("the heater is working!\n");
//         }
//     }
//     else
//     {
//         printf("the air conditioner is turned off ");
//     }
// }
/***************************************************************
* Find if a given year is a leap year testing three conditions
****************************************************************/
// int main()
// {
//     // Variable declaration
//     int year;
//     // Input year
//     printf("Enter the year: ");
//     scanf("%i",&year);
//     // Decision and output
//     if (((year % 400) == 0) || (((year % 4) == 0) && !(((year % 100) == 0))))
//     {
//        printf("this is a leap year\n");
//     }
//     else
//     {
//         printf("this is not a leap year");
//     }
// }
/********************************************************************************/
/*Write and test a program that prints the index of the minimum value among an array of n
elements.*/
/********************************************************************************/
// int main(void){
// //initialize variables
// int arr[1000],min_index,max_index,n,min,max;
// //taking the size of the array from the user
// printf("enter the number of elements in the array: \n");
// scanf("%i",&n);
// //taking elements of the array from the user and printing the elements taken from user
// printf("assign elements in the array: \n");
// for(int i=0;i<n;i++){
//     scanf("%i",&arr[i]);
// }
// printf("the elemets of the array are:\t");
// //this part is used to compare values and find which is the maximum and which is the minimum of the array
// for(int i=0;i<n;i++){
//     printf("%i\n",arr[i]);
// }
// min_index=0;
// min=arr[min_index];
// max_index=0;
// max=arr[max_index];
// for(int i=1;i<n;i++){
//     if(arr[i]<min){
//         min_index=i;
//         min=arr[min_index];
//     }
//     }
// for(int i=1;i<n;i++){
//         if(arr[i]>max){
//         max_index=i;
//         max=arr[max_index];
// }
// }
// //finding the output
// printf("the maximum is %i\n",max);
// printf("the minimum is %i\n",min);
// printf("the minimum index is equal to %i\n",min_index);
// printf("the maximum index is equal to %i\n",max_index);
// }
/*Write a program to read the scores of 5 students, the program should print:
i.
 The average score.
ii.
 How many students got scores greater than the average score?
iii.
 Maximum score.
iv.
 Minimum score.*/
// int main()
// {
//     float max, min, sum = 0, avg, score[20];
//     int counter = 0, i, n;
    
//     printf("Enter the number of students: ");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++)
//     {
//         printf("Enter the score of student %d: ", i + 1);
//         scanf("%f", &score[i]);
//     }
//     max = score[0];
//     for(i = 1; i < n; i++)
//     {
//         if(score[i] > max)
//         {
//             max = score[i];
//         }
//     }
//     min = score[0];
//     for(i = 1; i < n; i++)
//     {
//         if(score[i] < min)
//         {
//             min = score[i];
//         }
//     }
//     for(i = 0; i < n; i++)
//     {
//         sum += score[i];
//     }
//     avg = sum / n;
    
//     for(i = 0; i < n; i++)
//     {
//         if(score[i] >= avg)
//         {
//             counter++;
//         }
//     }
//     printf("The minimum score = %.2f\n", min);
//     printf("The maximum score = %.2f\n", max);
//     printf("The average = %.2f\n", avg);
//     printf("The number of students higher than the average is = %d\n", counter);

// }
/********************************************************************************/
/*Write a program to add two matrices which are entered by user, and print the resultant
matrix. (note: each matrix has dimensions 3x5*/
/********************************************************************************/
////defining multidimensional arrays which will act as matrices
// int main (void){
// int arr1[3][5],arr2[3][5],i,j,addition[3][5];
// //taking elements of the first matrix
// printf("enter the elements of the first matrix:\n");
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         scanf("%d",&arr1[i][j]);
//     }
//     printf("\n\n");
// }
// //taking elements of the second matrix
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         scanf("%d",&arr2[i][j]);
//     }
//     printf("\n\n");
// }
// // adding the two matrices
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         addition[i][j]=arr1[i][j]+arr2[i][j];
//     }
//     printf("\n\n");
// }
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         printf("%d\t",addition[i][j]);
//     }
//     printf("\n\n");
// }
// }
/********************************************************************************/
/*Write a program to multiply two matrices which are entered by user, and print the
resultant matrix. (note: the 1 st matrix has dimensions 3x5 while the 2nd matrix has
dimensions 5x2)
/********************************************************************************/
// int main (void){
// int arr1[3][5],arr2[3][5],i,j,k,mul[3][5];
// //taking elements of the first matrix
// printf("enter the elements of the first matrix:\n");
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         scanf("%d",&arr1[i][j]);
//     }
//     printf("\n\n");
// }
// //taking elements of the second matrix
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         scanf("%d",&arr2[i][j]);
//     }
//     printf("\n\n");
// }
// // multiplying the two matrices
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         mul[i][j]=0;
//         for(int k=0;k<5;k++){
//             mul[i][j]=mul[i][j]+arr1[k][j]*arr2[i][k];
//         }
//     }
//     printf("\n\n");
// }
// for (int i= 0; i < 3; i++)
// {
//     for (int j = 0; j < 5; j++)
//     {
//         printf("%d\t",mul[i][j]);
//     }
//     printf("\n\n");
// }
// }
/********************************************************************************/
/*Write a program to read 30 integer numbers from the user and then call a function
(only one time) to add 14 to each number.
*/
/********************************************************************************/
// void one_time_func(int a[], int size);

// int main() {
//     int arr[30];
//     for (int i = 0; i < 30; i++) {
//         printf("enter value number %d", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     one_time_func(arr, 30);
//     for (int i = 0; i < 30; i++) {
//         printf(" value number %d %d\n", i + 1, arr[i]);
//     }
//     return 0;
// }

// void one_time_func(int a[], int size) {
//     for (int i = 0; i < 30; i++) {
//         a[i] = a[i] + 14;
//     }
// }
//////////////////////////////////////////////////////////////////////////////////
/*Write the following functions:
 Write a function named Maximum that receives an array and its size as input parameters,
and returns the maximum value.
*/
// float maximum(float arr[],int size){
//     int maximum_index=0,maximum;
//     maximum_index=0;
//     maximum=arr[maximum];
//     for(int i=0;i<size;i++){
//         if(arr[i]>arr[0]){
//             maximum_index=i;
//             maximum=arr[maximum_index];
//         }
//     }
//     return maximum;
// }
/********************************************************************************/
// /* Write a function named Average that receives an array and its size as input parameters,
// and returns the average value.
// */
/********************************************************************************/
// float average(float arr[],int size){
//     float sum=0.0;
//     for(int i=0;i<size;i++){
//             sum+=arr[i];
//         }
//     return sum/size;
//     }
/********************************************************************************/
 /* Write a function named Count that receives an array and its size as input parameters,
 and returns the number of array values above or equal 50.*/
/********************************************************************************/
// double Count(double c[], int size)
// {
//     double count = 0;
//     for(int i = 0; i < size; i++)
//     {
//         if(c[i] >= 50)
//             count++;
//     }
//     return count;
// }
/********************************************************************************/
/*Then, write a program that read the scores of 20. Then, the program uses the above
functions to print on the display:
Average score.
Maximum score.
Number of succeeded students.*/
/********************************************************************************/
// int main(void){
//     float arr[20];
//     printf("enter the scores of the students: \n");
//     for(int i=0;i<20;i++){int countEven(int* a, int size);

// int main() {
//     int iar[4] = {5, 2, 8, 3};
//     int e = countEven(iar, 4);
//     printf("There are %d even numbers.\n\n", e);
//     return 0;
// }

// int countEven(int* a, int size) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         if (a[i] % 2 == 0)
//             count++;
//     }
//     return count;
// }
//         scanf("%f",&arr[i]);
//     }
// printf("the maximum score of the students is %lf: \n",maximum(arr,20));
// printf("the average score of the students is %lf: \n",average(arr,20));

// }
/********************************************************************************/
/*Write a function countEven(int, int) which receives an integer array and its size,
and returns the number of even numbers in the array.
*/
/********************************************************************************/
// int countEven(int* a, int size);

// int main() {
//     int iar[4] = {5, 2, 8, 3};
//     int e = countEven(iar, 4);
//     printf("There are %d even numbers.\n\n", e);
//     return 0;
// }

// int countEven(int* a, int size) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         if (a[i] % 2 == 0)
//             count++;
//     }
//     return count;
// }
/********************************************************************************/
/*                                   POINTERS                                  */
/*there is local and global variables that can be defined it is not possible to access the local variable normally
so we use pointers which points at the address of the variable and make it accessible and here is example to see how the pointers work*/
// int main(void){
    // float x=5;
    // float* ptr=&x;
    // printf("x= %.1f\n",x);
    // printf("*ptr= %.1f\n",*ptr);
    // printf("&x= %p\n",&x);
    // printf("the sizeof(ptr)= %ld",sizeof(ptr));
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // int x=257;
    // int* ptr=&x;
    // printf("%p",&*ptr+1 );
    // //ptr[i]=*(ptr+i) the main definition of the array
// }
/********************************************************************************/
/*Write a program with a function that takes two int parameters, adds them together, then
returns the sum. The program should ask the user for two numbers, then call the function
with the numbers as arguments, and tell the user the sum.
*/
/********************************************************************************/
// int add(int x,int y){
//     return x+y;
// }
// int main(void){
//     printf("%d",add(3,1));
// }
/*write a function that recieves an integer number and returns its cubic value then write a program that uses an add function
to calculate and print this sequence: 1+8+27+64+125+.....+1000*/
// long int cubic(int x){
//     return pow(x,3);
// };
// int main(){
//     int x,sum=0;
//     for(int i=1;i<=10;i++){
//         x=i;
//         printf("%li+",cubic(x));
//         sum+=cubic(x);
//     }
//     printf("\b");
// }
/********************************************************************************/
/********************************************************************************/
/*Pointers Examples*/
/*                                      DANGLING                                                        */
/*Dangling pointer occurs at the time of the object destruction when the object is deleted
or de-allocated from memory without modifying the value of the pointer. In this case,
the pointer is pointing to the memory, which is de-allocated. The dangling pointer can
point to the memory, which contains either the program code or the code of the
operating system. If we assign the value to this pointer, then it overwrites the value of
the program code or operating system instructions; in such cases, the program will show
the undesirable result or may even crash. If the memory is re-allocated to some other
process, then we dereference the dangling pointer will cause the segmentation faults*/

//EXAMPLE:-
// int main()
// {
// int *ptr=(int *)malloc(sizeof(int));
// int a=560;
// ptr=&a;
// free(ptr);
// return 0;
// }
/*                  LEARN HOW TO FUCKING READ THIS SHIT             */
// int main(){
//     int int1=26; //variable int1=26
//     int int2=45; //variabke int2=45
//     int *int1Ptr= &int1; //pointer int1Ptr points to address of int1
//     int *int2Ptr= &int2; //pointer int2Ptr points to address of int2
//     *int1Ptr= 89; //int1=89
//     *int2Ptr = 62; //int2=62
//      int1Ptr=int2Ptr; //address of int1Ptr = address of int2Ptr
//      *int1Ptr=80; //int1=80
//      int1=57; //int1=57
//      printf("%i\t%i\t\n",int1,int2); // int1=80 int2=57
//      printf("%d\t%d\t",*int1Ptr,*int1Ptr); //pointer int1Ptr = pointer int2Ptr
// }
/********************************************************************************/
/*write your own implementation of the function double power(double x,int y) 
that returns the value x^y for integer y. Make sure that your function works correctly for both postive and negative values of y*/
/********************************************************************************/
////by using the recursion
// int power(int x,unsigned int y){
//     if (x==0){
//         return 1;
//         }
//     else{
//         // x*power(x,y-1)=x*x*power(x,y-2)=x*x*xpower(x,y-3)=....
//         return x*power(x,y);
//     }
// }
//using normal implementation
// int power(int x,unsigned int y){
//     int temp=1;
//     if(y>0){
//         for(int i=0;i<y;i++){
//             temp*=x;
//         }
//     }
//     else{
//         y*=-1;
//         for(int i=0;i<y;y++){
//             t    temp=1/temp;
//     }
// return temp;
// }
// int main(void){
// printf("%d",power(3,3));emp*=x;
//         }
//         temp=1/temp;
//     }
// return temp;
// }
// int main(void){
// printf("%d",power(3,3));
// }
/********************************************************************************/
/*A program to check whether or not the number is prime*/
////a prime number is any number that is divisble by itself and 1 only 
// int isPrime(unsigned int x){
//     int flag=1;
//     if (x<=1){
//         flag=0;
//         return flag;
//     }
//     else{
//         for(int i=2;i<=x;){
//             if(x%i==0){
//                 flag=0;
//                 break;
//                 }
//             else{
//                 flag=1;
//                 break;
//             }
//             }
//         }
//     if (flag==1){
//         return flag;
//     }
//     else{
//         return flag;
//     }
//     }
// int main(void){
//     printf("%i",isPrime(6));
// }
/*Define a recursive funtion that takes an integer argument and 
returns the factorial of that number*/
// int factorial(int x){
//     if (x<=1){
//         return 1;
//     }
//     else{
//         return x*factorial(x-1);
//     }
// }
// int main(void){
//     printf("%d",factorial(4));
// }
/********************************************************************************/
/*after writing the recursive function to calculate the factorial
write another recursive function to calculate 1+2+3+.....
then write a program that finds (13+14+15+16+.....+25)/(1!+3!+5!+7!*/
/********************************************************************************/
// float factorial(int x){
//     if (x<=1){
//         return 1;
//     }
//     else{
//         return x*factorial(x-1);
//     }
// }
// float add_recursive(int start,int end,int step){
//     //define the start and end values with the step value
//     if(start==end){
//         return start;
//     }
//     //if the start is not equal the end then recurse
//     else{
//         return start+add_recursive(start+step,end,step);
//     }
// }
// int main(void){
//     float sum2=0,sum1=0,result;
//     sum1=add_recursive(13,25,1);

//     for (int i = 1; i <= 7; i+=2){
//         sum2 += factorial(i);
//     }
//     result=sum1/sum2;
//     printf("%f",result);
// }
/*pass by value versus pass by refrence*/
// void passbyvalue(int i){
//     i=99;
//     return;
// }
// void passbyrefrence(int *i){
//     *i=64;
//     return;
// }
// int main(){
//     int x=3;
//     passbyvalue(x);
//     printf("pass by value\t%d\n",x);
//     passbyrefrence(&x);
//     printf("pass by refrence\t%d\n",x);
//     return 0;
// }
/********************************************************************************/
/*Write a function that solves a quadratic equation,and a program that used
function should return the number of solutions as well Ax^2+bx+c=0
Note:You should use the refrence parameters*/
/********************************************************************************/
////define function that finds the discrimant 

// double quad_solve(double a, double b, double c, double *root1, double *root2);

// int main() {
//     double a, b, c, x1, x2, x;
//     printf("enter the value of a=");
//     scanf("%lf", &a);
//     printf("enter the value of b=");
//     scanf("%lf", &b);
//     printf("enter the value of c=");
//     scanf("%lf", &c);
//     printf("the quadratic equation is %lf*x*x+%lf*x+%lf\n", a, b, c);
//     x = quad_solve(a, b, c, &x1, &x2);
//     if (x == 0)
//         printf("the root of the equation is %lf\n", x1);
//     else if (x > 0) {
//         printf("the first root of the equation is %lf\n", x1);
//         printf("the second root of the equation is %lf\n", x2);
//     }
//     return 0;
// }

// double quad_solve(double a, double b, double c, double *root1, double *root2) {
//     double discriminant;
//     discriminant = (b * b) - (4 * a * c);
//     if (discriminant < 0) {
//         printf("The quadratic equation has no roots\n");
//         return -1;
//     } else if (discriminant == 0) {
//         printf("The quadratic equation has one root\n");
//         *root1 = (-b + sqrt(discriminant)) / (2 * a);
//         return 0;
//     } else {
//         printf("The quadratic equation has two roots\n");
//         *root1 = (-b + sqrt(discriminant)) / (2 * a);
//         *root2 = (-b - sqrt(discriminant)) / (2 * a);
//         return 2;
//     }
// }
/*using refrence parameters write a function to swap two integer numbers*/
// void get_numbers(int *input1, int *input2);
// {
//     printf("Enter two integers: ");
//     scanf("%d %d", input1, input2);
//     return;
// }
// void swap_values(int *variable1, int *variable2){
//     int temp;
//     temp = *variable1;
//     *variable1 = *variable2;
//     *variable2 = temp;
//     return;
// }
// void show_results(int output1, int output2){
//     {
//     printf("In swapped numbers %d %d\n", output1, output2);
//     return;
//     }
// }

// int main()
// {
//     int first_num, second_num;
//     get_numbers(&first_num, &second_num);
//     swap_values(&first_num, &second_num);
//     show_results(first_num, second_num);
//     return 0;
// }
