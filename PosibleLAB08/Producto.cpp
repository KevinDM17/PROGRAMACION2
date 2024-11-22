/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Producto.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "Producto.h"

Producto::Producto() {
    nombre=nullptr;
    precio=0.0;
}

Producto::Producto(const Producto& orig) {
}

Producto::~Producto() {
}

void Producto::SetPrecio(double precio) {
    this->precio = precio;
}

double Producto::GetPrecio() const {
    return precio;
}

void Producto::SetNombre(const char* nombre) {
    if(this->nombre!=nullptr)delete this->nombre;
    this->nombre=new char[strlen(nombre)+1];
    strcpy(this->nombre,nombre);
}
void Producto::GetNombre(char*nombre) const {
    if(this->nombre==nullptr)nombre[0]=0;
    else strcpy(nombre,this->nombre);
}
void Producto::leer(ifstream&a){
    char buffer[100],coma;
    a.getline(buffer,100,',');
    a>>precio>>coma;
    SetNombre(buffer);
}
void Producto::imprimir(ofstream&a){
    a<<nombre<<" "<<precio<<" ";
}

