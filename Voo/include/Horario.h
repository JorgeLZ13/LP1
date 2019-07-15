#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int, int, int);
        void setHorario(int, int, int);
        int getHora();
        int getMinuto();
        int getSegundo();
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);
        void avancarHorario();


    private:
        int hora;
        int minuto;
        int segundo;
};

#endif // HORARIO_H
