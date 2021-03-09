#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int licz(char tab[200][21][21]){
    int sum = 0, czarnych = 0, bialych = 0;

    for(int i = 0;i<200;i++){
        czarnych = 0;
        bialych = 0;
        for(int j = 0;j<20;j++){
            for(int k = 0;k<20;k++){
                if(tab[i][j][k]=='0'){
                    bialych++;
                }else{
                    czarnych++;
                }
            }
        }
        if(czarnych>bialych){
            sum++;
        }
    }

    return sum;
}

int main(){
    ifstream plik("dane_obrazki.txt");
    char tab[200][21][21];

    for(int i = 0;i<200;i++){
        for(int j =0;j<21;j++){
            string act;
            plik >> act;
            for(int k =0;k<21;k++){
                tab[i][j][k] = act[k];
            }
        }
    }
    for(int i = 0;i<200;i++){
        for(int j =0;j<21;j++){
            for(int k =0;k<21;k++){
                cout << tab[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    int wynik = licz(tab);
    cout << wynik;
}
