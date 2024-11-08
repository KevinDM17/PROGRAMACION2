/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pedido.cpp
 * Author: kdiaz
 * 
 * Created on 7 de noviembre de 2024, 10:57 PM
 */

#include "Pedido.h"

Pedido::Pedido() {
          dni_cliente=0;
     cantidad=0;
     costo=0.0;
}

Pedido::Pedido(const Pedido& orig) {
}

//Pedido::~Pedido() {
//}

void Pedido::SetCosto(double costo) {
    this->costo = costo;
}

double Pedido::GetCosto() const {
    return costo;
}

void Pedido::SetCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int Pedido::GetCantidad() const {
    return cantidad;
}

void Pedido::SetDni_cliente(int dni_cliente) {
    this->dni_cliente = dni_cliente;
}

int Pedido::GetDni_cliente() const {
    return dni_cliente;
}
void Pedido::lee(ifstream& arch){
    arch>>cantidad;
    arch.get();
    arch>>dni_cliente;
    arch.get();
    arch>>costo;
    arch.get();
}

