#include<iostream>
#include<climits>
using namespace std;

int minSteps(int n)
{
    int *minSteps = new int[n+1];

    minSteps[1]=0;

    for(int i=2;i<=n;i++)
    {
        int subtractOne = minSteps[i-1];
        int divideByTwo = INT_MAX;
        int divideByThree = INT_MAX;

        if(i%2==0)
        {
            divideByTwo = minSteps[i/2];
        }
        if(i%3==0)
        {
            divideByThree= minSteps[i/3];
        }

        minSteps[i] = 1+ min(subtractOne, min(divideByTwo,divideByThree));

    }

    int result = minSteps[n];

    delete[] minSteps;

    return result;
}
int main()
{
    int n;
    cin>>n;

    int answer = minSteps(n);

    cout<<answer;
}