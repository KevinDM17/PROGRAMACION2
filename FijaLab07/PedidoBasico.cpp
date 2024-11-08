/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoBasico.cpp
 * Author: kdiaz
 * 
 * Created on 7 de noviembre de 2024, 11:08 PM
 */

#include "PedidoBasico.h"

PedidoBasico::PedidoBasico() {
    aumento=0;
}

PedidoBasico::PedidoBasico(const PedidoBasico& orig) {
}

//PedidoBasico::~PedidoBasico() {
//}

void PedidoBasico::SetAumento(int aumento) {
    this->aumento = aumento;
}

int PedidoBasico::GetAumento() const {
    return aumento;
}
void PedidoBasico::lee(ifstream& arch){
    Pedido::lee(arch);
    arch>>aumento;
     while(arch.get()!='\n');
}
