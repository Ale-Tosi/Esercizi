// RipassoVerifica2Sgravatissimo.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.

#include <iostream>
using namespace std;

int main() {
    char opzione;
    double tot;

    char tredicesima;
    double importo;
    int aliquota;
    double sconto;
    double ral;

    cout << "Scegli l'opzione che vuoi\n";
    cout << "A. calcolo IVA su importo\n";
    cout << "B. Calcolo sconto su importo\n";
    cout << "C. Calcolo stipendio su RAL\n";
    cin >> opzione;


    switch (opzione) {
    case 'a':
    case 'A':
    case '1':

        cout << "Inserisci l'importo: ";
        cin >> importo;
        cout << "Inserisci l'aliquota: ";
        cin >> aliquota;
        switch (aliquota) {
        case 4:
        case 10:
        case 22:
            tot = ((importo / 100) * aliquota);
            cout << "L'aliquota imposta è il " << aliquota << "%, di valore " << tot << "€" << endl;
            cout << "Il totale con IVA inclusa è: " << importo + tot << "€" << endl;
            break;

        default:
            cout << "Errore, inserisci 4, 10 o 22%\n";
            break;

        }

        break;


    case 'b':
    case 'B':
    case '2':
        cout << "Inserisci importo: ";
        cin >> importo;
        cout << "Inserisci percentuale di sconto: ";
        cin >> sconto;
        tot = ((importo / 100) * sconto);
        cout << "Lo sconto sarà di " << tot << "€, portando l'importo a " << importo - tot << "€\n";

        break;


    case 'c':
    case 'C':
    case '3':
        cout << "Inserisci la Retribuzione Annua Lorda: ";
        cin >> ral;
        cout << "\nRicevi la tredicesima?\n";
        cout << "Inserisci S per sì e N per no: ";
        cin >> tredicesima;

        switch (tredicesima) {
        case 'S':
        case 's':
            tot = ral / 13;
            cout << "Lo stipendio lordo sarà di " << tot << "€";
            break;

        case 'n':
        case 'N':
            tot = ral / 12;
            cout << "Lo stipendio lordo sarà di " << tot << "€";
            break;

        default:
            cout << "Errore, inserisci S per intendere sì, e N per intendere no.";
            break;

        }


        break;



    default:
        cout << "Errore, inserisci un valore compreso tra A e C ";
        break;


    }

}
