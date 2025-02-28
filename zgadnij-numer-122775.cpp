#include <iostream>
#include <cstdlib>
#include <ctime>    

using namespace std;

int main() {
    string imie = "Mateusz Krawczyk";
    int numer_albumu = 122775;
    
    cout << "Projekt zaliczeniowy: Zgadnij numer\n";
    cout << "Autor: " << imie << ", Numer albumu: " << numer_albumu << "\n\n";

    char ponowna_gra;

    do {
        srand(time(0));  
        int wylosowana_liczba = rand() % 10 + 1;  
        int proba;
        cout << "Zgadnij liczbę od 1 do 10: ";

        while (true) {
            cin >> proba;
            if (proba == wylosowana_liczba) {
                cout << "Brawo! Zgadłeś liczbę " << wylosowana_liczba << "!\n";
                break;
            } else if (proba < wylosowana_liczba) {
                cout << "Za malo! Sprobuj ponownie: ";
            } else {
                cout << "Za duzo! Sprobuj ponownie: ";
            }
        }

        cout << "Chcesz zagrać ponownie? (t/n): ";
        cin >> ponowna_gra;
    } while (ponowna_gra == 't' || ponowna_gra == 'T');

    cout << "Dziekuje za gre!\n";
    return 0;
}