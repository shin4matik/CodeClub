#include <iostream>

using namespace std;

int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n>0){
       x=n%10;  
       sum=sum+x;
       n=n/10; 
    }
    cout<<sum;
    return 0;
}