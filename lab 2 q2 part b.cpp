#include<iostream>
#include<math.h>
using namespace std;
int main()
{ float A,P,r,n,t;
cout<< "the amount of principal P="<<endl;
cin>>P;
cout<<"numbers of time ivest in compund  n="<<endl;
cin>>n;
cout<<"the numbers of years t="<<endl;
cin>>t;
A=P*pow((1+(r/n)),(n*t));
cout<<"the total amount of A="<<A;
return 0;
}