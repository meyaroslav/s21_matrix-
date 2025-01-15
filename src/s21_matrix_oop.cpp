#include "s21_matrix_oop.h"

S21Matrix::S21Matrix() {}

S21Matrix::S21Matrix(int rows, int cols) {}

S21Matrix::S21Matrix(const S21Matrix& other) {}

S21Matrix::S21Matrix(S21Matrix&& other) {}

S21Matrix::~S21Matrix() {}

bool S21Matrix::EqMatrix(const S21Matrix& other) {}

void S21Matrix::SumMatrix(const S21Matrix& other) {}

void S21Matrix::SubMatrix(const S21Matrix& other) {}

void S21Matrix::MulNumber(const double num) {}

void S21Matrix::MulMatrix(const S21Matrix& other) {}

S21Matrix S21Matrix::Transpose() {}

S21Matrix S21Matrix::MinorMatrix(int row, int col) {}

S21Matrix S21Matrix::CalcComplements() {}

double S21Matrix::Determinant() {}

S21Matrix S21Matrix::InverseMatrix() {}

double& S21Matrix::operator()(int i, int j) {}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator+(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator-(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator*(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator*(const double num) {}

bool S21Matrix::operator==(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator+=(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator-=(const S21Matrix& other) {}

S21Matrix& S21Matrix::operator*=(const double num) {}

int S21Matrix::GetRows() {}

int S21Matrix::GetColms() {}

void S21Matrix::SetRows(int rows) {}

void S21Matrix::SetColms(int colms) {}