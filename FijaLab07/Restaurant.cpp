/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Restaurant.cpp
 * Author: kdiaz
 * 
 * Created on 7 de noviembre de 2024, 11:09 PM
 */

#include "Restaurant.h"

Restaurant::Restaurant() {
    clientes=nullptr;
    pbs=nullptr;
    pvs=nullptr;
}

Restaurant::Restaurant(const Restaurant& orig) {
}

Restaurant::~Restaurant() {
}
void Restaurant::cargarClientes(){
    ifstream arch("Clientes.csv",ios::in);
    Cliente buffer[10]{};
    int i=0;
    while(1){
      buffer[i].lee(arch);
        
        if(arch.eof())break;
//        cout<<buffer[i].GetDni()<<endl;
        i++;
    }
    clientes=new Cliente[i+1];
    for(int j=0;j<=i;j++){
        clientes[j]=buffer[j];
        
    }
    clientes[i+1].SetDni(0);
}
void Restaurant::cargarPedidos(){
    ifstream arch("Pedidos_Actualizado.csv",ios::in);
    PedidoBasico bufferb[10]{};
    int cantB=0;
    PedidoVip bufferv[10]{};
    int cantV=0;
    char tipo,coma;
    while(1){
        
        if(arch.eof())break;
        arch>>tipo;
        arch.get();

        if(tipo=='V'){
            bufferv[cantV].lee(arch);
            cantV++;
        }else{
            bufferb[cantB].lee(arch);
            cantB++;
        }
    }
//    pbs=new PedidoBasico[cantB+1];
//    for(int i=0;i<cantB;i++){
//        pbs[i]=bufferb[i];
////        cout<<pbs[i].GetDni_cliente()<<endl;
//    }
////    pbs[cantB+1].SetDni_cliente(0);
//    pvs=new PedidoVip[cantV+1];
//    for(int j=0;j<cantV;j++){
//        pvs[j]=bufferv[j];
//    }
//    pvs[cantV+1].SetDni_cliente(0);
}
//void Restaurant::actualizar(){
//    int i=0;
//    while(pvs[i].GetDni_cliente()!=0){
//        int dni=pvs[i].GetDni_cliente();
//        int pos=buscarCliente(dni);
//        double total=pvs[i].GetCosto();
//        int descuento=pvs[i].GetDescuento();
//        double devolver=total-((total*descuento)/100);
//        
//        clientes[pos].agregar(devolver);
//        i++;
//    }
//    int j=0;
//    while(pbs[j].GetDni_cliente()!=0){
//        int dni=pbs[i].GetDni_cliente();
//        int pos=buscarCliente(dni);
//        double total=pbs[i].GetCosto();
//        int aumento=pbs[i].GetAumento();
//        double devolver=total+((total*aumento)/100);
//        j++;
//    }
//}
//int Restaurant::buscarCliente(int dni){
//    int i=0;
//    while(clientes[i].GetDni()!=0){
//        if(clientes[i].GetDni()==dni)return i;
//        i++;
//    }
//    return -1;
//}
