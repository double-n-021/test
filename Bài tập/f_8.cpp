﻿#include <iostream>

using namespace std;

int main() {
    int age;
    char gender;

    cout << "Nhap tuoi: ";
    cin >> age;

    cout << "Nhap gioi tinh (M/F): ";
    cin >> gender;

    if (age > 0 && age <= 100) {
        if (gender == 'M' || gender == 'm') {
            if (age >= 21) {
                cout << "1" << endl;
            }
            else {
                cout << "3" << endl;
            }
        }
        else if (gender == 'F' || gender == 'f') {
            if (age >= 21) {
                cout << "2" << endl;
            }
            else {
                cout << "4" << endl;
            }
        }
        else {
            cout << "I do not know why" << endl;
        }
    }
    else {
        cout << "I do not know why" << endl;
    }

    return 0;
}