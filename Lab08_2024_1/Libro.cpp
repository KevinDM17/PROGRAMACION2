/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Libro.cpp
 * Author: kdiaz
 * 
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#include "Libro.h"

Libro::Libro() {
    nombre=nullptr;
    paginas=0;
    peso=0.0;
}

Libro::Libro(const Libro& orig) {
}

Libro::~Libro() {
}

void Libro::SetPeso(double peso) {
    this->peso = peso;
}

double Libro::GetPeso() const {
    return peso;
}

void Libro::SetPaginas(int paginas) {
    this->paginas = paginas;
}

int Libro::GetPaginas() const {
    return paginas;
}

void Libro::SetNombre(const char* nombre) {
    if(this->nombre!=nullptr)delete this->nombre;
    this->nombre=new char[strlen(nombre)+1];
    strcpy(this->nombre,nombre);
}

void  Libro::GetNombre( char* nombre) const {
    if(this->nombre==nullptr) nombre[0]=0;
    else strcpy(nombre,this->nombre);
}
void Libro::leer(ifstream&arch){
    char buffer[200],coma;
    arch.getline(buffer,200,',');
    arch>>paginas>>coma>>peso>>coma;
    SetNombre(buffer);        
}
void Libro::mostrar(ofstream&a){
    a<<nombre<<" "<<peso<<" ";
}

