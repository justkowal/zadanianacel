#include <iostream>
#include <cmath>

using namespace std;

int pierwszeNZnakow(int liczba, int N){  
    liczba = abs(liczba);

    int liczbacyfr = (int)floor(log10(liczba) + 1);  
    
    if (liczbacyfr >= N)  
        return (int)trunc((liczba / pow(10, liczbacyfr - N)));  
    else  
        return liczba;
}

bool czy_pierwsza(int n){
	if(n<2)
		return false;
		
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

bool czy_pierwsza_skracalna(int n){
    int liczbacyfr = (int)floor(log10(n + 1));
    if(liczbacyfr = 0)
        return false;
    for (int i = 1; i <= liczbacyfr+1; i++) {
        if(!czy_pierwsza(pierwszeNZnakow(n,i)))
            return false;
    }
    return true;
}

int main(){
    int a,b,ilosc = 0;
    cout << "Podaj zakres liczb: ";
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        if(czy_pierwsza_skracalna(i)){
            ilosc++;
        }
    }
    cout << "Zbior zawiera "<<ilosc<< " liczb pierwszych skracalnych" << endl;
}