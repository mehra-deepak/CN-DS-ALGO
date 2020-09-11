// Change in the given string itself. So no need to return or print anything
#include<iostream>
#include<string.h>
void helper(char arr[],int start)
{
    if(arr[start]=='\0')
    {
        return;
    }
    helper(arr,start+1);
    if(arr[start]=='x')
    {
        for(int i=start;i<=strlen(arr);i++)
        {
            arr[i]=arr[i+1];
        }
    }

}
void removeX(char arr[])
{
    helper(arr,0);
}
