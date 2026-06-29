#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=20;i<=40;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        
    }
    cout<<"the sum of even numbers from 20-40 is: "<<sum<<endl;
    return 0;
}