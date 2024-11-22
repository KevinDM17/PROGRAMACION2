/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlatoFondo.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef PLATOFONDO_H
#define PLATOFONDO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Producto.h"
using namespace std;
class PlatoFondo:public Producto {
public:
    PlatoFondo();
    PlatoFondo(const PlatoFondo& orig);
    virtual ~PlatoFondo();
    void leer(ifstream&);
    void imprimir(ofstream&);
private:
    int*proteina;
};

#endif /* PLATOFONDO_H */

