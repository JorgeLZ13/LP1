#include <iostream>
#include <string.h>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice mouse;

    mouse.setCodigo(12);
    mouse.setItem("Mouse Gamer");
    mouse.setQuantidade(5);
    mouse.setPreco(49.90);
    mouse.getInvoiceAmount();


    cout << "O codigo eh: " << mouse.getCodigo() << endl;
    cout << "O Nome do item eh: " << mouse.getItem() << endl;
    cout << "A quantidade eh: " << mouse.getQuantidade() << endl;
    cout << "O preco eh: " << mouse.getPreco() << endl;
    cout << "O Resultado eh: " << mouse.getInvoiceAmount() << endl;

    return 0;
}
