#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float total_salary,basic,hra,da,allow,pf;
    char grade;

    cout<<"ENTER BASIC SALARY ";
    cin>>basic;
    hra=0.2*basic;
    da=0.5*basic;

    cout<<"ENTER GRADE ";
    fflush(stdin);
    cin>>grade;

    switch (grade)
    {
    case 'A':
        allow=1700;
        break;
    case 'B':
        allow=1500;
        break;
    default:
        allow=1300;
        break;
    }
    pf=0.11*basic;

    total_salary=basic+hra+da+allow-pf;
    cout<<total_salary<<endl;
    total_salary=round(total_salary);

    cout<<total_salary; 
}