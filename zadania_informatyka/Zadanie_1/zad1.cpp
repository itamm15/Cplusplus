#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
   fstream plik("ciagi.txt");
   int buffor, sumTmp = 0, sum = 0, najwRoznica =0;
   while(plik>>buffor){
    sumTmp = 0;
    int tab[buffor];
    for(int i = 0;i<buffor;i++){
        plik >> tab[i];
        //cout << tab[i];
    }
   int roznica = tab[1] - tab[0];
   if(roznica > najwRoznica){
    najwRoznica = roznica;
   }
    for(int j = 1;j<=buffor;j++){
    if(tab[j]- tab[j-1]==roznica){
        sumTmp++;
    }
   }

   if(sumTmp==buffor-1){
    sum++;
   }
   }
   cout << sum << ", a roznica to " << najwRoznica;
}
