#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string tab[1000];

    fstream plik("sygnaly.txt");

    for(int i = 0;i<1000;i++){
        plik >> tab[i];
    }

    int najwieksza = 0, miejsce = 0;
    for(int i = 0;i<1000;i++){
        string act = tab[i];
        //sortowanie
        string tmpTab[act.size()];
        for(int i = 0;i<act.size();i++){
            tmpTab[i] = act[i];
        }
         for(int i = 0;i<act.size();i++){
            for(int j = 1;j<act.size();j++){
                if(tmpTab[j] > tmpTab[j-1]){
                    string tmp = tmpTab[j];
                    tmpTab[j] = tmpTab[j-1];
                    tmpTab[j-1] = tmp;
                }
            }
        }
        int suma = 0;

        for(int k = 1;k<=act.size();k++){
            if(tmpTab[k] != tmpTab[k-1]){
                suma++;
            }
        }
        if(suma > najwieksza){
            najwieksza = suma;
            miejsce = i;
        }
    }
    cout << najwieksza << " " << tab[miejsce];
}
