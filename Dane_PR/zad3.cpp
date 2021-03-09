#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
    string tab[1000];

    fstream plik("sygnaly.txt");
    for(int i = 0;i<1000;i++){
        plik >> tab[i];
    }
    bool sprawdz = true;
    for(int i = 0;i<1000;i++){
        string tmp = tab[i];
        for(int j = 0;j<tmp.size();j++){
            for(int k = 0;k<tmp.size();k++){
                if(abs(tmp[j] - tmp[k] > 10)){
                    sprawdz = false;
                }
            }
        }
    }
}
