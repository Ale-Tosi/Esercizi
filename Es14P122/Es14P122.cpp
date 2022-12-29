// Es14P122.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int opzione;

    double base, altezza, tot;

    cout << "Inserisci la base: ";
    cin >> base;
    cout << "Inserisci l'altezza: ";
    cin >> altezza;

    if (base > 0 && altezza > 0) {

        cout << "Inserisci l'opzione che vuoi scegliere:\n";
        cout << "1. Perimetro\n";
        cout << "2. Area\n";
        cout << "3. diagonale\n";
        cin >> opzione;

        switch (opzione) {

        case 1:
            tot = (base * 2) + (altezza * 2);
            cout << "Il perimetro sarà di: " << tot;
            break;

        case 2:
            tot = base * altezza;
            cout << "L'area sarà di: " << tot;
            break;

        case 3:
            tot = sqrt((altezza * altezza) + (base * base));
            cout << "La diagonale sarà di: " << tot;
            break;
        default:
            cout << "Errore";
            break;
        }
    }
    else {
        cout << "\nInserisci solo valori positivi e maggiori di zero.";
    }


}

