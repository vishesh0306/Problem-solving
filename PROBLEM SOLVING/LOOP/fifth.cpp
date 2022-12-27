#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        char a='A';
        for(int j=i;j<=n;j++)
        {
            a=a+j-1;
            cout<<a;
            a='A';
        }
        cout<<endl;
    }
}