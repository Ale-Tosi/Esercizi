#include <iostream>
using namespace std;

int main() {

    const double S_MUFFA = 9.6;
    const double N_MUFFA = 8;

    double soffitto;
    double pareti;
    double tot;
    char opzione;
    char muffa;
    double totcolore1;
    double totcolore2;

    string colore1;
    string colore2;


    cout << "Los Angelos SRL, servizi di tinteggiature\n";
    cout << "a. Tinteggiatura di soffitto e pareti dello stesso colore\n";
    cout << "b. Tinteggiatura di due colori diversi\n";
    cout << "Inserisci A o B per selezionare il servizio corretto: ";
    cin >> opzione;
    switch (opzione) {

    case 'a':
    case 'A':
    case '1':
        cout << "\nRICORDA! Inserisci valori decimali con il punto\n";

        cout << "Inserisci la metratura del soffitto: ";
        cin >> soffitto;
        cout << "Inserisci la metratura delle pareti: ";
        cin >> pareti;
        if (pareti >= 0 && soffitto >= 0) {

            cout << "Le pareti presentano della muffa?\n";
            cout << "Inserisci S per intendere sì, e N per no. ";
            cin >> muffa;

            switch (muffa) {
            case 's':
            case 'S':
            case '1':
                tot = (soffitto + pareti) / S_MUFFA;

                cout << "Per tinteggiare la metratura inserita serviranno " << tot << " litri di vernice.";
                break;

            case 'n':
            case 'N':
            case '2':
                tot = (soffitto + pareti) / N_MUFFA;

                cout << "Per tinteggiare la metratura inserita serviranno " << tot << " litri di vernice.";
                break;


            default:
                cout << "Errore, inserisci S o N";
                break;
            }
        }




        break;

    case 'b':
    case 'B':
    case '2':
        cout << "\nRICORDA! Inserisci valori decimali con il punto\n";

        cout << "\nInserisci la metratura del soffitto: ";
        cin >> soffitto;

        cout << "Inserisci il colore del soffitto: ";
        cin >> colore1;



        cout << "Inserisci la metratura delle pareti: ";
        cin >> pareti;

        cout << "Inserisci il colore delle pareti: ";
        cin >> colore2;

        if (pareti >= 0 && soffitto >= 0) {

            cout << "Le pareti presentano della muffa?\n";
            cout << "Inserisci S per intendere sì, e N per no. ";
            cin >> muffa;

            switch (muffa) {
            case 's':
            case 'S':
            case '1':
                totcolore1 = soffitto / S_MUFFA;
                totcolore2 = pareti / S_MUFFA;
                tot = (soffitto + pareti) / S_MUFFA;

                cout << "Per tinteggiare la metratura inserita serviranno " << tot << " litri di vernice, di cui:\n";
                cout << totcolore1 << " di " << colore1 << "\n";
                cout << totcolore2 << " di " << colore2 << "\n";
                break;

            case 'n':
            case 'N':
            case '2':
                tot = (soffitto + pareti) / N_MUFFA;
                totcolore1 = soffitto / N_MUFFA;
                totcolore2 = pareti / N_MUFFA;
                tot = (soffitto + pareti) / N_MUFFA;

                cout << "Per tinteggiare la metratura inserita serviranno " << tot << " litri di vernice, di cui:\n";
                cout << totcolore1 << " di " << colore1 << "\n";
                cout << totcolore2 << " di " << colore2 << "\n";
                break;
            }
        }
        else {
            cout << "Inserisci solo valori positivi";
        }
        break;

    default:
        cout << "Errore, inserisci A o B";
        break;


    }
}
