#include <iostream>
#include <string>
using namespace std;
#define MAX 100

char stack[MAX];
int top = -1;

void push(char huruf) {
    if (top == MAX - 1) {
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        stack[top] = huruf;
    }
}

char pop() {
    if (top == -1) {
        return '\0';
    } else {
        char huruf = stack[top];
        top--;
        return huruf;
    }
}

int main() {
    string kata;
    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    if (kata.length() > MAX) {
        cout << "Kata terlalu panjang" << endl;
        return 0;
    }
    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }
    cout << "Kata setelah dibalik: ";
    while (top != -1) {
        cout << pop();
    }
    cout << endl;
    return 0;
}