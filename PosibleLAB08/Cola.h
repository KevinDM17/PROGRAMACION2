/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:13 PM
 */

#ifndef COLA_H
#define COLA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Nodo.h"
using namespace std;
class Cola {
public:
    Cola();
    Cola(const Cola& orig);
    virtual ~Cola();
    void encolar(ifstream&,char tipo);
    Capsual desencolar();
    void imprimirr(ofstream&);
private:
    Nodo*ini;
    Nodo*fin;
};

#endif /* COLA_H */

