 #include<stdio.h>
 #include<string.h>
 #include<stdbool.h>
 #include<ctype.h>
 #include<stdlib.h>
 //a function to trim spaces from a string
 void trim_spaces(char string[]){
    int pos=0;
    int new_pos;
    while(pos<strlen(string)){
        if(string[pos]=='\n' || string[pos]=='\t' || string[pos]==' '){
            new_pos=pos;
            while(string[new_pos]!='\0'){
                string[new_pos]=string[new_pos+1];
                new_pos++;
            }
        }
        else{
            pos++;
        }
    }
}
 //a function to check if the string is a palindrome or not a palindrome is a string that if reversed it is the same
 bool is_palindrome(char string[]){
    int middle=strlen(string)/2;
    int size=strlen(string);
    for (int i=0;i<middle;i++){ //loop through the string till we reach the middle of the string
        if(string[i]==string[size-i-1]){ //check first letter with the last letter
            return true;
        }
        else{
            break;
        }
    }
    return false;
 }
 //a function that append two strings like the one we see in python
 char *str_append(char *s1,char *s2){
    int s1_length=strlen(s1); //find the size of the first string
    int s2_length=strlen(s2); //find the size of the second string
    int total_size=s1_length+s2_length; //find the total size of the new string
    char *s=calloc(total_size,sizeof(char)); //use calloc to allocate memory assuming that both strings are not equal in the size
    for (int i=0;i<s1_length;i++){ //assigning the element by element of s1 to the new string
        s[i]=s1[i];
    }
    for (int i = 0; i < s2_length; i++) //assigning the element by element of s2 to the new string starting from the end of s1_index
    {
        s[s1_length+i]=s2[i];
        s[total_size-1]='\0';
    }
    return s;
 }
 //a function to find the number of vowels in a string
 int count_vowels(char string[]){
    int count=0;
    for (int i=0;i<strlen(string);i++){
        switch (toupper(string[i])){
        case 'A':
        case 'E':
        case 'I':    
        case 'O': 
        case 'U':
        count++;
        }
    }
    return count;
 }
//a function that replaces charcters
 void replace_charcter(char *string,char charcter,char new_charcter){
    for(int i=0;i<strlen(string);i++){
        if (string[i]==charcter)
        {
            string[i]=new_charcter;
        }
        
    }
    return;
 }
 //a function the turns lower case letter into upper case letter and vice-versa
 void flip_string_lower_to_upper_or_opposite(char string[]){
    for (int i=0;i<=strlen(string);i++){
        if (isupper(string[i])){
            string[i]=tolower(string[i]);
        }
        else if (islower(string[i])){
            string[i]=toupper(string[i]);
        }
    }
    return;
    }

//a function to remove all vowels from an array
void remove_vowels(char *string){
    int pos=0;
    int new_pos;
    while(pos<strlen(string)){
        if (string[pos]=='a'|| string[pos]=='e' || string[pos]=='i'|| string[pos]=='u'){
            new_pos=pos;
            while(string[new_pos]!='\0'){
                string[new_pos]=string[new_pos+1];
                new_pos++;
            }
        }
        else{
            pos++;
        }
    }
}

//a function to count the word
int word_count(char *string,char *word){
    int slen=strlen(string);
    int wlen=strlen(word);
    int count=0;
    int end=slen-wlen+1;
    for(int i=0;i<end;i++){
        bool word_found =true;
        for(int j=0;j<wlen;j++){
            if(word[j]!=string[i+j]){
                word_found=false;
                break;
            }
        }
        if(word_found){
            count++;
        }
    }
    return count;
}
void remove_char(char *string,char c){
    int pos=0; //define initial position
    while (string[pos]!='\0') //while we didnt reach the end of the string
    {
        if (string[pos]==c) //check if string[pos] is equal to the charcter
        {
            int newpos=pos;
            while(string[newpos]!='\0'){
                string[newpos]=string[newpos+1]; //keep shifting the letters of the word to the left till we reach end of the string
                newpos++;
            }
        }
        else{
            pos++;
        }
    }
}
int main(void){
    char string1[1000];
    char string2[1000];
    printf("enter string1\n");
    scanf("%[^\n]s",string1); 
    // printf("it is not a palindrome\n")    // printf("it is not a palindrome\n");
    // //checking if the string1 is palindrome
    // if (is_palindrome(string1)){
    //     printf("it is a palindrome\n");
    // }
    // else{
    //     printf("it is not a palindrome\n");
    // }
    // //counting vowels in a string1
    // printf("the numbers of vowels in the string is:%d",count_vowels(string1));
    // //appending two strings
    // printf("enter string2\n");
    // scanf("%[^\n]s",string2); 
    // // switching letters of string1 from lower to upper and vice-versa
    // flip_string_lower_to_upper_or_opposite(string1);
    // printf("%s",string1);
    // char s[]="im a dead dead man";
    // char w[]="dead";
    // printf("%d",word_count(s,w));
    // remove_char(s,'e');
    // printf("%s",s);
    // printf("enter string2\n");
    // scanf("%[^\n]s",string2); 
    // // switching letters of string1 from lower to upper and vice-versa
    // flip_string_lower_to_upper_or_opposite(string1);
    // printf("%s",string1);
    // char s[]="im a dead dead man";
    // char w[]="dead";
    // printf("%d",word_count(s,w));
    // remove_char(s,'e');
    // printf("%s",s);
    // replace_charcter(string1,'a','c');
    // printf("%s",string1);
 }
