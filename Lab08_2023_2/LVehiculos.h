/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LVehiculos.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 04:29 PM
 */

#ifndef LVEHICULOS_H
#define LVEHICULOS_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Furgon.h"
#include "Camion.h"
#include "NodoLista.h"
using namespace std;
class LVehiculos {
public:
    LVehiculos();
    LVehiculos(const LVehiculos& orig);
    virtual ~LVehiculos();
    void leer_insertar(ifstream&arch,char tipo);
    void mostrar(ofstream&);
    void BuscarApilar(int dni,ifstream&);
private:
    NodoLista*lini;
    NodoLista*lfin;
};

#endif /* LVEHICULOS_H */

