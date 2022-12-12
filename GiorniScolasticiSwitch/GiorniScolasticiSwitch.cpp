#include <iostream>
using namespace std;

int main() {
    int giorno;
    cout << "Inserisci numero del giorno: ";
    cin >> giorno;
    switch (giorno) {

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:

        cout << "A scuola";
        break;


    case 6:
    case 7:
        cout << "A casa";
        break;


    default:
        cout << "Giorno non valido";
        break;
    }
    return 0;
}


