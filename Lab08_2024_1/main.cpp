/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:32 PM
 */

#include <cstdlib>
#include "Biblioteca.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Biblioteca b;
    b.carga();
    b.llena();
    b.baja();
    b.muestra();
    return 0;
}

