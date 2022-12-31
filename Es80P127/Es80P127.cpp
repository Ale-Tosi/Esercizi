// Es80P127.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;
double totprel;

int main()
{
    int opzione, nvers, nprel, c, c2;
    double saldo, somma, totsomma;

    cout << "Inserisci il saldo iniziale: ";
    cin >> saldo;
    if (!cin) // or if(cin.fail())
    {
        cout << "Errore! inserisci solo numeri.";
        return 0;
    }

    cout << "Scegli un'opzione:\n";
    cout << "1. Versa una somma\n";
    cout << "2. Preleva una somma\n";
    cout << "Inserisci 1 per prelevare e 2 per versare somme: ";
    cin >> opzione;
    c = 0;
    c2 = 0;
    nprel = 0;
    totsomma = 0;

    switch (opzione) {
    case 1:
        cout << "Inserisci la somma di denaro da versare: ";
        cin >> somma;

        saldo = saldo + somma;

        totsomma = somma;

        cout << "Quanti versamenti vuole ancora fare? ";
        cin >> nvers;

        while (c < nvers) {

            cout << "Inserisci la somma di denaro da versare: ";
            cin >> somma;

            saldo = saldo + somma;
            totsomma = totsomma + somma;

            c = c + 1;
        }
        cout << "Il saldo dopo queste operazioni sarà di: " << saldo << endl;
        cout << "Il totale versato è di: " << totsomma << endl;
        cout << "Il numero di versamenti svolti è: " << (nvers + 1) << endl;

        if (saldo > 0) {
            cout << "Quanti prelievi vuole eseguire: ";
            cin >> nprel;

            while (c2 < nprel) {

                cout << "Inserisci la somma di denaro da prelevare: ";
                cin >> somma;



                saldo = saldo - somma;
                totprel = totprel + somma;
                c2 = c2 + 1;
            }
            cout << "Il saldo dopo queste operazioni sarà di: " << saldo << endl;
            cout << "Il totale prelevato è di: " << totprel << endl;
            cout << "Il numero di prelievi svolti è: " << (nprel) << endl;
            


        }
        else {
            cout << "\nAttenzione! Il conto è scoperto! \nNon è possibile eseguire nessun prelievo.";
        }

        break;


    case 2:
        
        if (saldo > 0) {
            cout << "Inserisci la somma di denaro da prelevare: ";
            cin >> somma;

            if (somma > saldo) {
                cout << "Conto scoperto! \nOperazione non effettuata.";
                saldo = saldo;
               



            }

            else {
                

                saldo = saldo - somma;
                totprel = somma;

                cout << "Quanti prelievi vuole ancora fare? ";
                cin >> nprel;

                while (c < nprel) {

                    cout << "Inserisci la somma di denaro da prelevare: ";
                    cin >> somma;
                    if (somma > saldo) {
                        cout << "Conto scoperto! \nUltima operazione non effettuata.";
                        saldo = saldo;
                    }
                    else {
                        saldo = saldo - somma;
                        totprel = totprel + somma;
                    }
                    c = c + 1;

                }
                cout << "\nIl saldo dopo queste operazioni sarà di: " << saldo << endl;
                cout << "Il totale prelevato è di: " << totprel << endl;
                cout << "Il numero di prelievi svolti è: " << (nprel + 1) << endl;


                cout << "\nVuole eseguire dei versamenti su questo conto?\n In che quantità? ";
                cin >> nvers;

                while (c2 < nvers) {

                    cout << "Inserisci la somma di denaro da versare: ";
                    cin >> somma;

                    saldo = saldo + somma;
                    totsomma = totsomma + somma;

                    c2 = c2 + 1;
                }
                cout << "Il saldo dopo queste operazioni sarà di: " << saldo << endl;
                cout << "Il totale versato è di: " << totsomma << endl;
                cout << "Il numero di versamenti svolti è: " << (nvers + 1) << endl;

                

            }
            


        }
        else {
            cout << "\nAttenzione! Il conto è scoperto! \nNon è possibile eseguire nessun prelievo.";
        }


        break;

    default:
        cout << "Inserisci un valore valido.";
        break;
    }
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
