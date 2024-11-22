/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehiculo.h
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:32 PM
 */

#ifndef VEHICULO_H
#define VEHICULO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "NPedido.h"
using namespace std;
class Vehiculo {
public:
    Vehiculo();
    Vehiculo(const Vehiculo& orig);
    virtual ~Vehiculo();
    void SetActcarga(double actcarga);
    double GetActcarga() const;
    void SetMaxcarga(double maxcarga);
    double GetMaxcarga() const;
    void SetPlaca(const char* placa);
    void GetPlaca(char*placa) const;
    void SetCliente(int cliente);
    int GetCliente() const;
    virtual void leer(ifstream&);
    virtual void mostrar(ofstream&)=0;
    void mostrarUNO(ofstream&);
    void mostrarPila(ofstream&);
    void push(NPedido*&p);
    bool ListaVacia();
private:
    int cliente;
    char*placa;
    double maxcarga;
    double actcarga;
    NPedido*ped;
    
};

#endif /* VEHICULO_H */

