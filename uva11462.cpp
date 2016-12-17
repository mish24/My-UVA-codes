#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<stdio.h>

using namespace std;

int main()
{
long int a[200005], i, n;
while (scanf("%ld",&n)==1)
{
if(n==0)
break;
for(i=0; i<n; i++)
{
cin>>a[i];
}
sort(a, a+i);
for(i=0; i<n;i++)
{
cout>>a[i];
if(i<(n-1))
cout<<" ";
}
cout<<endl;
}
return 0;
}
