/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Enciclopedia.cpp
 * Author: kdiaz
 * 
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#include "Enciclopedia.h"

Enciclopedia::Enciclopedia() {
    sku=0;
    anho=0;
    vigencia=1;
}

Enciclopedia::Enciclopedia(const Enciclopedia& orig) {
}

Enciclopedia::~Enciclopedia() {
}

void Enciclopedia::SetVigencia(int vigencia) {
    this->vigencia = vigencia;
}

int Enciclopedia::GetVigencia() const {
    return vigencia;
}

void Enciclopedia::SetAnho(int anho) {
    this->anho = anho;
}

int Enciclopedia::GetAnho() const {
    return anho;
}

void Enciclopedia::SetSku(int sku) {
    this->sku = sku;
}

int Enciclopedia::GetSku() const {
    return sku;
}
void Enciclopedia::leer(ifstream&a){
    Libro::leer(a);
    char coma;
    a>>sku>>coma>>anho>>ws;
}
void Enciclopedia::mostrar(ofstream&a){
    Libro::mostrar(a);
    a<<sku<<" "<<anho<<" "<<vigencia<<endl;
}
void Enciclopedia::actualiza(){
    if(anho<=2020){
        vigencia=0;
    }
}

