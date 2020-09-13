#include<iostream>
using namespace std;
#include<string.h>
void replaceCharacterRecursively(char str[], char a, char b)
{
    if(str[0]=='\0')
    {
        return;
    }
    replaceCharacterRecursively(str+1,a,b);
    if(str[0]==a)
    {
        str[0]=b;
    }

}
int main()
{

    char str[100];
    cin>>str;

    char a;

    char b;

    cin>>a>>b;

    replaceCharacterRecursively(str, a, b);

    for(int i=0;i<strlen(str);i++)
    {
        cout<<str[i];
    }
}
