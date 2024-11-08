/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kdiaz
 *
 * Created on 7 de noviembre de 2024, 10:57 PM
 */

#include <cstdlib>
#include "Restaurant.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Restaurant r;
    r.cargarClientes();
    r.cargarPedidos();
    return 0;
}

