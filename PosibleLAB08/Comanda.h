/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Comanda.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:03 PM
 */

#ifndef COMANDA_H
#define COMANDA_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "Cola.h"
using namespace std;
class Comanda {
public:
    Comanda();
    Comanda(const Comanda& orig);
    virtual ~Comanda();
    void SetEstado(const char* estado);
    void GetEstado(char*estado) const;
    void SetTiempo_preparacion(int tiempo_preparacion);
    int GetTiempo_preparacion() const;
    void SetTotal(double total);
    double GetTotal() const;
    void SetHora_servicio(int hora_servicio);
    int GetHora_servicio() const;
    void SetHora_atencion(int hora_atencion);
    int GetHora_atencion() const;
    void SetId(int id);
    int GetId() const;
    void leer(ifstream&);
    void meter(ifstream&arch,char tipo);
    void muestra(ofstream&);
private:
    Cola colaXD;
    int id;
    int hora_atencion;
    int hora_servicio;
    double total;
    int tiempo_preparacion;
    char*estado;
};

#endif /* COMANDA_H */

