/*
hitting 2^n base cases and no extra space and keep on hitting base and printing it, also pehle ek recursion call hora tha
ab 2 recurison call hore hai one for inclusion and 2nd for not inclusion.
*/

#include<iostream>
using namespace std;
void print_subs(string input, string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;  // mai base case mai pachuch gaya hu mughe kuch aur nahi karna maine sab k lie decesion le lia hai
        return;
    }

    // ab lets not include 1st character
    print_subs(input.substr(1),output);

    // ab lets include the first character
    print_subs(input.substr(1),output+input[0]);

}

int main()
{
    string input;
    string output;

    cin>>input;

    print_subs(input,output);
}
