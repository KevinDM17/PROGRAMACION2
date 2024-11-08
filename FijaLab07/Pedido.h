/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pedido.h
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 10:57 PM
 */

#ifndef PEDIDO_H
#define PEDIDO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>

using namespace std;
class Pedido {
public:
    Pedido();
    Pedido(const Pedido& orig);
//    virtual ~Pedido();
    void SetCosto(double costo);
    double GetCosto() const;
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetDni_cliente(int dni_cliente);
    int GetDni_cliente() const;
    void lee(ifstream&arch);
    
private:
    int  dni_cliente;
    int cantidad;
    double costo;
};

#endif /* PEDIDO_H */

