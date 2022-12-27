#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=2*n;j++)
        {
            if(j>=n-i+1 && j<=n+i-1){
                
                if(j<=n){
                    cout<<k;
                    }
                else{
                    k-=2;
                    cout<<k;}
                k++;
                }
            else    
                cout<<" ";
        }
        cout<<endl;
    }
}