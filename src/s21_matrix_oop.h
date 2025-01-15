#ifndef S21_MATRIX_OOP_
#define S21_MATRIX_OOP_

#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

class S21Matrix {
 private:
  int rows_, cols_;
  double** matrix_;

 public:
  S21Matrix();
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix& other);
  S21Matrix(S21Matrix&& other);
  ~S21Matrix();

  bool EqMatrix(const S21Matrix& other);
  void SumMatrix(const S21Matrix& other);
  void SubMatrix(const S21Matrix& other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix& other);
  S21Matrix Transpose();
  S21Matrix CalcComplements();
  double Determinant();
  S21Matrix InverseMatrix();
  S21Matrix MinorMatrix(int row, int col);

  S21Matrix& operator=(const S21Matrix& other);
  S21Matrix& operator+(const S21Matrix& other);
  S21Matrix& operator-(const S21Matrix& other);
  S21Matrix& operator*(const S21Matrix& other);
  S21Matrix& operator*(const double num);
  bool operator==(const S21Matrix& other);
  S21Matrix& operator=(const S21Matrix& other);
  S21Matrix& operator+=(const S21Matrix& other);
  S21Matrix& operator-=(const S21Matrix& other);
  S21Matrix& operator*=(const double num);
  double& operator()(int i, int j);

  int GetRows();
  int GetColms();
  void SetRows(int rows_);
  void SetColms(int cols_);
};

#endif