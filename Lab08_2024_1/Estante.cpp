/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estante.cpp
 * Author: kdiaz
 * 
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#include "Estante.h"

Estante::Estante() {
     clase=' ';
     id=0;
     capacidad=0.0;
}

Estante::Estante(const Estante& orig) {
}

Estante::~Estante() {
}

void Estante::SetCapacidad(double capacidad) {
    this->capacidad = capacidad;
}

double Estante::GetCapacidad() const {
    return capacidad;
}

void Estante::SetId(int id) {
    this->id = id;
}

int Estante::GetId() const {
    return id;
}

void Estante::SetClase(char clase) {
    this->clase = clase;
}

char Estante::GetClase() const {
    return clase;
}
void Estante::leer(ifstream&a){
    char coma;
    a>>clase>>coma>>id>>coma>>capacidad>>ws;
}
double Estante::sacarPesoLista(){
    return Llibros.GetPeso();
}
void Estante::agregar(Nodo* p){
    Llibros.insertar(p);
}
void Estante::muestra(ofstream&a){
    a<<id<<" "<<clase<<" "<<capacidad<<" "<<sacarPesoLista()<<endl;
    Llibros.muestraLista(a);
}
void Estante::ActualizaLista(){
    Llibros.ActualizaNodos();
}