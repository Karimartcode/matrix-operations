#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

Matrix *create_matrix(int rows, int cols) {
    Matrix *m = malloc(sizeof(Matrix));
    m->rows = rows;
    m->cols = cols;
    m->data = malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++) {
        m->data[i] = calloc(cols, sizeof(double));
    }
    return m;
}

void free_matrix(Matrix *m) {
    if (!m) return;
    for (int i = 0; i < m->rows; i++)
        free(m->data[i]);
    free(m->data);
    free(m);
}

void print_matrix(Matrix *m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++)
            printf("%8.2f ", m->data[i][j]);
        printf("\n");
    }
}
