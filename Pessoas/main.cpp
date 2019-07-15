#include <iostream>
#include "Pessoas.h"

using namespace std;

int main()
{

    Pessoas jorge;
    Pessoas julian ("Julian", "04044-1225", 21);


    cout << "Meu nome eh: " << jorge.getNome() << endl;
    cout << "Meu telefone eh: " << jorge.getTelefone() << endl;
    cout << "Minha idade eh: " << jorge.getIdade() << endl;

    jorge.setNome("Jorge Luiz");
    jorge.setTelefone("9.9854-8090");
    jorge.setIdade(19);

    cout << "Meu nome eh: " << jorge.getNome() << endl;
    cout << "Meu telefone eh: " << jorge.getTelefone() << endl;
    cout << "Minha idade eh: " << jorge.getIdade() << endl;

    puts("");

    cout << "Meu nome eh: " << julian.getNome() << endl;
    cout << "Meu telefone eh: " << julian.getTelefone() << endl;
    cout << "Minha idade eh: " << julian.getIdade() << endl;


    return 0;
}
