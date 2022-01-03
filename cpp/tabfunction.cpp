#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,h;
    cin>>a>>b>>h;
for(float x=a; x<=b; x=x+h){
  cout<<fixed<<setprecision(3);
  cout<<x<<" "<<3*sin(x)<<"\n";  
}
    return 0;
}