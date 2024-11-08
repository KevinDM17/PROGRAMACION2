/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.cpp
 * Author: kdiaz
 * 
 * Created on 7 de noviembre de 2024, 10:57 PM
 */

#include "Cliente.h"

Cliente::Cliente() {
    dni=0;
    nombre=nullptr;
    ciudad=nullptr;
    total=0.0;
}

Cliente::Cliente(const Cliente& orig) {
//        nombre=nullptr;
//    ciudad=nullptr;
//        pb=nullptr;
//    pv=nullptr;
//   *this=orig;
}

Cliente::~Cliente() {
}

void Cliente::SetCiudad(const char* ciudad) {
    if(this->ciudad!=nullptr)delete this->ciudad;
    this->ciudad=new char[strlen(ciudad)+1];
    strcpy(this->ciudad,ciudad);
}

void Cliente::GetCiudad(char*ciudad) const {
    if(this->ciudad==nullptr)ciudad[0]=0;
    else strcpy(ciudad,this->ciudad);
}

void Cliente::SetNombre(const char* nombre) {
    if(this->nombre!=nullptr)delete this->nombre;
    this->nombre=new char[strlen(nombre)+1];
    strcpy(this->nombre,nombre);
}

void Cliente::GetNombre(char*nombre) const {
    if(this->nombre==nullptr)nombre[0]=0;
    else strcpy(nombre,this->nombre);
}

void Cliente::SetDni(int dni) {
    this->dni = dni;
}

int Cliente::GetDni() const {
    return dni;
}
void Cliente::lee(ifstream&a){

    char bufferN[100],bufferC[50],c;
    a>>dni>>c;
    a.getline(bufferN,100,',');
    a.getline(bufferC,50,'\n');
    a>>ws;
    SetNombre(bufferN);
    SetCiudad(bufferC);
}
//void Cliente::operator =(const Cliente c){
////    dni=c.GetDni();
////    char buffern[50],bufferc[50];
////    c.GetCiudad(bufferc);
////    c.GetNombre(buffern);
////    SetNombre(buffern);
////    SetCiudad(bufferc);
//}
void Cliente::llena(Cliente c){
//        dni=c.GetDni();
//    char buffern[50],bufferc[50];
//    c.GetCiudad(bufferc);
//    c.GetNombre(buffern);
//    SetNombre(buffern);
//    SetCiudad(bufferc);
}

void Cliente::SetTotal(double total) {
    this->total = total;
}

double Cliente::GetTotal() const {
    return total;
}
void Cliente::agregar(double c){
    total+=c;
}

