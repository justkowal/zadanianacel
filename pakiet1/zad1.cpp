#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
    int n;
    float pierwsza_najw=0,druga_najw=0;
    cout << "Podaj dlugosc tablicy:" << endl;
    cin>>n;

    float tab[n];

    srand(time(NULL));
 
    for (int i = 0; i < n; i++) {
        tab[i] = rand() / static_cast<float>(RAND_MAX);
    }
    
    cout << "[";

    for (int i = 0; i < n; i++) {
        cout << tab[i] << ", ";
    }

    cout << "]" << endl;

    for (int i = 0; i < n; i++) {
        if(tab[i] > pierwsza_najw) {
            pierwsza_najw = tab[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if(tab[i] > druga_najw && tab[i] < pierwsza_najw){
            druga_najw = tab[i];
        }
    }

    cout << "druga najwieksza: " << druga_najw << endl;

    return 0;
}