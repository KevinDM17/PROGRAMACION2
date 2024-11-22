/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include<cstring>
#include<fstream>
#include "Nodo.h"
using namespace std; 
class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    void SetPeso(double peso);
    double GetPeso() const;
    void insertar(Nodo*p);
    void muestraLista(ofstream&);
    void ActualizaNodos();
private:
    double peso;
    Nodo*ini;
};

#endif /* LISTA_H */

