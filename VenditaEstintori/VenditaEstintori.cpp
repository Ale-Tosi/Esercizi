// VenditaEstintori.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;
int main(){

    const double POLVERE = 5;
    const double CO2 = 7.30;
    const int ANNUALE = 5;
    int quantit�;
    double peso;
    double costo;
    double controllo;
    char opzione;
    int tipo;



    cout << "Los Angelos Estintori SRL\n";
    cout << "a. Servizio di vendita estintori\n";
    cout << "b. Servizio di controllo annuale estintori\n";
    cout << "Inserisca a o b per scegliere l'opzione corretta: ";
    cin >> opzione;

    switch (opzione) {

        case 'a':
        case 'A':
        case '1':



            cout << "Inserisca il numero di estintori richiesto: ";
            cin >> quantit�;

            cout << "Inserisca il peso richiesto di ogni estintore";
            cin >> peso;




            cout << "Che tipo di estintori le interessano?\n";
            cout << "1. A polvere: 5�/kg\n";
            cout << "2. A CO2, 7,30/kg\n";
            cout << "Inserisca 1 o 2 per scegliere il tipo corretto di estintore: ";
            cin >> tipo;
            switch (tipo) {

                case 1:
                    costo = ((quantit� * peso) * POLVERE);
                    
                break;

                case 2: 
                    costo = ((quantit� * peso) * CO2);

                break;

                default:
                    cout << "Errore, inserisci 1 o 2.";
                    costo = 0;
                break;

            }
            if (costo != 0) {
                cout << "L'importo da pagare sar� di: " << costo<<"�";
            }
            
        break;

        case 'b':
        case 'B':
        case '2':
            cout << "Per quanti estintori serve il servizio di controllo annuale? ";
            cin >> quantit�;

            controllo = (quantit� * ANNUALE);
            

            if ((quantit� % 5) == 0) {
                controllo = controllo * 0.85;
                cout << "L'importo da pagare sar� di: " << controllo << "�, perch� � stato applicato uno sconto del 15% sul totale.\n";
            }
            else {
                cout << "L'importo da pagare sar� di: " << controllo << "�.\n";
            }



        break;
    
    
    
    
    }


    return 0;
}

