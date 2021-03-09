#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  string tab[1000], tmp = "";

  fstream plik("sygnaly.txt");

  for(int i = 0;i<1000;i++){
    plik >> tab[i];
  }

  for(int i = 40;i<=1000;i++){
    if(i%40==0){
        tmp = tab[i-1];
        cout << tmp[9];
    }
  }
}
