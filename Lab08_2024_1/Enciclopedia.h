/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Enciclopedia.h
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#ifndef ENCICLOPEDIA_H
#define ENCICLOPEDIA_H
#include<iostream>
#include<cstring>
#include<fstream>
#include "Libro.h"
using namespace std; 
class Enciclopedia:public Libro {
public:
    Enciclopedia();
    Enciclopedia(const Enciclopedia& orig);
    virtual ~Enciclopedia();
    void SetVigencia(int vigencia);
    int GetVigencia() const;
    void SetAnho(int anho);
    int GetAnho() const;
    void SetSku(int sku);
    int GetSku() const;
     void leer(ifstream&);
     void mostrar(ofstream&);
     void actualiza();
private:
    int sku;
    int anho;
    int vigencia;
};

#endif /* ENCICLOPEDIA_H */

