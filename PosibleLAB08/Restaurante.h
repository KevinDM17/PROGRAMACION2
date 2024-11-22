/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Restaurante.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Comanda.h"
using namespace std;
class Restaurante {
public:
    Restaurante();
    Restaurante(const Restaurante& orig);
    virtual ~Restaurante();
    void cargar_comandas();
    void muestra();
private:
    Comanda comandas[100];
    int cantidad_comandas;
    int buscarComanda(int id);
};

#endif /* RESTAURANTE_H */

