#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.size();
    
    cout<<s.top();
    
    s.pop();
    
    cout<<s.top();
    
    cout<<s.empty();
    
}