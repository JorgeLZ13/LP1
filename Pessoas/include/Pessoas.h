#ifndef PESSOAS_H
#define PESSOAS_H
using namespace std;

class Pessoas
{
    public:
        Pessoas();
        Pessoas(string, string, int);

        string getNome();
        string getTelefone();
        int getIdade();
        void setNome(string);
        void setTelefone(string);
        void setIdade(int);

    private:
        string nome;
        int idade;
        string telefone;
};

#endif // PESSOAS_H
