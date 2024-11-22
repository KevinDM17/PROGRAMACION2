/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NPedido.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#include "NPedido.h"

NPedido::NPedido() {
    codigo=nullptr;
    cantidad=0;
    peso=0.0;
    sig=nullptr;
}

NPedido::NPedido(const NPedido& orig) {
}

NPedido::~NPedido() {
}

void NPedido::SetPeso(double peso) {
    this->peso = peso;
}

double NPedido::GetPeso() const {
    return peso;
}

void NPedido::SetCantidad(int cantidad) {
    this->cantidad = cantidad;
}

int NPedido::GetCantidad() const {
    return cantidad;
}

void NPedido::SetCodigo(const char* codigo) {
    if(this->codigo!=nullptr)delete this->codigo;
    this->codigo=new char[strlen(codigo)+1];
    strcpy(this->codigo,codigo);
}

void NPedido::GetCodigo(char* codigo) const {
    if(this->codigo==nullptr)codigo[0]=0;
    else strcpy(codigo,this->codigo);
}
void NPedido::leerP(ifstream&arch){
    char buffer[100],coma;
    arch.getline(buffer,100,',');
    arch>>cantidad>>coma>>peso;
    SetCodigo(buffer);
}
void NPedido::mostrar(ofstream&arch){
    arch<<codigo<<" "<<cantidad<<" "<<peso<<endl;
}
