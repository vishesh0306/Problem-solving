
#include<iostream>
using namespace std;

int sum_of_digits(int n)
{
    int r,sum=0;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }
    return sum;
}

int main()
{
    int n,x,rem,sum=0;
    cout<<"enter number : ";
    cin>>n;
    x=sum_of_digits(n);


    while (x>9)
    {
        x=sum_of_digits(x);
    }
    cout<<x<<endl;
}