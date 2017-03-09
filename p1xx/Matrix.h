//
//  Matrix.h
//  p1x
//
//  Author Michael Dang.

#ifndef Matrix_h
#define Matrix_h

#include <istream>
#include <ostream>

using namespace std;
using std::initializer_list;

typedef unsigned int uint;
typedef initializer_list<initializer_list<double>> i_list;

class Matrix{

    int m,n;
    int **mat;

public:

    Matrix(int rows,int cols);
    Matrix(const Matrix &m); //Copy constructor

    ~Matrix();


    Matrix add(int& s) ;
    Matrix add(Matrix & m);

    Matrix subtract(int& s) ;
    Matrix subtract( Matrix & m);

    Matrix multiply(int& s) ;
    Matrix multiply( Matrix & m);

    Matrix divide(int& s) ;
    Matrix t() ; //transpose

    const int getRows() const{return m;}
    const int getCols() const{return n;}

    int & at(int r,int c) ;
    const int &at (int r ,int col) const;


    //Operators overloaded
    friend ostream& operator <<(ostream& out,const Matrix &m);
    friend istream& operator >>(istream& in, Matrix &m);

    Matrix operator+(int m);
    Matrix operator+(Matrix &m);
    Matrix operator-(int m);
    Matrix operator-(Matrix &m);
    Matrix operator* (int m);
    Matrix operator* (Matrix &m);
    Matrix operator/ (int m);

    Matrix& operator =(const Matrix &m);

}; // Matrix


#endif /* Matrix_h */