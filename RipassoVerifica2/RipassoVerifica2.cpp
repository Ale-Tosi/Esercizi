

#include <iostream>
using namespace std;

int main() {
    int opzione;
    double tot;
    int tredicesima;
    double importo;
    int aliquota;
    double sconto;
    double ral;

    cout << "Scegli l'opzione che vuoi\n";
    cout << "1. calcolo IVA su importo\n";
    cout << "2. Calcolo sconto su importo\n";
    cout << "3. Calcolo stipendio su RAL\n";
    cin >> opzione;

    switch (opzione) {

    case 1:
        cout << "Inserisci l'importo: ";
        cin >> importo;
        cout << "Inserisci l'aliquota: ";
        cin >> aliquota;
        tot = ((importo / 100) * aliquota);
        cout << "l'IVA sull'importo è di: " << tot << "€\n";
        break;

    case 2:
        cout << "Inserisci importo: ";
        cin >> importo;
        cout << "Inserisci percentuale di sconto: ";
        cin >> sconto;
        tot = ((importo / 100) * sconto);
        cout << "Lo sconto sarà di " << tot << "€, portando l'importo a " << importo - tot << "€\n";

        break;

    case 3:
        cout << "Inserisci la Retribuzione Annua Lorda: ";
        cin >> ral;
        cout << "Ricevi la tredicesima?\n";
        cout << "Inserisci 1 per sì e 2 per no ";
        cin >> tredicesima;

        switch (tredicesima) {
        case 1:
            tot = ral / 13;
            cout << "Lo stipendio lordo sarà di " << tot << "€";
            break;

        case 2:
            tot = ral / 12;
            cout << "Lo stipendio lordo sarà di " << tot << "€";
            break;

        default:
            cout << "Errore, inserisci 1 per intendere sì, e 2 per intendere no.";
            break;

        }


        break;



    default:
        cout << "Errore, inserisci un valore compreso tra 1 e 3.";
        break;


    }
}
