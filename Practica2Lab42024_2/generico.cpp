/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include "generico.h"
using namespace std;
void llenarP(void*&platos){
    void**p,*reg;
    int c=0,size=0;
    p=nullptr;
    ifstream arch("platos2.csv",ios::in);
    while(1){
        reg=leerPlato(arch);
        if(reg==nullptr)break;
        if(c==size)incrementar(p,c,size);
        p[size-1]=reg;
        size++;
        
    }
    platos=p;
}
void*leerPlato(ifstream&arch){
    void**reg=new void*[4]{};
    char*codigo,*nombre,c;
    int*stock=new int;
    double*precio=new double;
    codigo=leerstr(arch,';');
    if(arch.eof())return nullptr;
    nombre=leerstr(arch,';');
    arch>>*precio>>c>>*stock>>ws;
    reg[0]=codigo;
    reg[1]=nombre;
    reg[2]=precio;
    reg[3]=stock;
    return reg;
    
}
char*leerstr(ifstream&arch,char c){
    char*devolver,buffer[100];
    arch.getline(buffer,100,c);
    devolver=new char[strlen(buffer)+1];
    strcpy(devolver,buffer);
    return devolver;
}
void incrementar(void**&p,int&c,int&size){
    c+=5;
    void**aux;
    if(p==nullptr){
        p=new void*[c]{};
        size=1;
    }else{
        aux=new void*[c]{};
        for(int i=0;i<size;i++){
            aux[i]=p[i];
        }
        delete p;
        p=aux;
    }
}
void muestraP(void*platos){
    ofstream arch("ReportePlatos.txt",ios::out);
    void**p=(void**)platos;
    for(int i=0;p[i];i++){
        void**reg=(void**)p[i];
        char*codigo=(char*)reg[0];
        char*nombre=(char*)reg[1];
        double*precio=(double*)reg[2];
        int*stock=(int*)reg[3];
        arch<<codigo<<" "<<nombre<<" "<<*precio<<" "<<*stock<<endl;
    }
}
void  llenarC(void*&clientes){
    void*c[100]{},*reg;
    void**cli;
    int size=0;
    ifstream arch("Clientes.csv",ios::in);
    while(1){
        reg=leerCliente(arch);
        if(reg==nullptr)break;
        c[size]=reg;
        size++;
    }
    cli=new void*[size+1]{};
    for(int i=0;i<size;i++){
        cli[i]=c[i];
    }
    clientes=cli;
}
void*leerCliente(ifstream&arch){
   //90367684,CORONEL CHUMPITAZ HELI ,Villa Maria del Triunfo,977518179
    void**reg=new void*[5]{};
    int*dni=new int,*telefono=new int;
    char*nombre,*direccion;
    arch>>*dni;
    if(arch.eof())return nullptr;
    arch.get();
    nombre=leerstr(arch,',');
    direccion=leerstr(arch,',');
    arch>>*telefono;
    double*conteo=new double(0);
    reg[0]=dni;
    reg[1]=nombre;
    reg[2]=direccion;
    reg[3]=nullptr;
    reg[4]=conteo;
 
    return reg;
}
void  muestraC(void*clientes){
    ofstream arch("ReporteClientes.txt",ios::out);
    void**c=(void**)clientes;
    for(int i=0;c[i];i++){
        void**reg=(void**)c[i];
        int*dni=(int*)reg[0];
        char*nombre=(char*)reg[1];
        char*direccion=(char*)reg[2];
        arch<<*dni<<" "<<nombre<<" "<<direccion<<endl;
    }
}
void llenarPedidos(void*&clientes,void*&platos){
    ifstream arch("Pedidos.csv",ios::in);
    int sizes[100]{},caps[100]{},dni,*cants=new int,posC,posP;
    void**c=(void**)clientes;
    void**p=(void**)platos;
    char*codP,*codR;
    while(1){
        arch>>dni;
        if(arch.eof())break;
        arch.get();
        arch>>*cants;
        arch.get();
        codP=leerstr(arch,',');
        codR=leerstr(arch,'\n');
        posC=buscarC(c,dni);
        posP=buscarP(p,codP);
        cout<<codR<<" "<<codP<<endl;
        cargar(c[posC],sizes[posC],caps[posC],p[posP],cants,codR,dni);
    }
    cortar(clientes,sizes);
}
void cortar(void*&clientes,int*sizes){
    void**aux=(void**)clientes;
    for(int i=0;aux[i];i++){
        void**reg=(void**)aux[i];
        void**dato=(void**)reg[3];
        void**nuevo=new void*[sizes[i]+1];
        for(int j=0;j<sizes[i];j++){
            nuevo[j]=dato[j];
        }
        delete dato;
        reg[3]=nuevo;
    }
}
void cargar(void*&c,int&size,int&cap,void*&p,int*cants,char*codR,int dni){
    void**cli=(void**)c;
    void**pla=(void**)p;
    int*stock=(int*)pla[3];
    double*precio=(double*)pla[2];
    if(cli[3]==nullptr){
        void**pedidos=new void*[200]{};
        cli[3]=pedidos;
    }
    if(*stock-*cants>=0){
        *stock=*stock-*cants;
        void**reg=new void*[3]{};
        reg[0]=codR;
        reg[1]=cants;
        reg[2]=p;
        //void**pedidos=(void**)cli[3];
        double*conteo=(double*)cli[4];
        void**pedidos=(void**)cli[3];
//        void**pedidos=new void*(cli[3]);
        *conteo=*conteo+*precio;
        pedidos[size]=reg;
        size++;

    }

}
int buscarC(void**c,int dni){
    for(int i=0;c[i];i++){
        void**r=(void**)c[i];
        int*dnis=(int*)r[0];
        if(dni==*dnis)return i;
    }
    return -1;
}
int buscarP(void**p,char*codP){
    for(int i=0;p[i];i++){
        void**r=(void**)p[i];
        char*cod=(char*)r[0];
        if(strcmp(codP,cod)==0)return i;
    }
    return -1;  
}
void incrementar2(void*&cli,int&cap,int&size){
    void**c=(void**)cli,**aux;
    cap+=5;
    if(c==nullptr){
        c=new void*[cap]{};
        size=1;
    }else{
        aux=new void*[cap]{};
        for(int i=0;i<size;i++){
            aux[i]=c[i];
        }
        delete c;
        c=aux;
    }
}
void reporteFinal(void*clientes){
    ofstream arch("REPORTEFINAL.txt",ios::out);
    void**cli=(void**)clientes;
    for(int i=0;cli[i];i++){
        void**reg=(void**)cli[i];
        int*dni=(int*)reg[0];
        char*nombre=(char*)reg[1];
        char*direccion=(char*)reg[2];
        double*total=(double*)reg[4];
        arch<<*dni<<" "<<nombre<<" "<<direccion<<" "<<*total<<endl;
        mostrarPedidos(reg[3],arch);
    }
}
void mostrarPedidos(void*reg,ofstream&arch){
    if(reg!=nullptr){
        void**cli=(void**)reg;
        char*cod,*codP,*nombre;
        int*cant;
        for(int i=0;cli[i];i++){
            void**pedido=(void**)cli[i];
            void**plato=(void**)pedido[2];
            cod=(char*)pedido[0];
            cant=(int*)pedido[1];
            codP=(char*)plato[0];
            nombre=(char*)plato[1];
            arch<<cod<<" "<<*cant<<" "<<codP<<" "<<nombre<<endl;
        }
    }
}