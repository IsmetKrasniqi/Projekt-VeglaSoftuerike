#include <iostream>
#include "paga.h"

using namespace std;

void shfaqRezultatin(float paga, float pagaZbritur)
{
    if (pagaZbritur > 0) {
        cout << "Kete muaj do t'ju zbritet paga per "
             << pagaZbritur << " euro." << endl;
    }

    cout << "Paga per kete muaj: "
         << paga - pagaZbritur << " euro." << endl;
}

int main()
{
    int nrOreveTePunes;
    float paga;

    cout << "Shenoni numrin e oreve qe keni punuar ne kete muaj: ";
    cin >> nrOreveTePunes;

    cout << "Shenoni pagen mujore: ";
    cin >> paga;

    float pagaZbritur = llogaritZbritjen(nrOreveTePunes, paga);
    shfaqMesazhin(nrOreveTePunes);
    shfaqRezultatin(paga, pagaZbritur);

    return 0;
}

