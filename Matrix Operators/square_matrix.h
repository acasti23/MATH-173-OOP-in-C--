#pragma once
#include <initializer_list>

class square_matrix {
public:
	square_matrix(int n); //defult Constructor takes size
	square_matrix(int n, const std::initializer_list<double>& list);//constructor takes size and list of values
	/*square_matrix(const square_matrix& matrix);//Copy Constructor (exact copy)
	square_matrix();//Deconstuctor
	square_matrix& operator=(const square_matrix&); //Copy only assigment */
	double& operator()(int i, int j) const;//Member access at (i, j)

	/*Arthmetic assigment Operator
	square_matrix& operator+=(const square_matrix&);
	square_matrix& operator-=(const square_matrix&);
	square_matrix& operator*=(const square_matrix&);/

	//Return Size
	int num_rows() const { return size; }
	int num_cols() const { return size; }*/

private:
	int size;
	double* data = nullptr;
};
/*/square_matrix operator+(const square_matrix&, const square_matrix&);
square_matrix operator-(const square_matrix&, const square_matrix&);
square_matrix operator*(const square_matrix&, const square_matrix&);*/
