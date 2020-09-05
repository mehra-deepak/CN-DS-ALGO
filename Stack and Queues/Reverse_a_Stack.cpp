#include <stack>


// 1-2-3-4 top is 4

void reverseStack(stack<int> &input, stack<int> &extra)
{
    if(input.size()==0)
    {    
        return;
    }
    
    int x = input.top();   // top ko save kar lia variable mai 
    
    input.pop();           // pop kar lia
    
    reverseStack(input,extra);  // recursion call kar lia , ab hum assume kar lenge recursion ne apna kam kar lia and and hamare stack one mai reversed stack hai
    
    // reversed ko extra stack mai dal do
    
    while(input.size() != 0){
        extra.push(input.top());
        input.pop();
    }
    
    
    // stored top ko input mai dal do
    
    input.push(x);
    
    
    // reverse kar do dubara
    
    while(extra.size() != 0){
        input.push(extra.top());
        extra.pop();
    }

}