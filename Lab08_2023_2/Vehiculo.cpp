/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#include "Vehiculo.h"

Vehiculo::Vehiculo() {
    cliente=0;
    placa=nullptr;
     maxcarga=0.0;
     actcarga=0.0;
    ped=nullptr;
}

Vehiculo::Vehiculo(const Vehiculo& orig) {
}

Vehiculo::~Vehiculo() {
}

void Vehiculo::SetActcarga(double actcarga) {
    this->actcarga = actcarga;
}

double Vehiculo::GetActcarga() const {
    return actcarga;
}

void Vehiculo::SetMaxcarga(double maxcarga) {
    this->maxcarga = maxcarga;
}

double Vehiculo::GetMaxcarga() const {
    return maxcarga;
}

void Vehiculo::SetPlaca(const char* placa) {
    if(this->placa!=nullptr)delete this->placa;
    this->placa=new char[strlen(placa)+1];
    strcpy(this->placa,placa);
}

void Vehiculo::GetPlaca(char*placa) const {
    if(this->placa==nullptr)placa[0]=0;
    else strcpy(placa,this->placa);
}

void Vehiculo::SetCliente(int cliente) {
    this->cliente = cliente;
}

int Vehiculo::GetCliente() const {
    return cliente;
}
void Vehiculo::leer(ifstream&a){
    char coma;
    a>>cliente>>coma;
    char buffer[100];
    a.getline(buffer,100,',');
    a>>maxcarga>>coma;
    SetPlaca(buffer);
}

void Vehiculo::push(NPedido*& p){
    if(ListaVacia()){
        ped=p;
    }else{
        p->sig=ped;
        ped=p;
    }
    actcarga+=p->GetPeso();
}
bool Vehiculo::ListaVacia(){
    return ped==nullptr;
}
void Vehiculo::mostrarUNO(ofstream&arch){
    arch<<cliente<<" "<<placa<<" "<<maxcarga<<" "<<actcarga<<" ";
}
void Vehiculo::mostrarPila(ofstream&arch){
    NPedido*p=ped;
    while(p){
        p->mostrar(arch);
        p=p->sig;
    }
}
