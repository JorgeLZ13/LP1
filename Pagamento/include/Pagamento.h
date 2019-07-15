#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

using namespace std;

class Pagamento
{
    public:
        Pagamento();
        double getValorPagamento();
        string getNomeDoFuncionario();
        void setValorPagamento(double);
        void setNomeDoFuncionario(string);

    private:
        double valorPagamento = 0;
        string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
