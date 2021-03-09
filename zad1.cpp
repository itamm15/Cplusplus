#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream plik("liczby.txt");

    int tab[1000];
    for(int i = 0;i<1000;i++){
        plik >> tab[i];
    }

    //zmienne

    int suma_ogolna, suma_temp = 0, temp = 2, act = 0;

    for(int i = 0;i<1000;i++){
        suma_temp = 0;
        act = tab[i];
        temp = 2;
        while(act>1){
            if(act%temp==0){
                act/=temp;
                suma_temp++;
                //cout << act << endl;
            }else if(suma_temp >=3 && temp%2!=0){
                suma_ogolna++;
                break;
            }else{
                temp++;
            }
        }

    }

    cout << "Suma ogolna to "<< suma_ogolna;
}
