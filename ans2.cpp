//To find the 2nd minimum and 2nd maximum number in an array.

#include<iostream>
using namespace std;
int main()
{
    int n,smin,smax,temp;
    cout<<"Enter size:"; cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}


    for(int i=0;i<n;i++)
    {
        if(arr[0]==arr[i])
        {
            smin=arr[i+1];
        }
    }

    for(int i=n-1;i>0;i--)
    {
        if(arr[n-1]==arr[i])
        {
            smax=arr[i-1];
        }
    }


    cout<<"2nd maximun number:"<<smax<<endl;
    cout<<"2nd minimun number:"<<smin;

    return 0;
}