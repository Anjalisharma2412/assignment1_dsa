#include<stdio.h>
#include<stdlib.h>
#include<time.h>


char RandomHexadecimalChar() // it is a function used to define to generate a random hexadecimal no.
{
    int randomnum = rand() % 16;
    //  in this we use the condition that if the randomly generated no. is smaller than 10 than it will return the same value by adding 0 in it
    if(randomnum < 10)  
    {
    return '0' + randomnum;  
    }
    // if the randomly generated no. is greater than 10 then firstly it will return 'A' and the we will subtract 10 from this no. to generate another no.
    else           
    {
    return 'A' + (randomnum-10);
    }
}
    

int main()
{
   srand(time(0)); // here it is used for getting different output on each execution of program
     
    int a; 
   
    printf("The length is : ");
    scanf("%d",&a); // here we take the input from the user for deciding the length of randomly generated hexadecimal no.
   
    printf("Random hexadecimal characters: "); 
    for (int i = 0; i < a; i++)         // this loop is helping us to print the randomly generated hexadecimal no.
    {
        // here i am calling the RandomHexadecimalchar function in loop
        char hexChar = RandomHexadecimalChar(); 
        printf("%c",a);
    }

    printf("\n");

    return 0;
}