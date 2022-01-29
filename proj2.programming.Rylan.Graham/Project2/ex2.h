/* ----------------------------------------------------------------------------------- */
/*     Rylan Graham																       */
/* ----------------------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H

#include "checkTest.h"

int symmetricalMap(char bkg1[4][3], char bkg2[4][3]) 
{
    char reflection[4][3] = { {bkg1[0][2],bkg1[0][1],bkg1[0][0]},
                            {bkg1[1][2],bkg1[1][1],bkg1[1][0]},
                            {bkg1[2][2],bkg1[2][1],bkg1[2][0]},
                            {bkg1[3][2],bkg1[3][1],bkg1[3][0]} };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (bkg2[i][j] != reflection[i][j]) {
                return 0;
            }
        }
    }
    return 1;  
}

// DO NOT MODIFY THE CODE BELOW!!
// NO MODIFICAR EL CODI DEL TEST!!
// NO MODIFICAR EL CODIGO DEL TEST!!

void testEx2()
{
    char world1[4][3] = { {'t', 'h', 'h'},
                        {'g', 'w', 'g'},
                        {'t', 'w', 'g'},
                        {'t', 'h', 's'} };

    char world2[4][3] = { {'h', 'h', 't'},
                        {'g', 'w', 'g'},
                        {'g', 'w', 't'},
                        {'s', 'h', 't'} };

    char world3[4][3] = { {'h', 'h', 't'},
                         {'g', 'w', 'g'},
                         {'g', 'w', 't'},
                         {'s', 'h', 's'} };

    char world4[4][3] = { {'g', 'g', 'g'},
                         {'g', 'w', 'g'},
                         {'g', 'w', 'g'},
                         {'g', 'g', 'g'} };

    CHECK("Ex 2 - symmetricalMap",
        symmetricalMap(world1, world2) == 1 &&
        symmetricalMap(world2, world1) == 1 &&
        symmetricalMap(world1, world3) == 0 &&
        symmetricalMap(world3, world4) == 0 &&
        symmetricalMap(world3, world3) == 0);
}

#endif // EX3_H
