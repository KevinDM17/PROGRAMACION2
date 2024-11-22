/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bebida.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef BEBIDA_H
#define BEBIDA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Producto.h"
using namespace std;
class Bebida:public Producto {
public:
    Bebida();
    Bebida(const Bebida& orig);
    virtual ~Bebida();
    void SetTamano(const char* tamano);
   void GetTamano( char* tamano) const;
  void leer(ifstream&);
  void imprimir(ofstream&a);
private:
    char*tamano;
};

#endif /* BEBIDA_H */

