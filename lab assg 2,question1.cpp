#include<iostream>
using namespace std;
int  main()
{float price1,price2,price3;
int p;
cout<<"billing system"<<endl;
cout<<"how much precision is required ? .enter in number"<<endl;
cin>>p;
cout.precision(p);
cout<<"enter product 1 price=";
cin>>price1;
cout<<"enter product 2 price=";
cin>>price2;
cout<<"enter product 3 price=";
cin>>price3;
cout<<"your bill is"<<endl;
cout<<showpoint;
cout<<"PRODUCT 1=RS "<<price1<<endl;
cout<<"PRODUCT 2=RS "<<price2<<endl;
cout<<"PRODUCT 3=RS "<<price3<<endl;
cout<<noshowpoint;
cout<<"TOTAL=RS "<<price1+price2+price3;
return 0;
}