#include<iostream>
//#include<<sstream>
#include<algorithm>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
vector<int> first;
vector<string> second;
vector<pair<int, string> > result;

int main()
{
int test, ind;
cin>>test;
string s, t, str;
getchar();
while(test--)
{
getchar();
getline(cin, s);
stringstream ss(s);
//extracts the string value from s and puts it in an integer value called ind
while(ss>>ind)
first.push_back(ind);
getline(cin, str);
stringstream sst(str);
while(sst >> t)
second.push_back(t);
int sz=min(first.size(), second.size());
for(int i=0; i<sz; i++)
{
result.push_back(make_pair(first[i], second[i]));
}
sort(result.begin(), result.end());
for(int i=0; i<sz; i++)
cout<<result[i].second<<endl;
//first.clear();
//second.clear();
//result.clear();
if(test)
cout<<endl;
}
return 0;
}

