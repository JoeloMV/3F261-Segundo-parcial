#include <iostream>
#include <SerieFocos.hpp>
#include <Foco.hpp>

int main (int arg, char const *arv[])
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    return 0;
}