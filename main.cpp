#include <iostream>
#include "pytanie.h"

using namespace std;

int main()
{
    Pytanie p[5];   // 0-4
    int suma=0;

    for (int i=0; i<=4; i++)
    {
        p[i].nr_pytania=i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma+=p[i].punkt;
    }

    cout << "Koniec Quizu! Suma punktow: " << suma;

    return 0;
}
