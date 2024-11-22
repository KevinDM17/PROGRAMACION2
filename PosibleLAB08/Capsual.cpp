/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Capsual.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:14 PM
 */

#include "Capsual.h"
#include "Entrada.h"
#include "Bebida.h"
#include "PlatoFondo.h"

Capsual::Capsual() {
    produ=nullptr;
}

Capsual::Capsual(const Capsual& orig) {
    *this=orig;
}

Capsual::~Capsual() {
}
void Capsual::leerydarme(ifstream&a, char tipo){
//    this->Capsual();
//    produ=nullptr;
//    int hola;
//    if(produ==nullptr){
//        hola=1;
//    }else{
//        hola=2;
//    }

    switch(tipo){
        case 'B':
            produ=new Bebida;
            break;
        case 'P':
            produ=new PlatoFondo;
            break;
        case'E':
            produ=new Entrada;
            break;
    }
    produ->leer(a);

}
void Capsual::imprime(ofstream&a){
    produ->imprimir(a);
}

