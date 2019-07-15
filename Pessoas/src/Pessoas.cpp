#include <iostream>
#include <string.h>
#include "Pessoas.h"

using namespace std;

Pessoas::Pessoas()
{
    nome = "Desconhecido";
    telefone = "0000-0000";
    idade = 1;
}
Pessoas::Pessoas(string nome, string telefone, int idade)
{
    this-> nome = nome;
    this -> telefone = telefone;
    this-> idade = idade;
}

string Pessoas::getNome(){
    return nome;
}

string Pessoas::getTelefone(){
    return telefone;
}

int Pessoas::getIdade(){
    return idade;
}

void Pessoas::setNome(string nome){
    this-> nome = nome;
}

void Pessoas::setTelefone(string telefone){
    this -> telefone = telefone;
}

void Pessoas::setIdade(int idade){
    this-> idade = idade;
}






