/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlatoFondo.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "PlatoFondo.h"

PlatoFondo::PlatoFondo() {
    proteina=new int[4]{};
}

PlatoFondo::PlatoFondo(const PlatoFondo& orig) {
}

PlatoFondo::~PlatoFondo() {
}
void PlatoFondo::leer(ifstream&a){
    Producto::leer(a);
    char coma;
    for(int i=0;i<3;i++){
        a>>proteina[i]>>coma;
    }
    a>>proteina[3];
}
void PlatoFondo::imprimir(ofstream&a){
    Producto::imprimir(a);
     for(int i=0;i<4;i++){
        a<<proteina[i]<<" ";
    }
    a<<endl;
}