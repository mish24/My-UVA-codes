#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool arepair(char opening, char closing)
{
if(opening=='(' && closing == ')')
return true;
else if(opening == '{' && closing == '}')
return true;
else if(opening=='[' && closing == ']')
return true;
return false;
}

bool apb(string exp)
{
stack<char> s;
for(int i=0; i<exp.length(); i++)
{
if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
s.push(exp[i]);
else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
{
if(s.empty() || !arepair(s.top(), exp[i]))
return false;
else
s.pop();
}
}
return s.empty() ? true : false;
}

int main()
{
	/*Code to test the function AreParanthesesBalanced*/
	string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(apb(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
