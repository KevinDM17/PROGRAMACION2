/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Capsual.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:14 PM
 */

#ifndef CAPSUAL_H
#define CAPSUAL_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Producto.h"
using namespace std;
class Capsual {
public:
    Capsual();
    Capsual(const Capsual& orig);
    virtual ~Capsual();
    void leerydarme(ifstream&,char tipo);
    void imprime(ofstream&);
private:
    Producto*produ;
};

#endif /* CAPSUAL_H */

