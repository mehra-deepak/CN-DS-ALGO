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
int keypad(int n, string output[])
{
    if(n==0)
    {
        output[0]=""; // return empty string
        return 1;
    }
    int lastDigit = n%10;

    int smallNumber = n/10;

    int count = keypad(smallNumber, output);

    string combinations = getCombinations(lastDigit);

    for(int i=0;i<combinations.length()-1;i++)
    {
        for(int j=0;j<count;j++)
        {
            output[j+ (i+1)* count] = output[j];
        }
    }

    int k=0;
    for(int i=0;i<combinations.length();i++)
    {
        for(int j=0;j<count;j++)
        {
            output[k] = output[k]+ combinations[i];
            k++;
        }

    }

    return count*combinations.length();



}
int main()
{
    int n;
    cin>>n;

    string output[1000]; // dynamic string array

    int ans = keypad(n, output);

    for(int i=0;i<ans;i++)
    {
        cout<<output[i]<<" ";
    }


}
