#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum+=factorial(i);
    }
    cout<<sum;
}