/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Furgon.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#include "Furgon.h"

Furgon::Furgon() {
    filas=0;
    puertas=0;
           
}

Furgon::Furgon(const Furgon& orig) {
}

Furgon::~Furgon() {
}

void Furgon::SetPuertas(int puertas) {
    this->puertas = puertas;
}

int Furgon::GetPuertas() const {
    return puertas;
}

void Furgon::SetFilas(int filas) {
    this->filas = filas;
}

int Furgon::GetFilas() const {
    return filas;
}
void Furgon::leer(ifstream&a){
    Vehiculo::leer(a);
    char coma;
    a>>filas>>coma>>puertas>>ws;
}
void Furgon::mostrar(ofstream&arch){
    Vehiculo::mostrarUNO(arch);
    arch<<filas<<" "<<puertas<<endl;
    Vehiculo::mostrarPila(arch);
}
