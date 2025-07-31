#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

// Quantization Matrix (simplified JPEG-like)
int quantizationMatrix[SIZE][SIZE] = {
    {16, 11, 10, 16, 24, 40, 51, 61},
    {12, 12, 14, 19, 26, 58, 60, 55},
    {14, 13, 16, 24, 40, 57, 69, 56},
    {14, 17, 22, 29, 51, 87, 80, 62},
    {18, 22, 37, 56, 68, 109, 103, 77},
    {24, 35, 55, 64, 81, 104, 113, 92},
    {49, 64, 78, 87, 103, 121, 120, 101},
    {72, 92, 95, 98, 112, 100, 103, 99}
};

// Apply Quantization (Lossy Step)
void applyQuantization(int data[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            data[i][j] /= quantizationMatrix[i][j]; // Integer division (lossy)
        }
    }
}

// Print Matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int inputMatrix[SIZE][SIZE] = {
        {100, 120, 110, 105, 90, 85, 80, 75},
        {115, 125, 115, 110, 95, 90, 85, 80},
        {110, 115, 120, 115, 100, 95, 90, 85},
        {105, 110, 115, 120, 110, 100, 95, 90},
        {90, 95, 100, 110, 120, 115, 110, 105},
        {85, 90, 95, 100, 115, 120, 115, 110},
        {80, 85, 90, 95, 110, 115, 120, 115},
        {75, 80, 85, 90, 105, 110, 115, 120}
    };

    printf("Original Matrix:\n");
    printMatrix(inputMatrix);

    applyQuantization(inputMatrix);

    printf("\nAfter Quantization (Lossy Compression):\n");
    printMatrix(inputMatrix);

    return 0;
}