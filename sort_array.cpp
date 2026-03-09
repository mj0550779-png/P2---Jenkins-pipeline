#include <iostream>

using namespace std;

int main() 
{
    const int size = 5;
    int tab[size];

    cout << "Podaj elementy tablicy.\n";
    for(int i=0; i<5; i++)
        cin >> tab[i];

    for(int i=0; i<5; i++)
        {
            for(int j=i; j<5; j++)
                {
                    if(tab[j] < tab[i])
                        swap(tab[j], tab[i]);
                }
        }

    for(int i=0; i<5; i++)
        cout << tab[i] << " ";
    
    return 0;
}
