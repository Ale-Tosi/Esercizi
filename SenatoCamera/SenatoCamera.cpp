#include <iostream>
using namespace std;

int main() {
    int annascita;
    const int min_camera = 18;
    const int min_senato = 25;
    const int anno_corrente = 2022;
    int anni;

    cout << "Inserisci l'anno di nascita";
    cin >> annascita;

    anni = (anno_corrente - annascita);


    if (anni >= (min_senato)) {
        cout << "Può votare per la Camera e per il Senato";
    }
    else if (anni >= min_camera) {
        cout << "Può votare per la Camera, ma non per il Senato";
    }
    else if (anni < min_camera) {
        cout << "Non può votare per nessuno delle due";
    }




}