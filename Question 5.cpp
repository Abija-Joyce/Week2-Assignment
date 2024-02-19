#include <iostream>

using namespace std;

void graduated(int a){
    if(a>2023){
        int diff = a - 2023;
        cout<<"You would graduate school in " << diff <<  " years";
    }

    else if(a==2023){
        cout<<"You would graduate ths year";
    }
    else
        cout<<"You must have graduated early";
}

int main(){
    graduated(2025);
}