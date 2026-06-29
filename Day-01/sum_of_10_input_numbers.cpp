#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0,num;
    cout<<"enter 10 numbers"<<endl;
    for(i=1;i<=10;i++)
    {
        cin>>num;
        sum+=num;
    }
    cout<<"the sum of 10 numbers is: "<<sum<<endl;
    return 0;
}