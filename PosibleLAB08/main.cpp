/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:02 PM
 */

#include <cstdlib>
#include "Restaurante.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
Restaurante r;
r.cargar_comandas();
r.muestra();
    return 0;
}

