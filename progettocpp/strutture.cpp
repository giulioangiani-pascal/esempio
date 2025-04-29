#include <iostream>
#include "strutture.h"
using namespace std;

ostream& operator<<(ostream &out, const persona &p) {
    out << p.cognome << " " << p.nome << " : " << p.eta;
    return out;
}
