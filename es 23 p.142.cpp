#include <iostream>
using namespace std;

int main(){
    int voto = 0, min = 0;
    cout << "Dammi un voto \n";
    cin >> min;
    for (size_t i = 1; i <= 4; i++)
    {
        cout << "Dammi un voto \n";
        cin >> voto;
        if (min > voto){
            min = voto;
            }
    }
    cout << "Il voto più basso è: " << min << endl;
}
