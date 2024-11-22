/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoLista.cpp
 * Author: kdiaz
 * 
 * Created on 8 de noviembre de 2024, 02:33 PM
 */

#include "NodoLista.h"

NodoLista::NodoLista() {
    unidad=nullptr;
    sig=nullptr;
}

NodoLista::NodoLista(const NodoLista& orig) {
}

NodoLista::~NodoLista() {
}
void NodoLista::lectura(ifstream&a){
    unidad->leer(a);
}
void NodoLista::muestraDato(ofstream&arch){
    unidad->mostrar(arch);
}
int NodoLista::sacarDNI(){
    return unidad->GetCliente();
}
double NodoLista::sacarACT(){
    return unidad->GetActcarga();
}
double NodoLista::sacarMAX(){
    return unidad->GetMaxcarga();
}