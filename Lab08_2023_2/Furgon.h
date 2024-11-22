/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Furgon.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#ifndef FURGON_H
#define FURGON_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Vehiculo.h"
using namespace std;
class Furgon:public Vehiculo {
public:
    Furgon();
    Furgon(const Furgon& orig);
    virtual ~Furgon();
    void SetPuertas(int puertas);
    int GetPuertas() const;
    void SetFilas(int filas);
    int GetFilas() const;
        void leer(ifstream&);
        void mostrar(ofstream&);
private:
    int filas;
    int puertas;
};

#endif /* FURGON_H */

