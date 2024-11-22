/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kdiaz
 *
 * Created on 8 de noviembre de 2024, 02:31 PM
 */

#include <cstdlib>
#include"Flota.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Flota flota;
    flota.cargaflota();
    flota.cargaPedidos();
    flota.muestraflota();
    return 0;
}

