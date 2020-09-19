#include<iostream>
#include<string.h>
using namespace std;
bool checkAB(string str)
{
    if(str[0]!='a')
    {
        return false;
    }


}
int main()
{
    string str;
    cin>>str;

    bool ans = checkAB(str);
    cout<<ans;
}
