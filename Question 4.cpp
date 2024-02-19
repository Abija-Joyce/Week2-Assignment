#include <iostream>

using namespace std;

void polarity(int x){
    if(x>0){
        cout<<"The given number is Positive";
    }
    else
        cout<<"The given number is Negative";
}

int main(){
    int x; 
    cout << "Type a number: ";
    cin >> x;

    polarity(x);

}