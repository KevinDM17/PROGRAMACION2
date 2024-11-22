/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Restaurante.cpp
 * Author: kdiaz
 * 
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#include "Restaurante.h"

Restaurante::Restaurante() {
    cantidad_comandas=0;
}

Restaurante::Restaurante(const Restaurante& orig) {
}

Restaurante::~Restaurante() {
}
void Restaurante::cargar_comandas(){
    ifstream arch("atenciones.csv",ios::in);
    ifstream arch1("comandas.csv",ios::in);
    while(1){
        comandas[cantidad_comandas].leer(arch);
        if(arch.eof())break;
//        cout<<comandas[cantidad_comandas].GetId()<<endl;
        cantidad_comandas++;
        
    }
    int id;
    char tipo,coma;
    while(1){
        arch1>>id;
        if(arch1.eof())break;
        arch1>>coma;
        arch1>>tipo;
        arch1>>coma;
        int pos=buscarComanda(id);
        comandas[pos].meter(arch1,tipo);
    }
}
int Restaurante::buscarComanda(int id){
    for(int i=0;i<cantidad_comandas;i++){
        if(comandas[i].GetId()==id)return i;
    }
    return -1;
}
void Restaurante::muestra(){
    ofstream arch("REPORTE.txt",ios::out);
    for(int i=0;i<cantidad_comandas;i++){
        comandas[i].muestra(arch);
    }
}
