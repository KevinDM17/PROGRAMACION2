/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Biblioteca.cpp
 * Author: kdiaz
 * 
 * Created on 11 de noviembre de 2024, 11:34 PM
 */

#include "Biblioteca.h"

Biblioteca::Biblioteca() {
}

Biblioteca::Biblioteca(const Biblioteca& orig) {
}

Biblioteca::~Biblioteca() {
}
void Biblioteca::carga(){
    ifstream arch("Estantes2.csv",ios::in);
    int i=0;
    while(1){
        AEstantes[i].leer(arch);
        if(arch.eof())break;
        i++;
    }
}
void Biblioteca::llena(){
    ifstream arch("Libros3.csv",ios::in);
    Nodo*p=new Nodo;
    char tipo,coma;
    while(1){
        arch>>tipo;
        if(arch.eof())break;
        arch>>coma;
        p->memoriayleer(arch,tipo);
//        cout<<p->sacarpeso()<<endl;
        int i=0;
        while(AEstantes[i].GetId()!=0){
            if(AEstantes[i].sacarPesoLista()+p->sacarpeso()<=AEstantes[i].GetCapacidad()){
                AEstantes[i].agregar(p);
                break;
            }
            i++;
        }
        p=new Nodo;
    }
}
void Biblioteca::muestra(){
    ofstream arch("REPORTE.txt",ios::out); 
    int i=0;
    while(AEstantes[i].GetId()!=0){
        AEstantes[i].muestra(arch);
        i++;
    }
}
void Biblioteca::baja(){
    int i=0;
    while(AEstantes[i].GetId()!=0){
        AEstantes[i].ActualizaLista();
        i++;
    }
}
