//bubble sort
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
int temp, count=0;
for(int i=0; i<n;i++)
{
cin>>a[i];
}
for(int j=0; j<n;j++)
{
for(int k=j;k<n;k++)
{
if(a[j]>a[k])
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
count++;
}
}
}
cout<<count<<endl;
}
return 0;
}
