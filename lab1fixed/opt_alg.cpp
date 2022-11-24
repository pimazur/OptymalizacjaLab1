#include"opt_alg.h"

using namespace std;
double* expansion(matrix(*ff)(matrix, matrix, matrix), double x0, double d, double alpha, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		double* p = new double[2] { 0, 0 };
		int i = 0;
		double x1 = x0 + d;
		
		
		if (ff(matrix(x1), ud1, ud2) == ff(matrix(x0), ud1, ud2))
		{
			p[0] = x0;
			p[1] = x1;
			return p;
		}

		if (ff(matrix(x1), ud1, ud2) > ff(matrix(x0), ud1, ud2))
		{
			d = -d;
			x1 = x0 + d;
			i++;
			if (ff(matrix(x1), ud1, ud2) >= ff(matrix(x0), ud1, ud2))
			{
				p[0] = x1;
				p[1] = x0 - d;
				return p;
			}
		}
		// x(i+1)
		double y;
		// x(i)
		double z;
		do 
		{
			if (i>Nmax)
			{
				throw "to many iterations";
			}
			i += 1;
			y = x0 + pow(alpha, i) * d;
			z = x0 + pow(alpha, (i - 1)) * d;
			cout << "y=" << y << endl << "z=" << z << endl;
			cout << "f(y)=" << ff(matrix(y), ud1, ud2) << endl << "f(z)=" << ff(matrix(z), ud1, ud2) << endl;
		} while (ff(matrix(z), ud1, ud2) > ff(matrix(y), ud1, ud2));

		// x(i-1)
		z = x0 + pow(alpha, (i - 2)) * d;
		// x(i+1)
		y = x0 + pow(alpha, i) * d;

		cout << endl << endl << "y=" << y << endl << "z=" << z << endl;
		if (y>z)
		{
			p[0] = z;
			p[1] = y;
			return p;
		}
		p[0] = y;
		p[1] = z;
		return p;
	}
	catch (string ex_info)
	{
		throw ("double* expansion(...):\n" + ex_info);
	}
}

solution fib(matrix(*ff)(matrix, matrix, matrix), double a, double b, double epsilon, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		
		double leftEnd = a;
		double rightEnd = b;
		double leftMiddle;
		double rightMiddle;

		std::vector<int> fibonacciList = std::vector<int>{1, 2};
		double fibonacciBound = (b - a) / epsilon;
		
		while (fibonacciList.back() < fibonacciBound)
		{
			fibonacciList.push_back(fibonacciList[fibonacciList.size() - 2] + fibonacciList[fibonacciList.size() - 1]);
		}		

		for (int i = fibonacciList.size() - 2; i >= 0; i--) {
			rightMiddle = leftEnd + (rightEnd - leftEnd)*fibonacciList[i]/fibonacciList[i+1];
			leftMiddle = leftEnd + rightEnd - rightMiddle;
			cout << leftEnd << "     " << leftMiddle << "     " << rightMiddle << "     " << rightEnd << endl;
			if (ff(leftMiddle, ud1, ud2) < ff(rightMiddle, ud1, ud2)) {
				rightEnd = rightMiddle;
				
			}
			else
			{
				leftEnd = leftMiddle;
			}
		}
		Xopt = solution(leftMiddle);
		//cout << "leftEnd = " << leftEnd << endl << "leftMidlle = " << leftMiddle << endl << "rightMiddle =" << rightMiddle << endl << "rightEnd =" << rightEnd << endl;
			return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution fib(...):\n" + ex_info);
	}

}

solution lag(matrix(*ff)(matrix, matrix, matrix), double a, double b, double epsilon, double gamma, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution lag(...):\n" + ex_info);
	}
}

solution HJ(matrix(*ff)(matrix, matrix, matrix), matrix x0, double s, double alpha, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution HJ(...):\n" + ex_info);
	}
}

solution HJ_trial(matrix(*ff)(matrix, matrix, matrix), solution XB, double s, matrix ud1, matrix ud2)
{
	try
	{
		//Tu wpisz kod funkcji

		return XB;
	}
	catch (string ex_info)
	{
		throw ("solution HJ_trial(...):\n" + ex_info);
	}
}

solution Rosen(matrix(*ff)(matrix, matrix, matrix), matrix x0, matrix s0, double alpha, double beta, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution Rosen(...):\n" + ex_info);
	}
}

solution pen(matrix(*ff)(matrix, matrix, matrix), matrix x0, double c, double dc, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try {
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution pen(...):\n" + ex_info);
	}
}

solution sym_NM(matrix(*ff)(matrix, matrix, matrix), matrix x0, double s, double alpha, double beta, double gamma, double delta, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution sym_NM(...):\n" + ex_info);
	}
}

solution SD(matrix(*ff)(matrix, matrix, matrix), matrix(*gf)(matrix, matrix, matrix), matrix x0, double h0, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution SD(...):\n" + ex_info);
	}
}

solution CG(matrix(*ff)(matrix, matrix, matrix), matrix(*gf)(matrix, matrix, matrix), matrix x0, double h0, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution CG(...):\n" + ex_info);
	}
}

solution Newton(matrix(*ff)(matrix, matrix, matrix), matrix(*gf)(matrix, matrix, matrix),
	matrix(*Hf)(matrix, matrix, matrix), matrix x0, double h0, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution Newton(...):\n" + ex_info);
	}
}

solution golden(matrix(*ff)(matrix, matrix, matrix), double a, double b, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		double leftEnd = a;
		double rightEnd = b;
		double leftMiddle;
		double rightMiddle;
		const double goldenRatio = (sqrt(5) - 1) / 2;
		int numbSteps = 0;

		while (rightEnd-leftEnd > epsilon)
		 {
			if (numbSteps >= Nmax)
			{
				throw "too many steps";
			}
			rightMiddle = leftEnd + (rightEnd - leftEnd) * goldenRatio;
			leftMiddle = leftEnd + rightEnd - rightMiddle;
			cout << leftEnd << "     " << leftMiddle << "     " << rightMiddle << "     " << rightEnd << endl;
			if (ff(leftMiddle, ud1, ud2) < ff(rightMiddle, ud1, ud2)) {
				rightEnd = rightMiddle;

			}
			else
			{
				leftEnd = leftMiddle;
			}numbSteps++;
		}

		Xopt = solution((leftMiddle + rightMiddle) / 2);
		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution golden(...):\n" + ex_info);
	}
}

solution EA(matrix(*ff)(matrix, matrix, matrix), int N, matrix limits, int mi, int lambda, matrix sigma0, double epsilon, int Nmax, matrix ud1, matrix ud2)
{
	try
	{
		solution Xopt;
		//Tu wpisz kod funkcji

		return Xopt;
	}
	catch (string ex_info)
	{
		throw ("solution EA(...):\n" + ex_info);
	}
}
