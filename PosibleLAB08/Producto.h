/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Producto.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
class Producto {
public:
    Producto();
    Producto(const Producto& orig);
    virtual ~Producto();
    void SetPrecio(double precio);
    double GetPrecio() const;
    void SetNombre(const char* nombre);
    void GetNombre(char*nombre) const;
    virtual void leer(ifstream&);
    virtual void imprimir(ofstream&);
private:
    char*nombre;
    double precio;
};

#endif /* PRODUCTO_H */

