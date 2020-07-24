// To find out whether a given string is pallindrome or not.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[30]={"Utkarsh"},r[30];
    int i,j,k;

    for( i=0;s[i]!='\0';i++)

    for(j=0,k=i;j<=i,k>=0;j++,k--)
    {
        r[j]=s[k];
    }

    if(strcmp(s,r)==0)
    {
        cout<<"Pallindrome!";
    }
    else cout<<"Not Pallindrome!";

    return 0;
}
