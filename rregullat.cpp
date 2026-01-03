#include "paga.h"

const int MAKS_ORET_NE_MUAJ = 176;

float llogaritZbritjen(int ore, float paga)
{
    if (ore < 0 || paga < 0) {
        return 0;
    }
    if (ore < MAKS_ORET_NE_MUAJ) {
        float perqindjaRealizimit = 1 - (ore / (float)MAKS_ORET_NE_MUAJ);
        return perqindjaRealizimit * paga;
    }
    return 0;
}
