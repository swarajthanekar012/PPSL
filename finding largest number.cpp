#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout<<"Put any three number:"<<endl;
cin>>a;
cin>>b;
cin>>c;
if(a>=b&&b>=c)
{
cout<<"The largest number is:"<<a;
}
if(b>=a&&c>=b)
{
  cout<<"The largest is"<<c;
}
return 0;
}