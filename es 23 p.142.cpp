#include <iostream>
using namespace std;

int main(){
    int voto1 = 0, voto2 = 0, min = 0;
    while (voto1 <= 0 && voto2 <= 0) {
    cout << "Dammi il primo voto e il secondo voto \n";
    cin >> voto1 >> voto2;
    }
    if (voto1 > voto2){
        min = voto2;
    } else {
        min = voto1;
    }
    for (size_t i = 1; i <= 3; i++)
    {
        cout << "Dammi un altro voto \n";
        cin >> voto2;
        if (min > voto2){
            min = voto2;
            }
    }
    cout << "Il voto più basso è: " << min << endl;
}
