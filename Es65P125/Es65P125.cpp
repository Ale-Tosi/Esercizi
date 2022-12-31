// Es65P125.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    int rem;

    cout << "Inserisci un numero: ";
    cin >> num;

    if (num > 0) {
        int index = 1;
        while (index <= num)
            index *= 2;
        index /= 2;

        do {
            if (num >= index) {
                cout << '1';
                num -= index;
            }
            else
                cout << '0';
            index /= 2;
        } while (index > 0);
        cout << std::endl;
    }
    else
        cout << '0';

    cout << endl;
    return 0;
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
