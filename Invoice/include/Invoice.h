#ifndef INVOICE_H
#define INVOICE_H
#include <string.h>
#include <iostream>

using namespace std;


class Invoice
{
    public:
        Invoice();
        Invoice(int, string, int, float);
        int getCodigo();
        string getItem();
        int getQuantidade();
        float getPreco();
        void setCodigo(int);
        void setItem(string);
        void setQuantidade(int);
        void setPreco(float);
        double getInvoiceAmount();


    private:
        int codigo;
        string t_Item;
        int quantidade;
        float preco;
};

#endif // INVOICE_H
