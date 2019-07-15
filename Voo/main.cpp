#include <iostream>
#include "Voo.h"
#include "Horario.h"
#include "Data.h"

using namespace std;

int main()
{
    int x, y;
    Voo londres[100];



    y = londres[0].ocupa(15);

    londres[0].setData(12,10,2019);
    londres[0].setHorario(15,40,25);


    cout << "Proxima cadeira livre: " << londres[0].proximoLivre() << endl;

    cout << "Data do Voo: " << londres[0].getData().getDia() << "/ " <<  londres[0].getData().getMes() << "/ " << londres[0].getData().getAno() << endl;

    cout << "Teste de verificar "<< londres[0].verifica(15) << endl;

    x = londres[0].ocupa(15);

    cout << "Cadeira 15 foi ocupada: " <<   x << endl;

    cout << "Cadeira 15 nao foi ocupada por que ja tinha sido ocupada: " <<  y << endl;

    cout << "Existem " << londres[0].vagas() << " cadeiras vagas" << endl;

    londres[0].setNumeroVoo(1);

    cout << "O numero do seu voo eh: " << londres[0].getNumeroVoo() << endl;

    cout << "A Hora voo eh: " << londres[0].getHorario().getHora() << ": " << londres[0].getHorario().getMinuto() << ": " << londres[0].getHorario().getSegundo() << endl;

    return 0;
}
