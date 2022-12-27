#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = n, x;
    for (int i = 1; i <= n; i++)
    {
        k = n;
        x = n;
        for (int j = 1; j < 2 * n; j++)
        {
            if (i <= n)
            {
                if (j <= i || j >= 2 * n - i)
                {
                    if (j <= i)
                    {
                        cout << k<<" ";
                        k--;
                    }
                    else
                    {
                        k=j-n+1;
                        cout << k<<" ";
                    }
                }
                else
                    cout << n - i + 1<<" ";

            }
            
        }
        cout<<endl;
        
        
    }
    for(int i=n;i>1;i--)
        {
            int z=n;
            for(int j=1;j<2*n;j++)
            {
                if(j<i || j>2*n-i)
                {
                    if(j<i)
                    {
                        cout<<z<<" ";
                        z--;
                    }
                    else
                    {
                        z++;
                        cout<<z<<" ";
                    }
                }
                else
                    {
                        
                        cout<<n-i+2<<" ";
                    }
            }
            cout<<endl;
        }
}