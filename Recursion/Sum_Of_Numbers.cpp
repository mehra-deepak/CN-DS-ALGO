#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    // Write your code here
    if(n==0)
    {
        return 0;
    }

    int smallSum = sumOfDigits(n/10);

    return smallSum + n%10;



}
int main()
{
    int num;
    cin>>num;

    int sum = sumOfDigits(num);
    cout<<sum;
}
