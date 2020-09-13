#include<iostream>
#include<string.h>
using namespace std;

int helper(char input[], int last)
{
    if(last==0)
    {
        return input[last]-'0';
    }

    int smallAns = helper(input,last -1);
    int a = input[last]-'0';

    return smallAns*10 + a;
}
int stringToNumber(char input[])
{
    int len = strlen(input);

    int ans = helper(input, len-1);

    return ans;
}
int main()
{
    char str[100];

    cin>>str;

    int ans = stringToNumber(str);

    cout<<ans+1; // adding one to confirm its converted to integer.
}
