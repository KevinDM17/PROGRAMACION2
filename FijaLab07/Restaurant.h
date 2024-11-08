/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Restaurant.h
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 11:09 PM
 */

#ifndef RESTAURANT_H
#define RESTAURANT_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Cliente.h"
using namespace std;
class Restaurant {
public:
    Restaurant();
    Restaurant(const Restaurant& orig);
    virtual ~Restaurant();
    void cargarClientes();
    void cargarPedidos();
//    void actualizar();
    
private:
//    int buscarCliente(int dni);
    Cliente*clientes;
    PedidoBasico*pbs;
    PedidoVip*pvs;
};

#endif /* RESTAURANT_H */

