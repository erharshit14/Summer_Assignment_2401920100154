#include "Veena.h"
#include "Saxophone.h"

int main() {

   
    Veena veena;
    veena.play();

    Saxophone saxophone;
    saxophone.play();

    Playable* p;

    p = &veena;
    p->play();

    p = &saxophone;
    p->play();

    return 0;
}