#include<iostream>
using namespace std;

// A 
// B C
// C D E
// D E F G
// E F G H I

int main()
{
    char a='A';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<2*i;j++)
        {
            cout<<a<<" ";
            a+=1;
        }
        a='A';
        a+=i; 
        cout<<endl;
    }
}