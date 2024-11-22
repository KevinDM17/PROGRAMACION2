/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NPedido.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#ifndef NPEDIDO_H
#define NPEDIDO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
//#include "Vehiculo.h"
using namespace std;
class NPedido {
public:
    NPedido();
    NPedido(const NPedido& orig);
    virtual ~NPedido();
    void SetPeso(double peso);
    double GetPeso() const;
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetCodigo(const char* codigo);
   void GetCodigo(char*codigo) const;
    friend class Vehiculo;
    void leerP(ifstream&);
    void mostrar(ofstream&);
private:
    char*codigo;
    int cantidad;
    double peso;
    class NPedido*sig;
};

#endif /* NPEDIDO_H */

