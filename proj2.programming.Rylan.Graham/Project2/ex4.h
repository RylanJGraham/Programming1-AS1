/* ----------------------------------------------------------------------------------- */
/*     Rylan Graham																       */
/* ----------------------------------------------------------------------------------- */

#ifndef EX4_H
#define EX4_H

#include "checkTest.h"

struct Weapon {
	int id;
	int ammo;
	int damage;
};

int rowMaxAvgDamage(struct Weapon armoryCloset[4][3])
{
	int total[4];

	for (int a = 0; a < 4; a++) {
		int damageval;
		int holder = 0;
		for (int i = 0; i < 3; i++) {
			damageval = armoryCloset[a][i].damage;
			holder = holder + damageval;
		}
		total[a] = (holder / 3);
	}

	int returnval;
	for (int b = 1; b < 4; b++) {
		if (total[b - 1] < total[b]) {
			returnval = b;
		}
		else {
			returnval = (b - 1);
		}
	}
	return returnval;

}

int colMinAvgAmmo(struct Weapon armoryCloset[4][3])
{
	int total[3];

	for (int a = 0; a < 3; a++) {
		int ammoval;
		int holder = 0;
		for (int i = 0; i < 4; i++) {
			ammoval = armoryCloset[i][a].ammo;
			holder = holder + ammoval;
		}
		total[a] = (holder / 4);
	}

	int returnval;
	for (int b = 1; b < 3; b++) {
		if (total[b - 1] > total[b]) {
			returnval = b;
		}
		else {
			returnval = (b - 1);
		}
	}
	return returnval;
	
}

// DO NOT MODIFY THE CODE BELOW!!
// NO MODIFICAR EL CODI DEL TEST!!
// NO MODIFICAR EL CODIGO DEL TEST!!

void testEx4() {

	struct Weapon armoryCloset[4][3];

	armoryCloset[0][0].id = 0; armoryCloset[0][0].damage = 1; armoryCloset[0][0].ammo = 8;
	armoryCloset[0][1].id = 1; armoryCloset[0][1].damage = 1; armoryCloset[0][1].ammo = 5;
	armoryCloset[0][2].id = 2; armoryCloset[0][2].damage = 1; armoryCloset[0][2].ammo = 5;

	armoryCloset[1][0].id = 10; armoryCloset[1][0].damage = 2; armoryCloset[1][0].ammo = 10;
	armoryCloset[1][1].id = 11; armoryCloset[1][1].damage = 1; armoryCloset[1][1].ammo = 3;
	armoryCloset[1][2].id = 12; armoryCloset[1][2].damage = 4; armoryCloset[1][2].ammo = 4;

	armoryCloset[2][0].id = 20; armoryCloset[2][0].damage = 9; armoryCloset[2][0].ammo = 1;
	armoryCloset[2][1].id = 21; armoryCloset[2][1].damage = 6; armoryCloset[2][1].ammo = 2;
	armoryCloset[2][2].id = 22; armoryCloset[2][2].damage = 6; armoryCloset[2][2].ammo = 2;

	armoryCloset[3][0].id = 30; armoryCloset[3][0].damage = 1; armoryCloset[3][0].ammo = 1;
	armoryCloset[3][1].id = 31; armoryCloset[3][1].damage = 2; armoryCloset[3][1].ammo = 6;
	armoryCloset[3][2].id = 32; armoryCloset[3][2].damage = 2; armoryCloset[3][2].ammo = 1;

	CHECK("Ex 4 - Armory closet", rowMaxAvgDamage(armoryCloset) == 2 && colMinAvgAmmo(armoryCloset) == 2);

}

#endif