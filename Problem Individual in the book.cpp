/*
x is last annual salary
y is for half x
z for retroactive pay
k is the new annual salary
Mohamed Wa'el Abd-elhady A'ref
20170260
*/


#include <iostream>
using namespace std;
int main()
{
    float x , y , z , k;
    cout<<"Enter you previous annual salary : ";
    cin>>x;
    y=x/2;
    z=y*(0.076);
    cout<<"The retroactive pay is : "<< z <<endl;
    k=x+z;
    cout<<"The new annually salary is : "<< k <<endl;
    k=k/12;
    cout<<"The new monthly salary is : "<<k<<endl;


}
