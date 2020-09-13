#include<iostream>
using namespace std;
#include<string.h>
int length(char str[])
{
    if(strlen(str)==0)
    {
        return 0;
    }

    int l = length(str+1);
    return l+1;


}
int main()
{
    char str[100];

    cin>>str;

    int l = length(str);

    cout<<l;
}
