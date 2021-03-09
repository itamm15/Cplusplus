#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream plik("ciagi.txt");

    string buffor;
    int najwiekszaRoznica = 0, sumOgolna = 0, roznica = 0, sum = 0;
    //start here
    while(plik>>buffor){
        roznica = 0;
        sum = 0;
        int buffSize = std::stoi(buffor);
        int tab[buffSize];
        for(int i = 0;i<buffSize;i++){
            plik >> tab[i];
            //cout << tab[i] << endl;
        }
        roznica = tab[1] - tab[0];
        for(int i = 1;i<=buffSize;i++){
            if(roznica == tab[i] - tab[i-1]){
                sum++;
            }
        }
        if(sum==buffSize-1){
            sumOgolna++;
            if(roznica>najwiekszaRoznica){
                najwiekszaRoznica = roznica;
            }
        }
    }

    cout << sumOgolna << ", a roznica to " << najwiekszaRoznica;
}

