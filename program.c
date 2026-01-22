#include <stdio.h>

#define SIZE 8

// Symboles pour le rendu
const char EMPTY = '.';
const char BLACK = 'X';
const char WHITE = 'O';

// Fonction pour afficher la ligne d'en-tête (A B C...)
void printHeader() {
    printf("    "); // Espacement pour l'indice vertical
    for (int i = 0; i < SIZE; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");
}

// Fonction pour afficher une ligne de séparation horizontale
void printSeparator() {
    printf("  +");
    for (int i = 0; i < SIZE; i++) {
        printf("--");
    }
    printf("+\n");
}

// Fonction pour afficher une ligne de données du plateau
void printRow(int rowIndex, char boardLine[]) {
    printf("%2d| ", rowIndex + 1); // Indice vertical (1-8)
    for (int j = 0; j < SIZE; j++) {
        printf("%c ", boardLine[j]);
    }
    printf("|\n");
}

// Fonction principale d'affichage de la maquette
void displayBoard(char board[SIZE][SIZE]) {
    printHeader();
    printSeparator();
    
    for (int i = 0; i < SIZE; i++) {
        printRow(i, board[i]);
    }
    
    printSeparator();
}

int main() {
    // Initialisation d'une maquette de plateau avec la position de départ
    char gameBoard[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            gameBoard[i][j] = EMPTY;
        }
    }

    // Position initiale classique de l'Othello
    gameBoard[3][3] = WHITE;
    gameBoard[3][4] = BLACK;
    gameBoard[4][3] = BLACK;
    gameBoard[4][4] = WHITE;

    printf("--- MAQUETTE INTERFACE OTHELLO ---\n\n");
    displayBoard(gameBoard);
    printf("\nJoueur actuel : NOIR (%c)\n", BLACK);

    return 0;
}
