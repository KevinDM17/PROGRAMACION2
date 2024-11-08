/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PedidoVip.cpp
 * Author: kdiaz
 * 
 * Created on 7 de noviembre de 2024, 11:07 PM
 */

#include "PedidoVip.h"

PedidoVip::PedidoVip() {
    descuento=0;
}

PedidoVip::PedidoVip(const PedidoVip& orig) {
}

//PedidoVip::~PedidoVip() {
//}

void PedidoVip::SetDescuento(int descuento) {
    this->descuento = descuento;
}

int PedidoVip::GetDescuento() const {
    return descuento;
}
void PedidoVip::lee(ifstream& arch){
    Pedido::lee(arch);
    arch>>descuento;
  while(arch.get()!='\n');
}

