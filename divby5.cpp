#include <stdio.h>
#include <iostream>
using namespace std;
void check(int n)
{
if(n==0)
{
cout<<"Divisible";
return;
}
while(n>5)
{
if((n&1)==1)
{
n-=5;
}
else
{
n=n>>1;
}
}
if(n==5)
{
cout<<"Divisible";
return;
}
cout<<"Not Divisible";
return;
}
int main()
{
int n;
while(1)
{
cin>>n;
check(n);
}
return 0;
}