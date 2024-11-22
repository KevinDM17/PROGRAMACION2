/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:13 PM
 */

#include "Cola.h"
#include "Capsual.h"
Cola::Cola() {
    ini=nullptr;
    fin=nullptr;
}

Cola::Cola(const Cola& orig) {
}

Cola::~Cola() {
}
void Cola::encolar(ifstream&a, char tipo){
    Nodo*nuevo=new Nodo;
    Capsual h;
    h.leerydarme(a,tipo);
    nuevo->elemento=h;
    if(ini==nullptr){
        ini=nuevo;
        fin=nuevo;
    }else{
        Nodo*fins=fin;
        fins->sig=nuevo;
        fin=nuevo;
    }
    
}
Capsual Cola::desencolar(){
    Nodo*saco=new Nodo;
    Capsual devuelvo;
    saco=ini;
    devuelvo=saco->elemento;
    ini=ini->sig;
    delete saco;
    return devuelvo;
}
void Cola::imprimirr(ofstream&a){
    while(ini!=nullptr){
        Capsual capsula=desencolar();
        capsula.imprime(a);
    }
}