//
// Created by simon on 24/02/2024.
//

#ifndef LABORATORIO_DEBIT_H
#define LABORATORIO_DEBIT_H
#include <stdio.h>
#include <string>

class Debit {
private:
    int debit;
    std::string name;
public:
    Debit();
    Debit(int debit, std::string name);
    int getDebit();
    int setDebit(int debit);
    std::string getName();
    std::string setName(std::string name);
};

#endif //LABORATORIO_DEBIT_H
