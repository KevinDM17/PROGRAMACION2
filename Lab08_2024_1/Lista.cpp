/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: kdiaz
 * 
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#include "Lista.h"

Lista::Lista() {
    peso=0.0;
    ini=nullptr;
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

void Lista::SetPeso(double peso) {
    this->peso = peso;
}

double Lista::GetPeso() const {
    return peso;
}
void Lista::insertar(Nodo* p){
    Nodo*inicial=ini;
    if(inicial==nullptr){
        ini=p;
    }else{
        p->sig=ini;
        ini=p;
    }
//    ini=inicial;
    peso+=p->sacarpeso();
        
}
void Lista::muestraLista(ofstream&a){
    Nodo*p=ini;
    while(p){
        p->muestraLibro(a);
        p=p->sig;
    }
}
void Lista::ActualizaNodos(){
    Nodo*p=ini;
    while(p){
        p->ACTUlIBRO();
        p=p->sig;
    }
}