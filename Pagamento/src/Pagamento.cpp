#include "Pagamento.h"
#include <iostream>

Pagamento::Pagamento()
{
    //ctor
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
    this -> valorPagamento = valorPagamento;
}

void Pagamento::setNomeDoFuncionario(string nomeDoFuncionario){
    this -> nomeDoFuncionario = nomeDoFuncionario;
}




