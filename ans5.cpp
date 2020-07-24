#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[30],r[30];
    int i,j,k;
    gets(s);

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
