#include <iostream>
#include "paga.h"

using namespace std;

void shfaqMesazhin(int ore)
{
if (ore > MAKS_ORET_NE_MUAJ) {
cout << "Ju keni tejkaluar numrin e oreve per "
<< ore - MAKS_ORET_NE_MUAJ << " ore." << endl;
}
else if (ore == MAKS_ORET_NE_MUAJ) {
cout << "Ju keni realizuar oret sipas parashikimit." << endl;
}
else {
cout << "Ju keni "
<< MAKS_ORET_NE_MUAJ - ore
<< " ore me pak se plani mujor." << endl;
}
}
double llogaritBonusin(int ore) {
    const double PAGESA_PER_ORE_SHTESE = 10.5; 
    if (ore > MAKS_ORET_NE_MUAJ) {
        return (ore - MAKS_ORET_NE_MUAJ) * PAGESA_PER_ORE_SHTESE;
    }
    return 0.0;
}