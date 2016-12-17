#include<iostream>
#include<stack>

using namespace std;

int main()
{
int n,target[1000]; //max size of the target is given to be 1000
int i;

while(true)
{
cin>>n;
if(n==0)
break; //this just breaks out of the loop, so you don't really need an else.

while(true)
{
cin>>target[0];
if(target[0]==0)//important part.. understand how while works with break
{
cout<<endl;
break;
}
for(i=1; i<n; i++)
{
cin>>target[i];
}

int curr=1, targetindex=0;
stack<int> station;
while(curr<=n)
{
station.push(curr);

while(!station.empty() && station.top()==target[targetindex])
{
station.pop();
targetindex++;
if(targetindex>=n) break;
}
curr++;
}

if(station.empty()) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
return 0;
}
