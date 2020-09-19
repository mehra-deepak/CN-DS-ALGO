#include<iostream>
#include<string.h>
using namespace std;
string getCombinations(int num)
{
    if(num == 1)
    {
        return " ";
    }
    if(num == 2)
    {
        return "abc";
    }
    if(num == 3)
    {
        return "def";
    }
    if(num == 4)
    {
        return "ghi";
    }
    if(num == 5)
    {
        return "jkl";
    }
    if(num == 6)
    {
        return "mno";
    }
     if(num == 7)
    {
        return "pqrs";
    }
    if(num == 8)
    {
        return "tuvw";
    }
     if(num == 9)
    {
        return "xyz";
    }

}
void keypad(int n, string outputsoFar)
{
    if(n==0)
    {
        cout<<outputsoFar<<endl;
        return;
    }
    int lastDigit = n%10;

    int smallNumber = n/10;

    string options = getCombinations(lastDigit);

    for(int i=0;i<options.length();i++)
    {
        keypad(smallNumber, options[i]+outputsoFar);
    }


}
int main()
{
    int n;
    cin>>n;


    keypad(n," ");



}
