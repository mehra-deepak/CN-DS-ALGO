#include<iostream>
using namespace std;
#include<stack>
bool checkBalancedParanthesis(int arr[], int n)
{

    stack<int> s;

    int i=0;

    if(arr)

    while(i<n)
    {
        if(arr[i]=='{' || arr[i]=='(' || arr[i]=='[')
        {
            s.push(arr[i]);
        }
        else if(arr[i]=='}' && s.empty() || arr[i]==')'&& s.empty() || arr[i]==']' && s.empty())
        {

            return false;
        }

        else
        {
            if(arr[i]=='}' && s.top()=='{' || arr[i]==')' && s.top()=='(' || arr[i]==']' && s.top()=='[')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }

        i++;
    }

    return true;
}
int main()
{
    int arr[]={'','(','(',')',']','}'};

    int n =6;

    bool ans = checkBalancedParanthesis(arr,n);
    cout<<ans;
}
