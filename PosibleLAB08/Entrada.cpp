/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entrada.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "Entrada.h"

Entrada::Entrada() {
//    Producto::Producto();
    picante=true;
}

Entrada::Entrada(const Entrada& orig) {
}

Entrada::~Entrada() {
}

void Entrada::SetPicante(bool picante) {
    this->picante = picante;
}

bool Entrada::IsPicante() const {
    return picante;
}
void Entrada::leer(ifstream&a){
    Producto::leer(a);
    char buffer[20];
    a.getline(buffer,20,'\n');
    if(strcmp(buffer,"sin picante")==0){
        picante=false;
    }else if(strcmp(buffer,"picante")==0){
        picante=true;
    }
}
void Entrada::imprimir(ofstream&a){
    Producto::imprimir(a);
    if(picante){
        a<<"picante"<<endl;
    }else{
        a<<"sin picante"<<endl;
    }
    
}
