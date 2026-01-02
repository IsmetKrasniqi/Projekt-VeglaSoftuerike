#include <iostream>
#include "paga.h"

using namespace std;

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

