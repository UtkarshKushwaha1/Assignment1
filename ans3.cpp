// To sort an array using insertion sort.

#include<iostream>
using namespace std;
int main()
{
    int n,j,t;
    cout<<"Enter size:";
    cin>>n;

    int a[n];

    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
		{
			t=a[i];
			j=i-1;
		while(j>=0 && a[j]>t)
			{a[j+1]=a[j];
			j--;
			}
			a[j+1]=t;
		}

        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    return 0;
}
