/*
 author: alvina vania kirana
npm: 140810180010
desc: fizzbuzz
tahun: 2019
*/

#include <iostream>
using namespace std;

void fizzbuzz(int i){
    for (int i=0; i<=100; i++){
        if (i%3==0){
            cout << "Fizz"<<endl;
        }
        else if (i%5==0){
            cout << "Buzz"<<endl;
        }
        else if (i%3==0 && i%5==0){
            cout << "FizzBuzz"<<endl;
        }
    }
}

int main() {
    fizzbuzz;
    return 0;
}
