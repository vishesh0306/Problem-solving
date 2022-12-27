#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin>> n;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(i==0)
            {
                if(j<=n)
                    cout<<j;
                else
                    cout<<2*n-j;
            }
            else
            {
                if(j<=n-i)
                    cout<<j;

                else if(j>=n+i)
                    cout<<2*n-j;

                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }

}