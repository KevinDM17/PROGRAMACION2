/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: kdiaz
 *
 * Created on 19 de noviembre de 2024, 11:13 PM
 */

#ifndef NODO_H
#define NODO_H
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
//#include "Cola.h"
#include "Capsual.h"
using namespace std;
class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    friend class Cola;
//    void darmemoriaLeer(ifstream&,char tipo);
private:
    Nodo*sig;
    Capsual elemento;
};

#endif /* NODO_H */

