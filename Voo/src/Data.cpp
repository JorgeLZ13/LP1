#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{

}

Data::Data(int dia, int mes, int ano)
{

    setDia(dia);
    setMes(mes);
    setAno(ano);

}

int Data::Compara(int d, int m, int a){
    if(dia == d && mes == m && ano == a){
        return 0;
    }else if(a < ano){
        return 1;
    }else if(a == ano){
        if(m < mes){
            return 1;
        }else if(m == mes){
            if(d < dia){
                return 1;
            }
        }
    }
    return -1;
}

string Data::getMesExtenso(){

    switch(mes){

        case 1:  return "Janeiro";
                break;
        case 2:  return "Feveiro";
                break;
        case 3:  return "Marco";
                break;
        case 4:  return "Abril";
                break;
        case 5:  return "Maio";
                break;
        case 6:  return "Junho";
                break;
        case 7:  return "Julho";
                break;
        case 8:  return "Agosto";
                break;
        case 9:  return "Setembro";
                break;
        case 10:  return "Outubro";
                break;
        case 11:  return "Novembro";
                break;
        case 12:  return "Dezembro";
                break;
    }
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    if(dia >0 && dia <=31){
        this -> dia = dia;
    }else this -> dia = 1;
}

void Data::setMes(int mes){
    if(mes >0 && mes <=12){
        this -> mes = mes;
    }else this -> mes = 1;
}

void Data::setAno(int ano){
    if(ano <0){
        this ->  ano = 1;
    }else this -> ano = ano;
}

bool Data::isBissexto(){
    if(ano % 100 == 0){
        if(ano % 400 == 0){
            return true;
        }
    }else if(ano % 4 == 0 ){
        return true;
    }else{
        return false;
    }
}


