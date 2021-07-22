//C program to find the frequency of Character in a string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char ch;
    int i,j,n,count;
    printf("Enter a string :\n");
    fgets(str,50,stdin);
    printf("Entered string is: %s\n",str);
    printf("Enter the character to find frequency to it: \n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';++i)
    {
        if(ch==str[i])
        {
            ++count;
        }
    }
    printf("Frequency of %c is %d\n",ch,count);
    return 0;
}

/*
Enter a string :
Deepak Gupta is a Coder
Entered string is: Deepak Gupta is a Coder

Enter the character to find frequency to it: 
e
Frequency of e is 4
*/

// it is coming 4 times but actually it is 3 times so why ?