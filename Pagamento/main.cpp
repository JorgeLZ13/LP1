#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamento.h"

using namespace std;

int main()
{
    ControleDePagamentos ci;


    ci.setPagamentos(900);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    ci.setPagamentos(200);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    ci.setPagamentos(500);

    cout << "Foi calculado um total de: " << "R$ " << ci.calculaTotalDePagamentos() << endl;

    return 0;
}
