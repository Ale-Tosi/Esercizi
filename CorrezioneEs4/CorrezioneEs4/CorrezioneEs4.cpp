#include <iostream>
using namespace std;

/*
****** ESERCIZIO DEBUG /4 *******


Scrivere un programma che permetta, ricevuto in input l'anno di nascita di una persona, di stabilire a quali votazioni può partecipare come elettore attivo (votante).

Anche se la norma è cambiata, per il nostro esercizio consideriamo:
- almeno 18 anni per la Camera
- almeno 25 anni per il Senato
*/

int main() {
	const int ANNO_CORRENTE = 2022, SENATO = 25, CAMERA = 18;
	int anno_nascita, eta;

	cout << "Inserire anno di nascita" << endl;
	cin >> anno_nascita;
	eta = ANNO_CORRENTE - anno_nascita;

	if (eta >= CAMERA) { //Valuto condizione "più restrittiva"
		if (eta >= SENATO) {
			cout << "Puoi votare sia per la Camera che per il Senato";
		}
		else {
			cout << "Puoi votare solo per la Camera";
		}
	}
	else {
		cout << "Non puoi ancora votare";


		return 0;
	}
}