#include <iostream>
using namespace std;

int main() {

    const int centro = 1500;
    const int zona1 = 1200;
    const int zona2 = 1400;
    const int zona3 = 1300;
    const int periferia = 1000;
    int zona;
    int provvigione;
    double grandezza;
    double tot;



    cout << "Inserisci le dimensioni dell'appartamento che preferisci: ";
    cin >> grandezza;
    cout << "Inserisci la percentuale di provvigione: ";
    cin >> provvigione;

    if (grandezza > 0 && provvigione >= 0) {

        if (grandezza > 0) {
            cout << "Inserisci la zona che preferisci: \n";
            cout << "1. Centro\n";
            cout << "2. Zona 1\n";
            cout << "3 Zona 2\n";
            cout << "4 Zona 3\n";
            cout << "5 Periferia: ";
            cin >> zona;


            switch (zona) {
            case 1:
                tot = (grandezza * centro) + (((grandezza * centro) * provvigione) / 100);
                provvigione = tot - (grandezza * centro);
                //cout<<"Il totale sarà di: "<<tot<<"€, con una provvigione inclusa di "<<provvigione<<"€\n";

                break;

            case 2:
                tot = (grandezza * zona1) + (((grandezza * zona1) * provvigione) / 100);
                provvigione = tot - (grandezza * zona1);

                break;

            case 3:
                tot = (grandezza * zona2) + (((grandezza * zona2) * provvigione) / 100);
                provvigione = tot - (grandezza * zona2);

                break;

            case 4:
                tot = (grandezza * zona3) + (((grandezza * zona3) * provvigione) / 100);
                provvigione = tot - (grandezza * zona3);

                break;

            case 5:
                tot = (grandezza * periferia) + (((grandezza * periferia) * provvigione) / 100);
                provvigione = tot - (grandezza * periferia);

                break;

            default:
                cout << "Errore: inserisci un numero compreso tra 1 e 5.";
                break;
            }
            cout << "Il totale sarà di: " << tot << "€, con una provvigione (spettante all'agenzia) inclusa di " << provvigione << "€\n";
        }

        else {
            cout << "Inserisci un valore maggiore di zero";
        }
    }
    else {
        cout << "Inserisci un valore di grandezza maggiore di zero, e una provvigione di valore maggiore o uguale a zero";
    }
}