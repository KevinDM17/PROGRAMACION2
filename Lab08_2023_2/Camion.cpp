/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camion.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#include "Camion.h"

Camion::Camion() {
    llantas=0;
    ejes=0;
}

Camion::Camion(const Camion& orig) {
}

Camion::~Camion() {
}

void Camion::SetLlantas(int llantas) {
    this->llantas = llantas;
}

int Camion::GetLlantas() const {
    return llantas;
}

void Camion::SetEjes(int ejes) {
    this->ejes = ejes;
}

int Camion::GetEjes() const {
    return ejes;
}
void Camion::leer(ifstream&a){
    Vehiculo::leer(a);
    char c;
    a>>ejes>>c>>llantas;
//    arch.get();
    a>>ws;
}
void Camion::mostrar(ofstream&arch){
    Vehiculo::mostrarUNO(arch);
    arch<<ejes<<" "<<llantas<<endl;
     Vehiculo::mostrarPila(arch);
}