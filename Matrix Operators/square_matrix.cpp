#include "square_matrix.h";
#include <iostream>
#include <initializer_list>
#include <vector>
#include <cmath>


	square_matrix::square_matrix(int n) {
		size = n * n;
		double value;
		data = new double[size];
		for (int i = 0 ; i < size; i++) {
			std::cout << "Enter Value for " << i + 1;
			std::cin >> value;
			data[i] = value;
		}
	}
	square_matrix::square_matrix(int n, const std::initializer_list<double>& list) {
		size = n * n;
		data = new double[size];
		int i = 0;
		for (auto value = list.begin(); value != list.end(); ++value) {
			data[i] = *value;
			i++;
		}
			
	}
	/*square_matrix::square_matrix(const square_matrix& matrix) {
		matrix = square_matrix(); 
	}
	square_matrix::∼square_matrix() {
		
	}
	square_matrix& operator=(const square_matrix&) {}*/
	double& operator()(int i, int j) const {
		int r = sqrt(size);
		int index = (r * i) + j;
		double value = data[index];
	}
		/*
	square_matrix& operator+=(const square_matrix&) {}
	square_matrix& operator-=(const square_matrix&) {}
	square_matrix& operator*=(const square_matrix&) {}*/
	