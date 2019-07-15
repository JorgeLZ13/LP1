#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <iostream>

using namespace std;

int i;
Voo::Voo()
{
}

Voo::Voo(int numero, int dia, int mes, int ano, int hora, int minuto, int segundo)
{
    dataVoo.setDia(dia);
    dataVoo.setMes(mes);
    dataVoo.setAno(ano);
    horarioVoo.setHorario(hora, minuto, segundo);
}

Data Voo::getData(){
    return dataVoo;
}

void Voo::setData(int dia, int mes, int ano){
    dataVoo.setDia(dia);
    dataVoo.setMes(mes);
    dataVoo.setAno(ano);
}

int Voo::getNumeroVoo(){
    return numeroVoo;
}

string Voo::setNumeroVoo(int numeroVoo){
    if(numeroVoo<1){
            cout << "Numero invalido" << endl;
    }else this -> numeroVoo = numeroVoo;
}

int Voo::proximoLivre(){

    for (i=1; i<=100; i++){
        if(cadeira[i] == 0){
            return i;
        }
    }
}

string Voo::verifica(int cadeiraLivre){
    if(cadeira[cadeiraLivre] == 0){
        return "Cadeira Livre";
    }else return "Cadeira ocupada";
}

bool Voo::ocupa(int ocupaCadeira){
    if(cadeira[ocupaCadeira] == 0){
        cadeira[ocupaCadeira] = 1;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int cont =0;
    for(i=1; i<=100; i++){
        if(cadeira[i] == 0){
            cont ++;
        }
    }
    return cont;
}

Horario Voo::getHorario(){
    return horarioVoo;
}

void Voo::setHorario(int hora, int minuto, int segundo){
    horarioVoo.setHora(hora);
    horarioVoo.setMinuto(minuto);
    horarioVoo.setSegundo(segundo);
}





