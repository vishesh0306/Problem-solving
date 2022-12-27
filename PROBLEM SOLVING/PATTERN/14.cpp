#include <iostream>
using namespace std;
int main() {
	int n;
	cin >>n;
	cout << "Input number is " << n << endl;	

	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
        {
            if(i==1 || i==n)
                cout<<"*";
            else
            {
                if(j==n-i)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
	}
}