#include<iostream>
using namespace std;
#include<stack>
bool checkParenthesis(char *str)
{
    stack<char> s;

    int i=0;

    int count=0;

    while(str[i]!='\0')
    {
         if(str[i]=='}' || str[i]==']' || str[i]==')')
        {
            if(s.empty())
            {
                return false;
            }
        }
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            s.push(str[i]);
        }
        if(str[i]=='}' || str[i]==']' || str[i]==')')
        {

            if(str[i]=='}' && s.top()=='{' || str[i]==')' && s.top()=='(' || str[i]==']' && s.top()=='[')
            {
                s.pop();
            }
            else
            {
                count=1;
                break;
            }
        }

        i++;

    }

    if(count == 0)
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char input[100000];
    cin.getline(input, 100000);
//    cin >> input;
    if(checkParenthesis(input))
    {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

