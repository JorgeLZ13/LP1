#ifndef VOO_H
#define VOO_H
#include "Voo.h"
#include "Horario.h"
#include "Data.h"
#include <iostream>



class Voo
{
    public:
        Voo();
        Voo(int numero, int dia, int mes, int ano, int hora, int minuto, int segundo);
        Data getData();
        Horario getHorario();
        int getNumeroVoo();
        int proximoLivre();
        int vagas();
        string setNumeroVoo(int);
        void setData(int dia, int mes, int ano);
        void setHorario(int hora, int minuto, int segundo);
        bool ocupa(int);
        string verifica(int);


    private:
        int cadeira[100];
        int numeroVoo;
        Data dataVoo;
        Horario horarioVoo;
};

#endif // VOO_H
