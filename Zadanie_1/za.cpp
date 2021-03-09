#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream plik("ciagi.txt");

    string buffor;
    int najwieksza = 0, tmp = 0, tmpCount = 0, act = 0, roznica = 0, sum = 0;

    //start here

        plik>>buffor;
        roznica = 0;
        sum = 0;
        int buffSize = std::stoi(buffor);
        int tab[buffSize];
        for(int i = 0;i<buffSize;i++){
            plik >> tab[i];
            //cout << tab[i] << endl;
        }
            //it exists
            for(int i = 0;i<=buffSize;i++){
                tmp = tab[i];
                cout << tmp << " tmp " << endl;
                for(int j = 1;j<=tmp;j++){
                    if(j*j*j==tmp){
                        act=tmp;
                        cout << j*j*j << " j , " << act << "act " << endl;
                    }
                }
                if(najwieksza<=act){
                    najwieksza = act;
                }
           }
           cout << najwieksza << endl;
           najwieksza = 0;

}
