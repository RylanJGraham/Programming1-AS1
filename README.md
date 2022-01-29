# RylanGrahamCITMProgramming1Work
 
Exercise 1 (2 points). Implement a program that asks the user for the number of a month and returns its
number of days.


Exercise 2 (2 points). Implement the function symmetricalMap(...), that given 2 matrices 4x3 of chars
representing two tile-based maps, and considering that the value of each tile can be: ‘w’ (water), ‘s’ (sand), ‘g’
(grass), ’h’ (house) i ‘t’ (tree), the function returns 1 if they are symmetrical with respect to the Y axis (as in the
following images) or 0 otherwise. 


Exercise 3 (2 points). We want to implement the classical Pacman videogame and you are in charge of
providing the information of the cells of each level, a tool to find the position of pacman in the board, and
another tool that says if pacman can perform a specific movement.
In order to do this, you have to:
- Create the new data type position, which contains two integers (row and column) to store a position
inside the labyrinth of each level.
- Create the new data type cell, containing a character type, that can have the following values:
o e if the cell is empty.
o p if pacman is in that cell.
o g if the cell contains a ghost.
o w if the cell contains a wall of the labyrinth. 
Programming I – Practical exercises II
- Implement the function findPacman(…) that given the labyrinth of a determined level (a 5x5 matrix
of cells), returns the position of pacman.
- Implement the function canPacmanMoveToCell(…), that given the labyrinth of a determined level,
the position of pacman and the movement to perform (the character u for going up, d for going down,
l for going left and r for going right), returns 1 if pacman can do the movement (there is an empty cell
in the specified direction) or 0 if not. 


Exercise 4 (2 points). Having the armory closet of the classical Airborne Rangers videogame represented as a
matrix of 4x3 weapons, we want to know which of the rows of the closet provide the maximum average
damage and which column needs the minimum average ammo. In this way, we can choose the weapons for
each mission wisely.
To do this, you have to:
- Create the new data type Weapon, containing three integers (id, ammo and damage).
Important!
To implement this function, consider the position (0,0) at the top left corner of the labyrinth.
You can also consider that the movement’s value cannot be different to the specified ones. 
Programming I – Practical exercises II
- Implement the function rowMaxAvgDamage(…) that receives an armory closet as a parameter and
returns the row with the maximum average damage. For instance, if the row with the maximum
average damage is the one at the top, the function will return 0 (row 0).
Implement the function colMinAvgAmmo(…) that receives an armory closet as a parameter and returns the
column with the minimum average ammo. For instance, if the column with the minimum average ammo is the
leftmost one, the function will return 0 (column 0).


Exercise 5 (2 points). Implement the function countWordInFile(…) that given a filename and a word (string),
returns the number of occurrences of the word in the given file.
