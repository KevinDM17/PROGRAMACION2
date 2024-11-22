/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LVehiculos.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 04:29 PM
 */

#include "LVehiculos.h"


LVehiculos::LVehiculos() {
    lini=nullptr;
    lfin=nullptr;
}

LVehiculos::LVehiculos(const LVehiculos& orig) {
}

LVehiculos::~LVehiculos() {
}
void LVehiculos::leer_insertar(ifstream& arch, char tipo){
    NodoLista*nuevo= new NodoLista;
    switch(tipo){
        case 'F':
            nuevo->unidad=new Furgon;
            break;
        case 'C':
            nuevo->unidad= new Camion;
            break;
    }
    nuevo->lectura(arch);
    if(lini==nullptr){
        lini=nuevo;
        lfin=nuevo;
    }else{
        lfin->sig=nuevo;
        lfin=nuevo;
    }
}
void LVehiculos::mostrar(ofstream&arch){
    NodoLista*p=lini;
    while(p){
        p->muestraDato(arch);
        p=p->sig;
    }
}
void LVehiculos::BuscarApilar(int dni, ifstream&a){
    NodoLista*p=lini;
    while(p){
        if(p->sacarDNI()==dni)break;
        p=p->sig;
    }
    NPedido*pedido=new NPedido;
    pedido->leerP(a);
   
    if(p!=nullptr and p->sacarACT()+pedido->GetPeso()<=p->sacarMAX() ){
        p->unidad->push(pedido);
    }else{
        return;
    }
    
}
