//To find the greatest of three numbers.

#include<iostream>
using namespace std;
int main(){
    int a,b,c,lar;
    cin>>a>>b>>c;
    lar=a>b?(a>c?a:c):(b>c?b:c);
    cout<<lar;
    return 0;
}