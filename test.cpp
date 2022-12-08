// Test1.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//
#include <iostream>
using namespace std;

int main() {
    int giorni;
    int grandezza;
    double costo;
    double costokm;
    int opzione;
    double km;
    double costotot;
    // una casa da 50 a 100mq costerà 25 al giorno, una da 101 a 150 ne costerà 50
    // e una da più di 150 ne costerà 75
    const int casa1 = 25;
    const int casa2 = 50;
    const int casa3 = 75;
    // moltiplicatori dei chilometri da fare con l'auto affittata
    const double km1 = 0.25;
    const double km2 = 0.23;
    const double km3 = 0.20;
    // parametri dei chilometri da fare
    const int valkm = 50;
    const int valkm1 = 100;
    const int valkm2 = 150;

    // scegliamo che opzione usare
    cout << "Siamo un servizio di affittasi case e auto.\n 1. Affitta una casa "
        "\n 2. Affitta un'auto\n 3. Entrambe ";
    cin >> opzione;

    if (opzione == 1) {
        // opzione uno, calcoliamo solo la casa
        cout << "Per quanti giorni vuoi affittare la casa? ";
        cin >> giorni;

        cout << "Offriamo tre metrature: \n 1. Da 50 a 100 mq, \n 2. Da 101 a 150 "
            "mq, \n 3. Da più di 150 mq. \n Inserisci il numero della "
            "metratura: ";
        cin >> grandezza;

        if (grandezza == 1) {

            costo = giorni * casa1;
            cout << "Il costo di affitto è: " << costo << "€";

        }
        else if (grandezza == 2) {
            costo = giorni * casa2;
            cout << "Il costo di affitto è: " << costo << "€";
        }

        else if (grandezza == 3) {
            costo = giorni * casa3;
            cout << "Il costo di affitto è: " << costo << "€";
        }

    }
    else if (opzione == 2) {
        // opzione due, calcoliamo solo la macchina con i chilometri in input
        cout << "Quanti chilometri vorresti percorrere con l'auto? ";
        cin >> km;

        // cout<<"1. Da 50 a 100km \n 2. Da 101 a 150km\n 3. Più di 150km"

        if (km > valkm2) {
            costokm = km * km3;
            cout << "Il totale da pagare è: " << costokm
                << "€ con un costo al chilometro di: " << km3;
        }
        else if (km > valkm1 && km <= valkm2) {
            costokm = km * km2;
            cout << "Il totale da pagare è: " << costokm
                << "€ con un costo al chilometro di: " << km2;

        }
        else if (km >= valkm && km <= valkm2) {
            costokm = km * km1;
            cout << "Il totale da pagare è: " << costokm
                << "€ con un costo al chilometro di: " << km1;

        }
        else {
            cout << "errore: inserisci un valore maggiore o uguale di 50";
        }
    }

    else if (opzione == 3) {
        // uniamo i due metodi, calcoliamo l'affitto della casa e lo sommiamo a
        // quello della macchina
        cout << "Per quanti giorni vuoi affittare la casa? ";
        cin >> giorni;

        cout << "Offriamo tre metrature: \n 1. Da 50 a 100 mq, \n 2. Da 101 a 150 "
            "mq, \n 3. Da più di 150 mq. \n Inserisci il numero della "
            "metratura. ";
        cin >> grandezza;

        if (grandezza == 1) {

            costo = giorni * casa1;

        }
        else if (grandezza == 2) {
            costo = giorni * casa2;

        }

        else if (grandezza == 3) {
            costo = giorni * casa3;
        }

        cout << "\nQuanti chilometri vorresti percorre con l'auto? ";
        cin >> km;

        cout << "Il costo di affitto della casa è: " << costo << "€\n";

        // cout<<"1. Da 50 a 100km \n 2. Da 101 a 150km\n 3. Più di 150km"

        if (km > valkm2) {
            costokm = km * km3;
            cout << "Il totale da pagare per l'auto è: " << costokm
                << "€, con un costo al chilometro di: " << km3 << "\n";
        }
        else if (km > valkm1 && km <= valkm2) {
            costokm = km * km2;
            cout << "Il totale da pagare per l'auto è: " << costokm
                << "€, con un costo al chilometro di: " << km2 << "\n";

        }
        else if (km >= valkm && km <= valkm2) {
            costokm = km * km1;
            cout << "Il totale da pagare per l'auto è: " << costokm
                << "€, con un costo al chilometro di: " << km1 << "\n";

        }
        else {
            cout << "errore: inserisci un valore maggiore o uguale di 50"
                << "\n";
        }

        costotot = costo + costokm;
        cout << "Il totale degli affitti da pagare sarà: " << costotot;
    }
    else {
        cout << "Inserisci un numero valido tra uno e tre per utilizzare il menù";
        return 0;
    }
}
