/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.h
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 10:57 PM
 */

#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "PedidoBasico.h"
#include "PedidoVip.h"
using namespace std;
class Cliente {
public:
    Cliente();
    Cliente(const Cliente& orig);
    virtual ~Cliente();
    void SetCiudad(const char* ciudad);
   void GetCiudad(char* ciudad) const;
    void SetNombre(const char* nombre);
    void GetNombre(char* nombre) const;
    void SetDni(int dni);
    int GetDni() const;
    void lee(ifstream&);
    void llena(Cliente c);
    void agregar(double c);
    void SetTotal(double total);
    double GetTotal() const;
//    void operator =(const Cliente c);
private:
    int dni;
    char*nombre;
    char*ciudad;
    double total;
};

#endif /* CLIENTE_H */

