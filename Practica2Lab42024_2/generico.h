/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   generico.h
 * Author: kdiaz
 *
 * Created on 3 de octubre de 2024, 07:41 AM
 */

#ifndef GENERICO_H
#define GENERICO_H
#include<fstream>
using namespace std;
void llenarP(void*&platos);
void*leerPlato(ifstream&arch);
char*leerstr(ifstream&arch,char c);
void incrementar(void**&p,int&c,int&size);
void muestraP(void*platos);
void  llenarC(void*&clientes);
void*leerCliente(ifstream&arch);
void  muestraC(void*clientes);
void llenarPedidos(void*&clientes,void*&platos);
void cargar(void*&c,int&size,int&cap,void*&p,int*cants,char*codR,int dni);
int buscarC(void**c,int dni);
int buscarP(void**p,char*codP);
void incrementar2(void*&cli,int&cap,int&size);
void cortar(void*&clientes,int*sizes);
void mostrarPedidos(void*reg,ofstream&arch);
void reporteFinal(void*clientes);
#endif /* GENERICO_H */

