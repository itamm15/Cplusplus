#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream plik("ciagi.txt");
    int najw = 0, buffor;
   while(plik>>buffor){
    int tab[buffor];
    for(int i = 0;i<buffor;i++){
        plik >> tab[i];
        //cout << tab[i];
    }
    for(int i = 0;i<buffor;i++){
        int tmp = tab[i];
        while(tmp > 1){
            if(tmp%3==0){
                tmp/=3;
            }else{
                break;
            }
        }
        if(tmp == 1){
            najw=tab[i];
        }

    }
    cout << najw << endl;
   }

}
