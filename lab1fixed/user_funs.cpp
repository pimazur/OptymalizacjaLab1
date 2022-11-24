#include"user_funs.h"


matrix funkcjaCelu(matrix x, matrix ud1, matrix ud2) {
	double y = -cos(0.1 * x()) * exp(-pow(0.1 * x() - 2 * 3.14, 2)) + 0.002 * pow(0.1 * x(), 2);
	return y;
}