/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bebida.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "Bebida.h"

Bebida::Bebida() {
    tamano=nullptr;
}

Bebida::Bebida(const Bebida& orig) {
}

Bebida::~Bebida() {
}

void Bebida::SetTamano(const char* tamano) {
    if(this->tamano!=nullptr)delete this->tamano;
    this->tamano=new char[strlen(tamano)+1];
    strcpy(this->tamano,tamano);
}

void Bebida::GetTamano(char* tamano) const {
    if(this->tamano==nullptr)tamano[0]=0;
    else strcpy(tamano,this->tamano);

}
void Bebida::leer(ifstream&a){
    Producto::leer(a);
    char buffer[20];
    a.getline(buffer,20,'\n');
    SetTamano(buffer);
}
void Bebida::imprimir(ofstream& a){
    Producto::imprimir(a);
    a<<tamano<<endl;
}

