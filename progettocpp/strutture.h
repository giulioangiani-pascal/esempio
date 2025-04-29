#ifndef STRUTTURE_H_INCLUDED
#define STRUTTURE_H_INCLUDED
using namespace std;
struct persona {
    string nome, cognome;
    int eta;
};
ostream& operator<<(ostream &out, const persona &p);

#endif // STRUTTURE_H_INCLUDED
