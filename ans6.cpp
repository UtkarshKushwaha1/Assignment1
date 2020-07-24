// To check if the number is prime or not.

#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=2;i<n-1;i++)
        {
            if(n%i==0)
            {
                flag++;
            }

        }
    if(n==1)
    {
        flag++;
    }

    if(flag==0)
    cout<<"Prime Number!";
    else
    {
        cout<<"Non-Prime!";
    }
    
    return 0;

}