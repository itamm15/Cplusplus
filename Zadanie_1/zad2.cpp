#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream plik("ciagi.txt");

    string buffor;
    int najwieksza = 0, tmp = 0, tmpCount = 0, act = 0, roznica = 0, sum = 0;

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
            //it exists
            for(int k = 0;k<=buffSize;k++){
                tmp = tab[k];
                for(int j = 1;j<=tmp;j++){
                    if(j*j*j==tmp){
                        //cout << tmp << " TMP " << endl;
                        act=tmp;
                    }
                }
                if(najwieksza<=act){
                    najwieksza = act;
                }
           }

            cout << najwieksza << endl;
            najwieksza = 0;

        }
    }

}
