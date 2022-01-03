#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(){
int sec;
cin>>sec;
for (int i=sec; i>=0; i--){
    cout<<i<<" sec\n";
    this_thread::sleep_for(chrono::milliseconds(1000));
}
    return 0;
}