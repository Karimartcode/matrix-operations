#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    double **data;
    int rows;
    int cols;
} Matrix;

Matrix *create_matrix(int rows, int cols);
void free_matrix(Matrix *m);
void print_matrix(Matrix *m);
Matrix *add_matrices(Matrix *a, Matrix *b);
Matrix *subtract_matrices(Matrix *a, Matrix *b);
Matrix *multiply_matrices(Matrix *a, Matrix *b);
Matrix *transpose(Matrix *m);
Matrix *scalar_multiply(Matrix *m, double s);
double determinant(Matrix *m);
Matrix *identity(int n);

#endif
