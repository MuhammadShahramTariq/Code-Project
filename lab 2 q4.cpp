#include<iostream>
using namespace std;
int main()
{ float sb=1000;
cout<<"total saving =$"<<sb<<endl;
sb+=200;
cout<<"saving balance after deposit=$"<<sb<<endl;
sb-=150;
cout<<"SB after withdraw =$"<<sb<<endl;
sb+=0.05*sb;
cout<<"SB after adding 5% montly interest=$"<<sb<<endl;
return 0;
}