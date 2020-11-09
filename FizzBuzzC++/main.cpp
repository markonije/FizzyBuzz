#include <iostream>
#include <string>

using namespace std;

void FizzBuzz(int number)
{
    if (number%3==0 && number%5==0){
        cout<<"FizzBuzz"<<endl;
    }
    else{
        if (number%3==0){
            cout<<"Fizz"<<endl;
        }
        else{
            if (number%5==0){
                cout<<"Buzz"<<endl;
            }
            else{
                cout<<number<<endl;
            }
        }
    }
}

int main()
{
    for(int i = 1; i<=100;i++){
        FizzBuzz(i);
    }
}
