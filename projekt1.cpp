#include <iostream>

using namespace std;

bool is_prime(int n){
	if(n<2)
		return false;
	if(n==2)
		return true;
	for(int i=3;i*i<=n;i=i+2){
		if(n%i==0)
			return false;
	}
	return true;
}

int main() {
    int a, b,n;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. is_prime" << endl;
        cin >> wyjscie;
	if(wyjscie==1){
		if(isprime(n)){
			cout<<"Tak"<<endl;
		}
		else{
			cout<<"Nie"<<endl;
		}
	}
    } while(wyjscie != 0);
    return 0;
}
