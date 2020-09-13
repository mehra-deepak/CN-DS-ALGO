#include<iostream>
using namespace std;
#include<string.h>
void removeDuplicatesRecursively(char str[])
{
    if(str[0]=='\0')
    {
        return;
    }

    removeDuplicatesRecursively(str+1);

    if(str[0]==str[1])
    {
        for(int i=1;i<strlen(str);i++)
        {
            str[i]=str[i+1];
        }
    }
}
int main()
{
    char str[100];

    cin>>str;

    removeDuplicatesRecursively(str);

    for(int i=0;i<strlen(str);i++)
    {
        cout<<str[i];
    }
}
