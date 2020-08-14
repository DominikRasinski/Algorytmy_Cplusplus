#include <iostream>
#include <cstdlib>

using namespace std;

int binarySearch(int list[], int n, int number);
void liczby(int list[], int n);

int main(){

    int tab[60];
    liczby(tab, 60);
    cout << binarySearch(tab, 60, 51);

}
int binarySearch(int list[], int n, int number){

    int low = 0, heigh = 0, mid = 0, guess = 0;

    heigh = n - 1;
    while(low <= heigh){
        mid = (low+heigh)/2;
        guess = list[mid];
        if(guess == number){
            return mid;
        }
        if(guess > number){
            heigh = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return 0;
}
void liczby(int list[], int n){
    int m = 0;
    for(int i = 0; i < n; i++){
        list[i] = m++;
    }

}