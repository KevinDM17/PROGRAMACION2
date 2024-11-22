/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flota.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#ifndef FLOTA_H
#define FLOTA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "LVehiculos.h"
using namespace std;
class Flota {
public:
    Flota();
    Flota(const Flota& orig);
    virtual ~Flota();
    void cargaflota();
    void muestraflota();
    void cargaPedidos();
private:
    LVehiculos lista;
};

#endif /* FLOTA_H */

