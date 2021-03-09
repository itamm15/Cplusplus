#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void fibb(){
    long long a = 0, b = 1;
    for(int i =1;i<=40;i++){
        if(i%10==0 || i%20 == 0 || i%30==0 || i%40==0){
            cout << b << endl;
        }
        b+=a;
        a= b-a;
    }
}

void fibb2(){
    long long a = 0, b = 1;
    vector <int> tab;
    for(int i = 1;i<=40;i++){
        int tmp = b;
        int suma = 0;
        for(int j = 2;j<tmp/2;j++){
            if(tmp%j==0){
                suma++;
            }
        }
        if(suma==0){
            tab.push_back(tmp);
        }
        //po petli
        b+=a;
        a= b-a;
    }

    for(int i = 0;i<tab.size();){
        if(tab[i] == 1){
            tab.erase(tab.begin()+i);
        }else{
            i++;
        }
    }
    for(int i = 0;i<tab.size();i++){
        cout << tab[i] << endl;
    }
}

void fibb3(){
    long long a = 0, b = 1;
    vector <vector <int>> main;
    for(int i = 0;i<40;i++){
        vector <int> tab;
        int tmp = b;
        while(tmp>0){
            tab.push_back(tmp%2);
            tmp/=2;
        }
        for(long long i = 1;i<=tab.size();i++){
            //cout << tab[tab.size()-i];
        }
        main.push_back(tab);
        //cout << " " << b << endl;
        //po petli
        b+=a;
        a= b-a;
    }
    int najdluzsza = main[main.size()-1].size();

    for(int i = 0;i<main.size();i++){
        for(int k = 0;k<najdluzsza - main[i].size();k++){
            cout << '0';
        }
        for(int j = 0;j<main[i].size();j++){
            cout << main[i][j];
        }
        cout << endl;
    }
}

void fibb4(){
 long long a = 0, b = 1;
    vector <vector <int>> main;
    for(int i = 0;i<40;i++){
        vector <int> tab;
        int tmp = b;
        while(tmp>0){
            tab.push_back(tmp%2);
            tmp/=2;
        }
        for(long long i = 1;i<=tab.size();i++){
            //cout << tab[tab.size()-i];
        }
        main.push_back(tab);
        //cout << " " << b << endl;
        //po petli
        b+=a;
        a= b-a;
    }

    for(int i =0;i<main.size();i++){
        int sum = 0;
        for(int j = 0;j<main[i].size();j++){
            if(main[i][j] == 1){
                sum++;
            }
        }
        if(sum == 6){
            for(int k = 0;k<main[i].size();k++){
                cout << main[i][k];
            }
            cout << endl;
        }
    }
}
int main(){
    //zad 1
    //fibb();
    //zad 2
    //fibb2();
    //zad 3
    //fibb3();
    //zad 4
    //fibb4();

}
