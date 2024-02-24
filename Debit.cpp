//
// Created by simon on 24/02/2024.
//


#include "Debit.h"
#include <string>
using namespace std;

Debit::Debit() {
    this->debit = 0;
    this->name = " ";
}

Debit::Debit(int debit, string name) {
    this->debit = debit;
    this->name = name;
}

int Debit::getDebit() {
    return this->debit;
}

int Debit::setDebit(int debit) {
    this->debit = debit;
    return this->debit;
}

string Debit::getName() {
    return this->name;
}

string Debit::setName(string name) {
    this->name = name;
    return this->name;
}

