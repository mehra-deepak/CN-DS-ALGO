#include<iostream>
using namespace std;

int getTour(int petrol[], int distance[], int n)
{
    int surplus=0;

    int deficit = 0;

    int start= 0;

    for(int i =0;i<n;i++)
    {
        surplus = surplus + petrol[i] - distance[i];

        if(surplus<0)
        {
            start = i+1;
            deficit+=surplus;
            surplus=0;
        }

    }

    return surplus + deficit >=0 ? petrol[start] : -1;
}
int main()
{

    int petrol[5] = {1,2,3,4,5};

    int distance[5] = {3,4,5,1,2};

    int value = getTour(petrol,distance,5);

    cout<<value;
}
