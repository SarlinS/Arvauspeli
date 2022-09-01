/* Muuta toteuttamaasi funktiota siten, että funktiolle annetaan parametriksi korkein etsittävä luku,
josta funktio arpoo satunnaisluvun.
Esimerkiksi, jos tämä luku on 40, niin funktio arpoo luvun väliltä 1-40.
Laske myös montako arvausta pelaajalla meni ja palauta tämä tieto funktiosta paluuarvona.
Pelin loputtua tulosta arvausten määrä ruudulle main funktiosta paluuarvoa hyödyntäen.
Käytä funktion nimenä ja prototyyppinä: int game(int maxnum);
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnum;
    cout << "Pelataan peli\x84! Anna yl\x84raja-arvo: " << endl;
    cin >> maxnum;
    int laskuri = game(maxnum);
    cout << "Arvasit " << laskuri << " kertaa." << endl;
    return 0;
}

int game(int maxnum){
    int arvaus;
    int laskuri = 0;

    srand(time(0));

    int satuluku = rand() % maxnum + 1;
    cout << "Anna numero 1 ja " << maxnum << " v\x84lilt\x84:" << endl;
    cin >> arvaus;

    while(arvaus  != satuluku){
        laskuri++;

        if (arvaus < satuluku){
            cout << "Luku on suurempi!" << endl;
            cin >> arvaus;
        }

        if (arvaus > satuluku){
            cout << "Luku on pienempi!" << endl;
            cin >> arvaus;
        }
    }

    cout << "Oikea vastaus!" << endl;
    laskuri++;

    return laskuri;
}
