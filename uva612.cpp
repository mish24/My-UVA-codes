#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int count_unsortedness(string word);
bool compare_unsortedness(const pair<string,int> &word1, const pair<string,int> &word2);

int main()
{
int t, len, num;
string word;
cin>>t;
for(int tc=0;tc<t;tc++)
{
cin>>len>>num;
vector<pair<string,int> > words;
for(int j=0;j<num;j++)
{
cin>>word;
words.push_back(make_pair(word, count_unsortedness(word)));
}
stable_sort(words.begin(), words.end(), compare_unsortedness);
cout<<endl;
for(int i=0; i<num;i++)
{
cout<<words[i].first<<endl;
}
if(tc!=t-1)
cout<<endl;
}
return 0;
}

int count_unsortedness(string word)
{
int len=word.length();
int counter =0;
char ch;
for(int i=0; i<len;i++)
{
ch=word[i];
for(int j=i;j<len;j++)
{
if(ch>word[j])
counter++;
}
}
return counter;
}

bool compare_unsortedness(const pair<string,int> &word1, const pair<string, int> &word2)
{
return word1.second < word2.second;
}
