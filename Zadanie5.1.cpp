#include <iostream>
#include <vector>
using namespace std;

int main() {

    int elements;
    cout << "Podaj liczbe elementow wektora:";
    cin >> elements;

    vector <int> vector1(elements);

    for (int i = 0; i < elements; i++) {
        cout << "Podaj liczbe " << i+1 << ":";
        cin >> vector1[i];
    }

    int biggest = 0;
    int biggestIndex = 0;

    for(int n = 0; n < elements; n++) {
        if(biggest < vector1[n]){
            biggest = vector1[n];
            biggestIndex = n;
        }
    }

    cout << endl << "Najwiekszy element wektora to: " << biggest << " o indeksie: " << biggestIndex;

    return 0;
}