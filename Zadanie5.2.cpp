#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows = 1;
    int columns = 1;

    while(columns%2 != 0){
        cout << "Podaj ilosc kolumn tablicy:";
        cin >> columns;

        if(columns%2 == 0){
            cout << "Podaj ilosc wierszy tablicy:";
            cin >> rows;
        }
        else{
            cout << "Ilosc kolumn musi byc parzysta!" << endl;
        }
    }

    int array[rows][columns];

    cout << "Uwaga numer indeksu oznacza wiersz.kolumna!" << endl;

    for(int i1 = 0; i1 < rows; i1++){
        for(int i2 = 0; i2 < columns; i2++){
            cout << "Wartosc o indeksie " << i1+1 << "." << i2+1 << ": ";
            cin  >> array[i1][i2];
        }
    }

    cout << "Tablica wejsciowa" << endl << "=========================" << endl;

    for(int i1 = 0; i1 < rows; i1++){
        for(int i2 = 0; i2 < columns; i2++){
            cout << array[i1][i2] << "  ";
        }
        cout << endl;
    }

    cout << "Tablica wyjsciowa" << endl << "=========================" << endl;

    for(int i1 = 0; i1 < rows; i1++){
        for(int i2 = columns-1; i2 >= 0; i2--){
            cout << array[i1][i2] << "  ";
        }
        cout << endl;
    }

    return 0;
}