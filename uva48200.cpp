#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

vector<int> first;
vector<string> second;
vector<pair<int, string> > result;

int main()
{

int test, ind;
scanf("%d", &test);
string s, t, str;
getchar();
while(test--)
{
getchar();
getline(cin, s);
stringstream ss(s);
while(ss>> ind) 
first.push_back(ind);
stringstream sst(str);
while(sst>> t)
second.push_back(t);
int sz= min(first.size(), second.size());
for(int i=0; i<sz; i++)
{
result.push_back(make_pair(first[i], second[i]));
}
sort(result.begin(), result.end());
for(int i=0; i<sz; i++)
cout<<result[i].second<<endl;
first.clear();
second.clear();
result.clear();
if(test)
printf("\n");
}
return 0;
}
