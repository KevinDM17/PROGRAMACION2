/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entrada.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef ENTRADA_H
#define ENTRADA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Producto.h"
using namespace std;
class Entrada:public Producto {
public:
    Entrada();
    Entrada(const Entrada& orig);
    virtual ~Entrada();
    void SetPicante(bool picante);
    bool IsPicante() const;
    void leer(ifstream&);
    void imprimir(ofstream&);
private:
    bool picante;
};

#endif /* ENTRADA_H */

