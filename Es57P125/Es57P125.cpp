// Es57P125.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Quante righe? ";
	cin >> n;

	if (n <= 7 && n > 0) {
		
		const int matrice[7][7] = { { 1, 0, 0, 0, 0, 0, 0 }, {1, 1, 0, 0, 0, 0, 0 }, {1, 2, 1, 0, 0, 0, 0 }, {1, 3, 3, 1, 0, 0, 0},{1, 4, 6, 4, 1, 0, 0}, {1, 5, 10, 10, 5, 1, 0}, {1, 6, 15, 20, 15, 6, 1 } };

		for (int riga = 0; riga < n; riga++)
		{
			for (int colonna = 0; colonna < 7; colonna++)
			{
				/*cout << matrice[riga][colonna]<<" ";*/
				if (colonna <= riga)
				{
					printf("%i ", matrice[riga][colonna]);
				}



			}
			cout << "\n";
		}

	}
	else {
		cout << "Inserisci un numero maggiore di zero e minore o uguale a sette.";
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
