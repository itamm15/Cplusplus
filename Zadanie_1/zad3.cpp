#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream plik("bledne.txt");
    int zly = 0, roznica = 0;
    string buffor;
    while(plik>>buffor){
        int buffSize = stoi(buffor);
        int tab[buffSize];

        for(int i = 0;i<buffSize;i++){
            plik >> tab[i];
        }
        roznica = tab[1] - tab[0];
        for(int i = 1;i<buffSize;i++){
            if(tab[i]-tab[i-1]!=roznica){
                int wieksza = tab[i+1] - tab[i];
                if(wieksza==roznica){
                    zly = tab[i-1];
                }else{
                    zly = tab[i];
                }
            }
        }
        cout << zly << endl;
    }


}
