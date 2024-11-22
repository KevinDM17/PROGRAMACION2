/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camion.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#ifndef CAMION_H
#define CAMION_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Vehiculo.h"
using namespace std;
class Camion:public Vehiculo {
public:
    Camion();
    Camion(const Camion& orig);
    virtual ~Camion();
    void SetLlantas(int llantas);
    int GetLlantas() const;
    void SetEjes(int ejes);
    int GetEjes() const;
    void leer(ifstream&);
    void mostrar(ofstream&);
private:
    int ejes;
    int llantas;
};

#endif /* CAMION_H */

