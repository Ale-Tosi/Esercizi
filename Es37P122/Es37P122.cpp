// Es37P122.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int cmax, cmin;



int main()
{
    int n, c;

    double numero;
    double max, min;


    cout << "Inserisci il numero dei numeri da controllare: ";
    cin >> n;

    c = 0;

    while (c < n) {

        cout << "Inserisci il numero.";
        cin >> numero;

        if (c == 0) {
            cmax = 1;
            max = numero;
            min = numero;

        }

        if (numero > max) {
            max = numero;
            cmax = c + 1;
        }

        if (numero < min) {
            min = numero;
            cmin = c + 1 ;
        }



        c = c + 1;


    }

    cout << "Il numero massimo sarà: " << max << ", con posizione " << cmax << endl;
    cout << "Il numero minimo sarà: " << min << ", con posizione " << cmin << endl;

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
