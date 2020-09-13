/* first iteration mai 1 ayega uske bad vo loop mai jake double karega and second iteration mai 2 ayega fir 4 fir 8
*/


#include<iostream>
#include<string.h>
using namespace std;
int subs(string input, string output[])
{
    if(input.empty())
    {
        output[0]=" ";
        return 1;
    }


    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString, output);

    for(int i=0;i<smallOutputSize;i++)
    {
        output[i+smallOutputSize] = input[0]+output[i];
    }

    return 2*smallOutputSize;
}
int main()
{
    string input;

    cin>>input;

    string *output = new string[1000];

    int count = subs(input, output);

    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }

}
