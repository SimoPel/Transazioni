//
// Created by simon on 24/02/2024.
//

#ifndef LABORATORIO_CREDIT_H
#define LABORATORIO_CREDIT_H
#include <list>
#include <stdio.h>
#include <string>
using namespace std;

class Credit {
private:
    int credit;
    string name;
public:
    Credit();
    Credit(int credit, string name);
    int getCredit();
    int setCredit(int credit);
    string getName();
    string setName(string name);

};

#endif //LABORATORIO_CREDIT_H
