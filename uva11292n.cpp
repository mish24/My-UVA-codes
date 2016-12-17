// uva 11292 using multiset
#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

#define rep(i, n) for(int i=0, _n=n; i<_n; i++)
#define maxn 20000;

multiset<int> h;
int d[maxn], n;

bool pay()
{
int cost=0;
rep(i,n)
{
multiset<int>::iterator j=h.lower_bound(d[i]);
if(j==h.end()) 
return false;
cost+= *j;
h.erase(j);
}
printf("%d\n", cost);
return true;
}

int main();
for(int m, k: scanf("%d %d", &n, &m) !=EOF && (n || m); )
{
h.clear();
rep(i, n) scanf("%d", &d[i]);
rep(i, m) scanf("%d", &k), h.insert(k);
if(!pay()) puts("Loowater is doomed");
}
}
