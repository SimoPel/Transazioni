//
// Created by simon on 24/02/2024.
//
#include "Credit.h"
#include <iostream>
#include <string>
using namespace std;

Credit::Credit() {
    this->credit = 0;
    this->name = " ";
}

Credit::Credit(int credit, string name) {
    this->credit = credit;
    this->name = name;
}

int Credit::getCredit() {
    return this->credit;
}

int Credit::setCredit(int credit) {
    this->credit = credit;
    return this->credit;
}

string Credit::getName() {
    return this->name;
}

string Credit::setName(string name) {
    this->name = name;
    return this->name;
}
