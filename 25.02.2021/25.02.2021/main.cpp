#include <iostream>

using namespace std;

int main()
{
    char litera; //stala znakowa
    litera = L'a';
    const int i = 5;
    litera+=i;
    cout << litera;

    char litera2 = 'a';
    cout << litera2+5;
}
