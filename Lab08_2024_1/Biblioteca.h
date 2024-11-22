/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Biblioteca.h
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:34 PM
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include<iostream>
#include<cstring>
#include<fstream>
#include "Estante.h"
using namespace std; 
class Biblioteca {
public:
    Biblioteca();
    Biblioteca(const Biblioteca& orig);
    virtual ~Biblioteca();
    void carga();
    void llena();
    void muestra();
    void baja();
private:
    Estante AEstantes[10];
};

#endif /* BIBLIOTECA_H */

