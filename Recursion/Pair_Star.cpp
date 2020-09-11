#include<iostream>
#include<string.h>
using namespace std;
void helper(char input[],int start)
{
    if(input[start]=='\0')
    {
        return;
    }
    helper(input,start+1);

    if(input[start]==input[start+1])
    {
        for(int i=strlen(input);i>=start+1;i--)
        {
            input[i+1]=input[i];
        }
        input[start+1]='*';
    }

}
void pairStar(char input[])
{
    int start=0;
    helper(input,start);
}

