#include <iostream>
using namespace std;

/*
****** ESERCIZIO DEBUG /3 *******


Scrivere un programma che riceva in input l'anno di corso (intero) di uno studente e stabilisca se si trova:
- nel primo biennio
- nel secondo biennio
- all'ultimo anno
della scuola superiore
*/

int main() {
    int anno_corso;

    cout << "Inserire anno di corso: ";
    cin >> anno_corso;

    if (anno_corso == 1 || anno_corso == 2) {
        cout << "lo studente è al " << anno_corso << " anno nel primo biennio";
    }
    if (anno_corso == 3 || anno_corso == 4) {
        cout << "lo studente è al " << anno_corso << " anno nel secondo biennio";
    }
    else if(anno_corso==5) {
        cout << "Lo studente è dell'ultimo anno";
    }
    

    return 0;
}
