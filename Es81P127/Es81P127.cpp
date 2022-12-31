// Es81P127.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main()
{
    double peso, tot, ok, sotto, sopra, sommaok, sommafuori;
    ok = 0;
    sotto = 0;
    sopra = 0;
    sommaok = 0;
    sommafuori = 0;



    cout << "Inserisci il peso del primo pacco: ";
    cin >> peso;




    while (peso != 0) {

        


        if (peso == 1) {
            ok = ok + 1;
            sommaok = sommaok + peso;
        }
        else if (peso > 1) {
            sopra = sopra + 1;
            sommafuori = sommafuori + peso;
        }
        else {
            sotto = sotto + 1;
            sommafuori = sommafuori + peso;
        }

        cout << "Inserisci il peso del  pacco: ";
        cin >> peso;
    }

    cout << "Il numero dei pacchi corretti sono: " << ok << ", con un peso di: " << sommaok << endl;
    cout << "Il numero dei pacchi sotto sono: " << sotto << endl;;
    cout << "Il numero dei pacchi sopra sono:" << sopra << endl;

    cout << "\n I pacchi fuori pesano:" << sommafuori;
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
