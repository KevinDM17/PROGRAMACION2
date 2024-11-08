/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoVip.h
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 11:07 PM
 */

#ifndef PEDIDOVIP_H
#define PEDIDOVIP_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Pedido.h"
using namespace std;
class PedidoVip:public Pedido{
public:
    PedidoVip();
    PedidoVip(const PedidoVip& orig);
//    virtual ~PedidoVip();
    void SetDescuento(int descuento);
    int GetDescuento() const;
     void lee(ifstream&arch);
private:
    int descuento;
};

#endif /* PEDIDOVIP_H */

