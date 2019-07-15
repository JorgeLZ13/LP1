#include "Invoice.h"
#include <string.h>
using namespace std;

Invoice::Invoice()
{
    //ctor
}

Invoice::Invoice(int codigo, string item, int quantidade,float preco)
{
    this -> codigo = codigo;
    t_Item = item;
    setQuantidade(quantidade);
    setPreco(preco);

}

int Invoice::getCodigo(){
    return codigo;
}

string Invoice::getItem(){
    return t_Item;
}

int Invoice::getQuantidade(){
    return quantidade;
}

float Invoice::getPreco(){
    return preco;
}

void Invoice::setCodigo(int codigo){
    this -> codigo = codigo;
}

void Invoice::setItem(string item){
    this -> t_Item = item;
}

void Invoice::setQuantidade(int quantidade){
    if(quantidade <0){
        this -> quantidade = 0;
    } else this -> quantidade = quantidade;
}

void Invoice::setPreco(float preco){
    if(preco <0){
        this -> preco = 0;
    }else this -> preco = preco;
}

double Invoice::getInvoiceAmount(){
    return quantidade * preco;
}











