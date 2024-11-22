/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Comanda.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "Comanda.h"
#include "Capsual.h"
Comanda::Comanda() {
         id=0;
     hora_atencion=0;
     hora_servicio=0;
     total=0.0;
     tiempo_preparacion=0;
  estado=nullptr;
}

Comanda::Comanda(const Comanda& orig) {
}

Comanda::~Comanda() {
}

void Comanda::SetEstado(const char* estado) {
    if(this->estado!=nullptr)delete this->estado;
    this->estado=new char[strlen(estado)+1];
    strcpy(this->estado,estado);
}

void Comanda::GetEstado( char* estado) const {
    if(this->estado==nullptr)estado[0]=0;
    else strcpy(estado,this->estado);
}

void Comanda::SetTiempo_preparacion(int tiempo_preparacion) {
    this->tiempo_preparacion = tiempo_preparacion;
}

int Comanda::GetTiempo_preparacion() const {
    return tiempo_preparacion;
}

void Comanda::SetTotal(double total) {
    this->total = total;
}

double Comanda::GetTotal() const {
    return total;
}

void Comanda::SetHora_servicio(int hora_servicio) {
    this->hora_servicio = hora_servicio;
}

int Comanda::GetHora_servicio() const {
    return hora_servicio;
}

void Comanda::SetHora_atencion(int hora_atencion) {
    this->hora_atencion = hora_atencion;
}

int Comanda::GetHora_atencion() const {
    return hora_atencion;
}

void Comanda::SetId(int id) {
    this->id = id;
}

int Comanda::GetId() const {
    return id;
}
void Comanda::leer(ifstream&a){
    int horaA,minA,horaS,minS;
    char coma,puntos;
    a>>id>>coma>>horaA>>puntos>>minA>>coma>>horaS>>puntos>>minS;
}
void Comanda::meter(ifstream& arch, char tipo){
    colaXD.encolar(arch,tipo);
}
void Comanda::muestra(ofstream&a){
    a<<id<<endl;
    colaXD.imprimirr(a);
}