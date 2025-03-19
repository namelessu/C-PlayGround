//A document that can be used as a refrence to remember the syntax of the C programming
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//define function maximum which finds the maximum of three numbers
// int maximum(int num1,int num2,int num3){
//     int result;
//     if (num1>num2 && num1>num3){
//         result=num1;
//     }
//     else if (num2>num1 && num2>num3)
//     {
//         result=num2;
//     }
//     else{
//         result=num3;
//     }
// return result;
// };


/******************************************************************************************************/
//struct definition
// struct  student
// {
//     //define a bunch of attributes related to the student
//     char name[50];
//     char major[50];
//     int age;
//     float gpa;
    
// };
/******************************************************************************************************/
int main(void){
//printing according the format specifier printf("format",variable)
//%i for integer
// int a,b,c,d;
// a=50;
// b=0x32;
// c=062;
// d=0b10110;
// printf("%i\n",a);    struct student student1;
//taking input and providing output in c language
// char x,y;
// printf("enter the value of x: ");
// scanf("%c",&x);
/******************************************************************************************************/
// printf("enter the value of y: ");
// scanf(" %c",&y);
// printf("\nx=%c\ty=%c",x,y);
// printf("\nx=%i\ty=%i",x,y);
/******************************************************************************************************/
//taking input from the user
    // char name[20];
    // printf("enter your name: ");
    // fgets(name,20,stdin);
    // //scanf("%s",&name);
    // printf("your name is %s",name);
/******************************************************************************************************/
/*hierarchy goes like this
bool=>char=>signed int=>unsigned int=>long signed=>long unsigned=>long long signed=>long long unsigned=>float=>double=>long double*/

//promotion from signed to unsigned except for short data types
// signed char x=-2; //promotion from signed to unsigned
// unsigned char y=5;
// if(x<y){
//     printf("this is not ok");\
// }
// else{
//     printf("this is not ok");
// }
/*Note if we divide float over an integer or do the opposite the result should be float but if you assign it to an integer variable it consider the result as integer*/


/******************************************************************************************************/
//building a mid-lib
// char colour[20];
// char plural_noun[20];
// char celebrity[20];
// char celebrityF[20];
// printf("enter the colour: ");    
// scanf("%s",colour);
// printf("plural_noun: ");
// scanf("%s",plural_noun);
// printf("enter the celebrity: ");
// scanf("%s%s",celebrity,celebrityF);
// printf("roses are %s\n",colour);
// printf(" %s are blue\n",plural_noun);
// printf("i love %s%s",celebrity,celebrityF);
/******************************************************************************************************/
//Arrays
// int luckyNumbers[]={4,1,8,6,5,3,5};
// luckyNumbers[0]=5;
// printf("%d",luckyNumbers[0]);
/******************************************************************************************************/
//if condition
// char grade;
// printf("enter the grade\n");
// scanf("%c",&grade);
// switch (grade){
// case 'A':
//     printf("%s","you did excellent");
//     break;
// case 'B':
//     printf("%s","you did very good");
//     break;
// case 'C':
//     printf("%s","you did good");
//     break;
// case 'D':
//     printf("%s","you only passed");
//     break;
// default:
//     printf("%s","you are a piece of shit and deserve to die");
//     break;
// }
/******************************************************************************************************/
//passing values to the struct
    // struct student student1;
    //     student1.gpa=3.31;
    //     student1.age=22;
    //     strcpy(student1.name,"ahmed sameh\n");
    //     strcpy(student1.major,"Engineer\n");
    //     printf("%s",student1.name);
    //     printf("%s",student1.major);
    // struct student student2;
    //     student2.gpa=2.77;
    //     student1.age=22;
    //     strcpy(student2.name,"mahmoud\n");
    //     strcpy(student2.major,"mass comm\n");
    //     printf("%s",student2.name);
    //     printf("%s",student2.major);
/******************************************************************************************************/
//nested loops and two dimensional arrays
// int num[3][2]={{1,2},{3,4},{5,7}};
// int i,j;
// for(i=0;i<3;i++){
//     for(j=0;j<2;j++){
//         printf("%d",num[i][j]);
//     }
//     printf("\n");
// }
/******************************************************************************************************/
//pointers
// int age =30;
// int *pAge=&age;
// double gpa=3.4;
// double *pGpa=&gpa;
// printf("%.1f/n",*pGpa);
// char grade ='A';
// char *aGrade=&grade;
// printf("age=%p\ngpa: %p\ngrade: %p",&age,&gpa,&grade);
/******************************************************************************************************/
// File management
// char line[255];
// FILE * fpointer = fopen("employees.txt","r");
// fprintf(fpointer,"Ahmed,bussiness man\nnami,secertary\noscar,customer service\n");
// fgets(line,255,fpointer);
// fgets(line,255,fpointer);
// printf("%s",line);
// fclose(fpointer);
/*
r:read the file
a: pin information in the file
w: write to 
*/
};