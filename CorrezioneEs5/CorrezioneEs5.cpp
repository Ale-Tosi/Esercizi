#include <iostream>
using namespace std;

/*
****** ESERCIZIO DEBUG /5 *******


Scrivere un programma che permetta all'utente di scegliere l'operazione da eseguire attraverso un menu. Per esempio
1) Affittare una camera
2) Affittare una macchina

Per l'affitto della camera si applicano queste tariffe
a) da 1 a 7 giorni      75 euro al giorno
b) da 8 a 29 giorni     40 euro al giorno
c) da 30 in poi         30 euro al giorno

Per l'affitto delle macchine si applicano queste tariffe
a) fino a 25km          0,23 euro al km
b) da 26 a 70km         0,21 euro al km
c) da 71km in poi       0,19 euro al km
*/

int main() {
    
    int opzione;
    int giorni;
    int km;
    double tariffa;

    cout << "Benvenuto/a!" << endl;
    cout << "1) Affittare una camera" << endl;
    cout << "2) Affittare una macchine" << endl;

    cout << "Scegliere un'opzione: ";
    cin >> opzione;

    if (opzione == 1) {
        cout << "AFFITTO CAMERE AL MARE" << endl;


        cout << "Per quanti giorni? ";
        cin >> giorni;

        if (giorni >= 1 && giorni <= 7) {
            tariffa = 75;
        }
        else if (giorni >= 8 && giorni <= 29) {
            tariffa = 40;
        }
        else {
            tariffa = 30;
        }
        cout << "Il prezzo per la camera è " << tariffa * giorni;
    }

    else if (opzione == 2) {
        cout << "AFFITTO MACCHINE" << endl;
        cout << "Per quanti km? ";
        cin >> km;

        if (km >= 1 && km <= 25) {
            tariffa = 0.23;
        }
        else if (km >= 26 && km <= 70) {
            tariffa = 0.21;
        }
        else {
            tariffa = 0.19;
        }
        cout << "Il prezzo la macchina è " << tariffa * km;
    }

    else{
        cout << "Errore";
    }


    return 0;
}
