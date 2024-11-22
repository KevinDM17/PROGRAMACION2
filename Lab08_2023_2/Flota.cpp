/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Flota.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#include "Flota.h"

Flota::Flota() {
}

Flota::Flota(const Flota& orig) {
}

Flota::~Flota() {
}
void Flota::cargaflota(){
    ifstream arch("Vehiculos.csv",ios::in);
   
    char tipo,coma;
    while(1){
        arch>>tipo;
        if(arch.eof())break;
        arch>>coma;
        lista.leer_insertar(arch,tipo);
    }
    
}
void Flota::muestraflota(){
    ofstream arch("Reporte.txt",ios::out);
    lista.mostrar(arch);
            
}
void Flota::cargaPedidos(){
    ifstream arch("Pedidos3.csv",ios::in);
    int dni;
    char coma;
    while(1){
        arch>>dni;
        if(arch.eof())break;
        arch>>coma;
        lista.BuscarApilar(dni,arch);
    }
        
}
