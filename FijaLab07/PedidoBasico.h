/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoBasico.h
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 11:08 PM
 */

#ifndef PEDIDOBASICO_H
#define PEDIDOBASICO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Pedido.h"
using namespace std;
class PedidoBasico:public Pedido{
public:
    PedidoBasico();
    PedidoBasico(const PedidoBasico& orig);
//    virtual ~PedidoBasico();
    void SetAumento(int aumento);
    int GetAumento() const;
     void lee(ifstream&arch);
private:
    int aumento;
};

#endif /* PEDIDOBASICO_H */

