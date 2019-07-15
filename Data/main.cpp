#include <iostream>
#include "Data.h"
#include <string.h>

using namespace std;

int main()
{

    Data atual(12,07,2019);
    Data aniversario;


    cout << "Data Construtor: " << atual.getDia() << "/ " << atual.getMes() << "/ " << atual.getAno() << endl;

    aniversario.setDia(24);
    aniversario.setMes(07);
    aniversario.setAno(1999);

    cout << "Data Aniversario: " << aniversario.getDia() << "/ " << aniversario.getMes() << "/ " << aniversario.getAno() << endl;

    cout << "Validade da data: " << aniversario.Compara(atual.getDia(),atual.getMes(),atual.getAno()) << endl;

    cout << "Bissexto: " << aniversario.isBissexto() << endl;


    return 0;
}
