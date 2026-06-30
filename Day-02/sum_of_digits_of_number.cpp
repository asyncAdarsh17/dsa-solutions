#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int num)
{
   int total=0;
   while(num>0)
   {
    int rem=num%10;
    num=num/10;
    total+=rem;
   }
   return total;

}
int main()
{
   cout<<sumofdigits(373);
    return 0;
}