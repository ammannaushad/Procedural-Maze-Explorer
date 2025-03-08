#include <iostream>
#include <string>

using namespace std;

int main () {
int rows=6,columns=7,playerA=0,playerB=0;
char move;

///maze width: 6
///maze height: 7
char maze[6][7] = {
    {'#', '#', '#', '#', '#', '#', '#'},
    {'.', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', '#', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', '#', '#', '#', '#', ' ', '.'}
};

while (true) {
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
    if (i == playerA && j == playerB) {
cout<< "Player's Position";
} else {
cout<< maze[i][j];
}
}
cout<<endl;
}
    
cout<< "Enter your move (W = up, S = down, A = left, D = right): ";
cin>> move;


if (move == 'W') {
if (playerA > 0 && maze[playerA - 1][playerB] != '#') {
    playerA--;
}


} else if (move == 'A') {
if (playerB > 0 && maze[playerA][playerB - 1] != '#') {
    playerB--;
}


} else if (move == 'S') {
if (playerA < rows -1 && maze[playerA + 1][playerB] != '#') {
    playerA++;
}


} else if (move == 'D') {
if (playerB < columns -1 && maze[playerA][playerB + 1] != '#') {
    playerB++;
}
}

if (playerA == 5 && playerB == 6) {
cout<< "You have escaped the maze"<<endl;
    break; 
}
}

return 0;
}