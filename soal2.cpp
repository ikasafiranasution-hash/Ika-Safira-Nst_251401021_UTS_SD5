#include <iostream>
#include <string>
using namespace std;

struct node {
    string nama;
    int harga;
    node *next;
};

node *head = NULL;
node *tail = NULL;

void insertLast(string n, int h) {
    node *newnode = new node;
    newnode -> nama = n;
    newnode -> harga = h;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail -> next = newnode;
        tail = newnode;
    }
}

void deleteFirst() {
    if (head == NULL) {
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) {
        tail = NULL;
    }
    delete temp;
}

void deleteLast() {
    if (head == NULL) {
        return;
    }
    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    node *p = head;
    while (p -> next != tail) {
        p = p -> next;
    }
    delete tail;
    tail = p;
    tail -> next = NULL;
}