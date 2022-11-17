#include <iostream>
using namespace std;
int main() {
   float a=0, b=0, x=0;
    int opzione=0;
    cin >> a >> b >> opzione;
    switch(opzione) {
        case 0:
            x = (a * b) / 2;
            cout << x << endl;
            break;
        case 1:
            x = a * a;
            cout << x << endl;
            break;
        case 2:
            x = a * b;
            cout << x << endl;
           default:
            cout << "istruzione non valida" << endl;
  }
   return 0;
}
