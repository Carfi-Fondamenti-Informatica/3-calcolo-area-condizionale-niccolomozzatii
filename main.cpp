#include <iostream>
using namespace std;
int main() {
   float a=0, b=0, x=0;
    int opzione=0;
    cin >> a >> b >> opzione;
    switch(opzione) {
        case 1:
            x = (a * b) / 2;
            cout << x << endl;
            break;
        case 2:
            x = a * a;
            cout << x << endl;
            break;
        case 3:
            x = a * b;
            cout << x << endl;
            break;
        default:
            cout << "istruzione non valida" << endl;
  }
   return 0;
}
