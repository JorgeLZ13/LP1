#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <iostream>



class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamentos(double valor);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string);


    private:
        Pagamento pagamentos[20];
};

#endif // CONTROLEDEPAGAMENTOS_H
