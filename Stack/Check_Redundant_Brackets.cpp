#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool checkRedundantBrackets(string str)
{
    stack<int> s;

    int len =str.size();

    int i=0;

    while(i<len)
    {
        int count=0;

        if(str[i]!=')')
        {
            s.push(str[i]);
        }
        else
        {
            while(s.top()!='(')
            {
                s.pop();
                count++;
            }
            s.pop();

            if(count==0 || count==1)
            {
                return true;
            }
        }

        i++;
    }

    return false;

}
int main()
{
    string str;

    cin>>str;

    cout<<checkRedundantBrackets(str);

}
