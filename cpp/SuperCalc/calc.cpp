#include <iostream>
#include <thread>
#include <chrono>
#include "progressbar.hpp"
#include <cmath>

using namespace std;
int main() {
 
int N = 5000;
progressbar bar(N);
for ( int i = 0; i < N; i++ ) {
    bar.update();
    this_thread::sleep_for( chrono::microseconds(50) );
}
cout << endl;
cout << "\033[2J\033[1;1H";
cout << "\033[1;32m WELCOME TO SUPERCALC++\033[0m\n";
cout << "\033[1;31m Example:\033[0m\n";
cout << "\033[1;34m 12 + 6 \033[0m";cout << "\033[1;33m {enter}\033[0m\n";
cout << "\033[1;34m = 18\033[0m\n";
cout << "\033[1;36m *** Suported operators: + - * / ^\033[0m\n";

int a=0,b=0;
char anOperator,answer;

do
{
    cout << "\033[1;32m Enter>>\033[0m";
    cin>>a>>anOperator>>b;

    switch (anOperator){
        case '+':{
            cout<<"= "<<a+b<<"\n";
            break;
        }
        case '-':{
            cout<<"= "<<a-b<<"\n";
            break;
        }
        case '*':{
            cout<<"= "<<a*b<<"\n";
            break;
        }
        case '/':{
            if (b == 0)
                    {
                        cout << "\033[1;31m Can not devide by a ZERO!\033[0m\n";
                        break;
                    }
                    else
                    {
                        cout<<"= "<<a/b<<endl;
                        break;
                    }
        }

        case '^':{
            cout<<"= "<<pow(a,b)<<"\n";
            break;
        }

        default:
            cout << "\033[1;33m Unknown operator!\033[0m\n";
    }
cout << "\033[1;32m Continue? (y/n):\033[0m";
cin >> answer;
} while (answer== 'y');



    return 0;
}
