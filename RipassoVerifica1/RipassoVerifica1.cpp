// RipassoVerifica.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main() {

	double a;
	double b;
	double c;

	cout << "Inserisci il primo lato: ";
	cin >> a;
	cout << "Inserisci il secondo lato: ";
	cin >> b;
	cout << "Inserisci il terzo lato: ";
	cin >> c;


	if (a > 0 && b > 0 && c > 0) {

		if (a == b && b == c && c == a) {
			cout << "triangolo equilatero";
		}

		else if (a == b || b == c || a == c) {
			cout << "Isoscele";
		}

		else {
			cout << "Scaleno";
		}

	}

	else {
		cout << "non è un triangolo";
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
