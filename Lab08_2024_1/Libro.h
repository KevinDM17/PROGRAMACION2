/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Libro.h
 * Author: kdiaz
 *
 * Created on 11 de noviembre de 2024, 11:33 PM
 */

#ifndef LIBRO_H
#define LIBRO_H
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std; 
class Libro {
public:
    Libro();
    Libro(const Libro& orig);
    virtual ~Libro();
    void SetPeso(double peso);
    double GetPeso() const;
    void SetPaginas(int paginas);
    int GetPaginas() const;
    void SetNombre(const char* nombre);
    void GetNombre( char* nombre) const;
    virtual void leer(ifstream&);
    virtual void mostrar(ofstream&);
    virtual void actualiza()=0;
private:
    char*nombre;
    int paginas;
    double peso;
};

#endif /* LIBRO_H */

