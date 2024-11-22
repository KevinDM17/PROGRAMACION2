/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estante.h
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#ifndef ESTANTE_H
#define ESTANTE_H
#include<iostream>
#include<cstring>
#include<fstream>
#include "Lista.h"
using namespace std; 
class Estante {
public:
    Estante();
    Estante(const Estante& orig);
    virtual ~Estante();
    void SetCapacidad(double capacidad);
    double GetCapacidad() const;
    void SetId(int id);
    int GetId() const;
    void SetClase(char clase);
    char GetClase() const;
    void leer(ifstream&);
    double sacarPesoLista();
    void agregar(Nodo*p);
    void muestra(ofstream&);
    void ActualizaLista();
private:
    char clase;
    int id;
    double capacidad;
    Lista Llibros;
};

#endif /* ESTANTE_H */

