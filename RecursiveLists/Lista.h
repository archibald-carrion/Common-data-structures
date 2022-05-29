#ifndef MI_LISTA_
#define MI_LISTA_
#include<iostream>
using namespace std;

class Lista {
    friend ostream& operator<<(ostream& salida, Lista& lista) {
        return lista.imprimir(salida);
    }
    private:
        int el_valor;
        int su_frecuencia;
        Lista* siguienteLista;
        ostream& imprimir(ostream&);
    public:
        Lista();
        Lista(const Lista&);
        Lista(int,int[]);
        ~Lista();
        int insertar(int);
        int isEmpty();
        Lista& operator = (const Lista&);
        int operator ==(const Lista&);
        int getFrecuencia(int);
        int get(int);    
};
#endif