#include<iostream>
using namespace std;

int main()
{
    char a='A';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ;
        for(int j=i;j<2*i;j++)
        {
            cout<<a<<" ";
            ;
        }
        a++;
        cout<<endl;
    }
}