//Even/Odd Checker

#include <iostream>

using namespace std;

int status(int a){
    if(a%2==0){
        cout<<"The number given is Even";
    }
    else 
        cout<<"The number given is Odd";

    return 0;
}

int main(){
    status(45);
    return 0;
}