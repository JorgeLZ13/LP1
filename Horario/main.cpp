#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario horaAtual;

    horaAtual.setHorario(12,20,30);

    cout << "Hora atual eh: " << horaAtual.getHora() << ": " << horaAtual.getMinuto() << ": " << horaAtual.getSegundo() << endl;

    horaAtual.setHora(20);
    horaAtual.setMinuto(59);
    horaAtual.setSegundo(40);

    cout << "Hora atual eh: " << horaAtual.getHora() << ": " << horaAtual.getMinuto() << ": " << horaAtual.getSegundo() << endl;

    horaAtual.avancarHorario();

    cout << "Hora atual eh: " << horaAtual.getHora() << ": " << horaAtual.getMinuto() << ": " << horaAtual.getSegundo() << endl;

    return 0;
}
