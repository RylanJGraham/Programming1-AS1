/* ----------------------------------------------------------------------------------- */
/*     Rylan Graham																       */
/* ----------------------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

#include "checkTest.h"

struct position {
	int row;
	int column; 
};

struct cell {
	char type;
};

struct position findPacman(struct cell labcolumnrinth[5][5])
{
	struct position pacmanPos;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (labcolumnrinth[i][j].type == 'p') {
				pacmanPos.row = i;
				pacmanPos.column = j;
				return pacmanPos;
			}
		}
	} 
}

int canPacmanMoveToCell(struct cell labcolumnrinth[5][5], struct position pacmanPos, char movement)
{

	if(movement == 'r'){
		if (pacmanPos.column != 4) {
			int fill2 = pacmanPos.column + 1;
			if (labcolumnrinth[pacmanPos.row][fill2].type == 'e') {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}

	if (movement == 'l') {
		if (pacmanPos.column != 0) {
			int fill1 = pacmanPos.column - 1;
			if (labcolumnrinth[pacmanPos.row][fill1].type == 'e') {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}

	if (movement == 'u') {
		if (pacmanPos.row != 0) {
			int fill = pacmanPos.row - 1;
			if (labcolumnrinth[fill][pacmanPos.column].type == 'e') {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}

	if (movement == 'd') {
		if (pacmanPos.row != 4) {
			int fill3 = pacmanPos.row + 1;
			if (labcolumnrinth[fill3][pacmanPos.column].type == 'e') {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	
}


// DO NOT MODIFY THE CODE BELOW!!
// NO MODIFICAR EL CODI DEL TEST!!
// NO MODIFICAR EL CODIGO DEL TEST!!

void testEx3() {

	struct cell pacmanBoard[5][5];

	pacmanBoard[0][0].type = 'e'; pacmanBoard[0][1].type = 'e'; pacmanBoard[0][2].type = 'e'; pacmanBoard[0][3].type = 'g'; pacmanBoard[0][4].type = 'e';
	pacmanBoard[1][0].type = 'e'; pacmanBoard[1][1].type = 'w'; pacmanBoard[1][2].type = 'e'; pacmanBoard[1][3].type = 'w'; pacmanBoard[1][4].type = 'e';
	pacmanBoard[2][0].type = 'e'; pacmanBoard[2][1].type = 'g'; pacmanBoard[2][2].type = 'e'; pacmanBoard[2][3].type = 'g'; pacmanBoard[2][4].type = 'e';
	pacmanBoard[3][0].type = 'e'; pacmanBoard[3][1].type = 'w'; pacmanBoard[3][2].type = 'w'; pacmanBoard[3][3].type = 'w'; pacmanBoard[3][4].type = 'e';
	pacmanBoard[4][0].type = 'e'; pacmanBoard[4][1].type = 'e'; pacmanBoard[4][2].type = 'e'; pacmanBoard[4][3].type = 'g'; pacmanBoard[4][4].type = 'p';

	struct position pos = findPacman(pacmanBoard);

	int res20 = (pos.row == 4 && pos.column == 4);
	int res21 = (canPacmanMoveToCell(pacmanBoard, pos, 'u') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'd') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'l') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'r') == 0);

	pacmanBoard[4][4].type = 'e'; pacmanBoard[1][0].type = 'p';
	pos = findPacman(pacmanBoard);

	int res22 = (pos.row == 1 && pos.column == 0);
	int res23 = (canPacmanMoveToCell(pacmanBoard, pos, 'u') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'd') == 1 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'l') == 0 &&
		canPacmanMoveToCell(pacmanBoard, pos, 'r') == 0);

	CHECK("Ex 3 - Pacman", res21 == 1 && res22 == 1 && res23 == 1 && res20 == 1);
}

#endif