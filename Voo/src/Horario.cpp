#include "Horario.h"

Horario::Horario()
{
    //ctor
}

Horario::Horario(int hora, int minuto, int segundo)
{
    setHorario(hora, minuto, segundo);
}

void Horario::setHorario(int hora, int minuto, int segundo){
    if (hora >=0 && hora <=23){
        this -> hora = hora;
    } else{
        this-> hora = 0;
        this-> minuto = 0;
        this -> segundo = 0;
    }

    if (minuto >= 0 && minuto <=59){
        this -> minuto = minuto;
    } else{
        this-> hora = 0;
        this-> minuto = 0;
        this -> segundo = 0;
    }

    if(segundo >=0 && segundo<=59){
        this -> segundo = segundo;
    } else{
        this-> hora = 0;
        this-> minuto = 0;
        this -> segundo = 0;
    }
}

int Horario::getHora(){
    return hora;
}

int Horario::getMinuto(){
    return minuto;
}

int Horario::getSegundo(){
    return segundo;
}

void Horario::setHora(int hora){
     if (hora >=0 && hora <=23){
        this -> hora = hora;
    } else this -> hora = 0;
}

void Horario::setMinuto(int minuto){
     if (minuto >= 0 && minuto <=59){
        this -> minuto = minuto;
    } else this -> minuto = 0;
}

void Horario::setSegundo(int segundo){
    if(segundo >=0 && segundo<=59){
        this -> segundo = segundo;
    } else this -> segundo = 0;
}

void Horario::avancarHorario(){
    if(segundo == 59){
        segundo = 0;
        minuto++;
    } else segundo ++;
    if(minuto > 59){
        minuto = 0;
        hora++;
    }
    if(hora > 23){
        hora = 0;
    }

}

