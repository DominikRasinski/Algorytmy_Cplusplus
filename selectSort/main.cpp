#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
#define n 10
void losowanie(int tab[]);
void selectsort(int tab[]);
int smallestItem(int tab[]);

int main(){

    srand(time(NULL));
    int tab[n];
    losowanie(tab);
    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }
    cout << "Najmniejszy elemnt: " << endl;
    cout << smallestItem(tab) << endl;
    cout << "Sortowanie: " << endl;
    selectsort(tab);
    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }
}
void losowanie(int tab[]){
    for(int i = 0; i < n; i++){
        tab[i] = rand()%100+1;
    }
}
void selectsort(int tab[]){
    int temp = 0, min = 0;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(tab[j] < tab[min]){
               min = j;
            }
        }
        temp = tab[min];
        tab[min] = tab[i];
        tab[i] = temp;
    }
}
int smallestItem(int tab[]){
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] > tab[i+1]){
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i] = temp;
        }
    }
    return temp;
}
