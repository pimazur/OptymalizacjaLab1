/*********************************************
Kod stanowi uzupe�nienie materia��w do �wicze�
w ramach przedmiotu metody optymalizacji.
Kod udost�pniony na licencji CC BY-SA 3.0
Autor: dr in�. �ukasz Sztangret
Katedra Informatyki Stosowanej i Modelowania
Akademia G�rniczo-Hutnicza
*********************************************/

#include"opt_alg.h"

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();

int main()
{
	try
	{
		lab1();
		//lab2();
		//golden(funkcjaCelu, -100.0, 100.0, 0.1, 100);
	}
	catch (string EX_INFO)
	{
		cerr << "ERROR:\n";
		cerr << EX_INFO << endl << endl;
	}
	system("pause");
	return 0;
}

void lab1()
{
	double* d = expansion(funkcjaCelu, -30.0, 3.0, 1.5, 1000);
}

void lab2()
{
	fib(funkcjaCelu, -100.0, 100.0, 0.1);
}

void lab3()
{

}

void lab4()
{

}

void lab5()
{

}

