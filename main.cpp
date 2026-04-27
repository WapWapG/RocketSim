#include <iostream>
#include <string>
using namespace std;

int main(){
    int speed = 0;
    int fuel = 0;
    int height = 0;
    int type_fuel
    string input;
    cout << "Введите тип топлива: 1.Жидкое 2.Твердое | Укажите цифрой!";
    cin >> input;
    if (input == 1){
        type_fuel = 1;
    }
    else if (input == 2){
        type_fuel = 2
    }
    else{
        cout << "Введите тип топлива!!!";
    }
}
