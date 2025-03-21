
#include <iostream>
#include "class.h"

void sandbox() {
    Organizador miOrganizador;

    miOrganizador.add("Make math");
    miOrganizador.add("Make biology");
    miOrganizador.add("Make Chemestry");

    miOrganizador.lista();


    miOrganizador.eliminar("Make Chemestry");

    miOrganizador.lista();
}

int main() {
    sandbox();
    return 0;
}