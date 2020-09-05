#include<iostream>
using namespace std;
#include<stack>
bool checkBalanced(char *str)
{
    stack<char> s;
    
    int i=0;
    
    int counter =0;
    
    while(str[i]!='\0')
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            s.push(str[i]);
        }
         if(str[i]==')'|| str[i]=='}'|| str[i]==']')
        {
            if(s.empty())
            {
                return false;
            }
            else if(s.top()=='(' && str[i]==')'||s.top()=='[' && str[i]==']'||s.top()=='{' && str[i]=='}')
            {
                    s.pop();
            }
            else
            {
                counter=1;
                break;
            }
        }
        i++;
    }
    if(counter==0)
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
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
