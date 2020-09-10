#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
bool helper(char str[], int n, int m, int len)
{
    if(n==len && m<0)
    {
        return false;
    }

    bool ans = helper(str, n +1 , m-1, len);

    if(str[m]==str[n])
    {
        return true;
    }
    else
    {
        return false;
    }

    return ans;
}
bool checkPalindrome(char str[])
{
    int len = strlen(str);

    int n,m;

    if(len%2 == 0)
    {
        n = len/2;

        m = len/2 -1;
    }
    else
    {
        n = len /2 + 1;

        m = len/2 - 1;
    }

    bool ans = helper(str, n, m, len);

    return ans;



}
int main() {
    char input[50];
    cin >> input;

    if(checkPallindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
