/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kdiaz
 *
 * Created on 3 de octubre de 2024, 07:39 AM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "generico.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    void*platos,*clientes;
    llenarP(platos);
    muestraP(platos);
    llenarC(clientes);
    muestraC(clientes);
    void**cli=(void**)clientes;
    void**p=(void**)cli[74];
    int*dni=(int*)p[0];
    cout<<*dni;
    llenarPedidos(clientes,platos);
    reporteFinal(clientes);
    return 0;
}

