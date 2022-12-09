// Nello.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
using namespace std;

int main()
{
    string equazione;
    
    
    double delta;

    //equazione intera con a, b, c e = 0
    cout << "Inserisci un equazione intera\n";
    cin >> equazione;

    //termine a

    char firstCharacter = equazione[0];
    char secondCharacter = equazione[1];
    auto a = string(1, firstCharacter) + secondCharacter;
    cout << a << endl;

    //termine b

    char thirdCharacter = equazione[5];
    char fourthCharacter = equazione[6];
    auto b = string(1, thirdCharacter) + fourthCharacter;
    cout << (b) << endl;
    
    
    

    //termine c

    char fifthCharacter = equazione[8];
    char sixthCharacter = equazione[9];
    auto c = string(1, fifthCharacter) + sixthCharacter;

    cout << c << endl;




   
    
    



    return 0;
}
