#include<stdio.h>
int main()
{   int i,j,count1=0,count2=0;
    char str[100];
    printf("Enter any word to check the number of vowels present in it: ");
    fgets(str,100,stdin);
    for(i=1;str[i]!='\0';i++)
    {
        count1++;
    }
    for(j=0;j<count1;j++)
    {
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
        {
            count2++;
        }
    }
    if(count2>0)
    {
        printf("number of vowels in the word you entered are : %d!",count2);
    }
    else{
        printf("there is no vowel present in the word you entered!");
    }
    return 0;
}
