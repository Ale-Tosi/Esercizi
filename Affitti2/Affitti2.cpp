#include <iostream>
using namespace std;

int main() {
    int giorni;
    double costo;
    double costokm;
    int opzione;
    double km;
    double costotot;

    // parametri dei giorni della camera
    const int giorni1 = 1;
    const int giorni2 = 7;
    const int giorni3 = 30;
    //totali per giorno
    const double valgiorni1 = 75;
    const double valgiorni2 = 40;
    const double valgiorni3 = 30;
    // parametri dei chilometri da fare
    const int km1 = 25;
    const int km2 = 70;
    //costo al chilometro
    const double valkm = 0.23;
    const double valkm1 = 0.21;
    const double valkm2 = 0.19;


    // scegliamo che opzione usare
    cout << "Siamo un servizio di affittasi camere e auto.\n 1. Affitta una camera "
        "\n 2. Affitta un'auto\n 3. Entrambe ";
    cin >> opzione;

    if (opzione == 1) {
        // opzione uno, calcoliamo solo la casa
        cout << "Per quanti giorni vuoi affittare la camera? ";
        cin >> giorni;



        if (giorni >= giorni3) {
            costo = giorni * valgiorni3;
        }
        else if (giorni<giorni3 && giorni>giorni2) {
            costo = giorni * valgiorni2;
        }
        else if (giorni >= giorni1 && giorni <= giorni2) {
            costo = giorni * valgiorni1;
        }
        else {
            cout << "Errore, numero negativo\n";
            costo = 0;
        }
        cout << "Il totale per l'affitto della camera è: " << costo << "€ \n";

    }
    else if (opzione == 2) {
        // opzione due, calcoliamo solo la macchina con i chilometri in input
        cout << "Quanti chilometri vorresti percorrere con l'auto? ";
        cin >> km;

        // sotto i 25km 0.23€, da 26 a 70 0.21, da 71km 0.19

        if (km > km2) {
            costokm = km * valkm2;

        }
        else if (km > km1 && km <= km2) {
            costokm = km * valkm1;

        }
        else if (km <= km1 && km > 0) {
            costokm = km * valkm;



        }
        else {
            cout << "Errore: inserisci un valore maggiore di zero\n";
            costokm = 0;
        }

        cout << "Il costo del noleggio della macchina è: " << costokm << "€\n";
    }

    else if (opzione == 3) {

        // opzione uno, calcoliamo solo la casa
        cout << "Per quanti giorni vuoi affittare la camera? ";
        cin >> giorni;



        if (giorni >= giorni3) {
            costo = giorni * valgiorni3;
        }
        else if (giorni<giorni3 && giorni>giorni2) {
            costo = giorni * valgiorni2;
        }
        else if (giorni >= giorni1 && giorni <= giorni2) {
            costo = giorni * valgiorni1;
        }
        else {
            cout << "Errore, numero negativo\n";
            costo = 0;
        }

        // opzione due, calcoliamo solo la macchina con i chilometri in input
        cout << "Quanti chilometri vorresti percorrere con l'auto? ";
        cin >> km;

        // sotto i 25km 0.23€, da 26 a 70 0.21, da 71km 0.19

        if (km > km2) {
            costokm = km * valkm2;

        }
        else if (km > km1 && km <= km2) {
            costokm = km * valkm1;

        }
        else if (km <= km1 && km > 0) {
            costokm = km * valkm;



        }
        else {
            cout << "errore: inserisci un valore maggiore di zero\n";
            costokm = 0;
        }

        cout << "Il totale per l'affitto della camera è: " << costo << "€ \n";
        cout << "Il costo del noleggio della macchina è: " << costokm << "€\n ";

        costotot = costo + costokm;

        cout << "Il costo totale degli affitti è: " << costotot << "€ \n";






    }
}



