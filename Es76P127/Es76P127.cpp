// Es76P127.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;



int main()
{
    const int sc1 = 10;
    const int sc2 = 20;
    const int sc3 = 30;
    const int sc4 = 35;
    const int sc5 = 40;

    double prezzo, tot;
    int quant;

    cout << "Inserisci il costo unitario: ";
    cin >> prezzo;

    cout << "Inserisci quantità: ";
    cin >> quant;

    if (quant > 0) {

        switch (quant) {
        case 1:
        case 2:
            tot = (prezzo * quant) - (((prezzo * quant) / 100) * sc1);
        break;

        case 3:
        case 4:
            tot = (prezzo * quant) - (((prezzo * quant) / 100) * sc2);
        break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            tot = (prezzo * quant) - (((prezzo * quant) / 100) * sc3);

        break;

        case 10:
            tot = (prezzo * quant) - (((prezzo * quant) / 100) * sc4);
        break;

        default:
            tot = (prezzo * quant) - (((prezzo * quant) / 100) * sc5);

        break;

        }
        cout << "Il totale da pagare sarà di " << tot<<" €";


    }
    else {
        cout << "Errore. Inserisci un valore maggiore di zero.";
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
