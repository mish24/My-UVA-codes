//uva 11292

//using the algorithms to obtain the lower bound of what is needed. using sorting algorithm. //faster implemtation using multimap is also there
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{

int n, m, a[20000], b[20000];
while(true)
{
cin>>n>>m;
if(n==0)
break;
for(int i=0; i<n; i++)
cin>>a[i];
for(int j=0; j<m; j++)
cin>>b[j];

int ans=0;
bool ok =true;

sort(a, a+n);
sort(b, b+m);

for(int i=0, j=0; i<n; ++i)
{
//following line will give you the value of the lower bound
while(j<m && b[j]<a[i])
++j;

if(j==m)
ok= false;
else
ans+=b[j++];
}

if(!ok)
puts("Loowater is doomed");
else
cout<<ans<<endl;
}
return 0;
}
