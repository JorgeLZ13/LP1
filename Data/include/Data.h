#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;

class Data
{
    public:
        Data();
        Data(int, int, int);
        int Compara(int, int, int);
        string getMesExtenso();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        bool isBissexto();

    private:
        int dia;
        int mes;
        int ano;

};

#endif // DATA_H
