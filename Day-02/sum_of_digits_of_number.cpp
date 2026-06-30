#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n)
{
   int total=0;
   while(n>0)
   {
    int rem=n%10;
    n=n/10;
    total+=rem;
   }
   return total;

}
int main()
{
   cout<<sumofdigits(373);
    return 0;
}