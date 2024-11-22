/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoLista.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#ifndef NODOLISTA_H
#define NODOLISTA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Vehiculo.h"
using namespace std;
class NodoLista {
public:
    NodoLista();
    NodoLista(const NodoLista& orig);
    virtual ~NodoLista();
    friend class LVehiculos;
    void lectura(ifstream&);
    void muestraDato(ofstream&);
    int sacarDNI();
    double sacarACT();
    double sacarMAX();
private:
    Vehiculo*unidad;
    NodoLista*sig;

};

#endif /* NODOLISTA_H */

