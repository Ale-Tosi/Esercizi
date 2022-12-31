// Es74P127.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;


int main()
{
    const int perc = 10;
    const int soglia = 10;

    int quant;
    double prezzo, sconto, tot;
    cout << "Inserisci il prezzo unitario: ";
    cin >> prezzo;
    cout << "Inserisci la quantità della merce: ";
    cin >> quant;

    cout << "Si applica lo sconto del 10% solo sopra i 10 pezzi.\n";

    


    if (quant > soglia) {

        tot = (prezzo * quant) - (((prezzo*quant)/100)*perc);

    }
    else {
        tot = tot = prezzo * quant;
    }


    cout << "Il totale sarà di: " << tot << " euro.";
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
