#include <iostream>
#include "paga.h"

using namespace std;

// Ky eshte funksioni per llogaritjen e parave shtese (bonusi)
double llogaritBonusin(int ore) {
    const double PAGESA_PER_ORE_SHTESE = 10.5; 
    if (ore > MAKS_ORET_NE_MUAJ) {
        return (ore - MAKS_ORET_NE_MUAJ) * PAGESA_PER_ORE_SHTESE;
    }
    return 0.0;
}


void shfaqMesazhin(int ore) {
    if (ore > MAKS_ORET_NE_MUAJ) {
        // Ketu therrasim llogaritjen e bonusit qe shtuam me larte
        double bonusi = llogaritBonusin(ore);
        cout << "Ju keni tejkaluar numrin e oreve per " << ore - MAKS_ORET_NE_MUAJ << " ore." << endl;
        cout << "Bonusi juaj eshte: " << bonusi << " Euro." << endl;
    } 
    else if (ore == MAKS_ORET_NE_MUAJ) {
        cout << "Ju keni realizuar oret sipas parashikimit." << endl;
    } 
    else {
        cout << "Ju keni " << MAKS_ORET_NE_MUAJ - ore << " ore me pak se plani mujor." << endl;
    }
}