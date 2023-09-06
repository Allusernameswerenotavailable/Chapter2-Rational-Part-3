#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include "input.h"
#include "Rational.h"
using namespace std;

int menuOption();
void rational();

int main()
{


	do
	{

		switch (menuOption())
		{

		case 0: exit(0); break;
		//case 1: ASCII_to_TEXT(); break;
		//case 2: BASE(); break;
		case 3: rational(); break;


		}

	} while (true);

}


int menuOption()
{

	system("cls");


	cout << "\n" << string(80, char(205));
	cout << "\nCMPR131 - CHAPTER 2 ADT ASSIGNMENTS BY OSCAR GALLARDO (09/05/2023)";
	cout << "\n" << string(80, char(205));
	cout << "\n1> QUADRATIC EXPRESSION";
	cout << "\n2> PSUEUDORANDOM";
	cout << "\n3> RATIONAL NUMBER";
	cout << "\n" << string(80, char(205));
	cout << "\n0> EXIT";
	cout << "\n" << string(80, char(205));


	return(inputInteger("\nOPTION: ", 0, 3));

	system("pause");


}

void rational()
{

	Rational r1;

	Rational r2;


	do
	{

		system("cls");


		cout << "\n" << string(80, char(205));
		cout << "\n3> RATIONAL NUMBER MENU";
		cout << "\n" << string(80, char(205));
		cout << "\nA. ENTER VALUES OF RATIONAL NUMBER R1";
		cout << "\nB. DISPLAY R1";
		cout << "\nC. ENTER VALUES FOR RATIONAL NUMBER R2";
		cout << "\nD. DISPLAY R2";
		cout << "\nE. MULTIPLICATION OF 2 RATIONAL NUMBERS (R1*R2)";
		cout << "\nF. DIVISION OF 2 RATIONAL NUMBERS (R1/R2)";
		cout << "\nG. ADDITION OF 2 RATIONAL NUMBERS (R1+R2)";
		cout << "\nH. SUBTRACTION OF 2 RATIONAL NUMBERS (R1-R2)";
		cout << "\nI. (R1 == R2)";
		cout << "\nJ. (R1 < R2)";
		cout << "\n" << string(80, char(205));
		cout << "\nX> RETURN TO MAIN MENU";
		cout << "\n" << string(80, char(205));


		switch (inputChar("\nOPTION: ", static_cast<string>("ABCDEFGHIJX")))
		{

		case 'X':
		{

			return;

		}
		break;

		case 'A':
		{


			try
			{

				r1.setNumerator(inputInteger("\nENTER YOUR NUMERATOR: ", true));

				cout << endl;

				r1.setDenominator(inputInteger("\nENTER YOUR DENOMINATOR: ", true));
			
			}
			catch(Rational::ZeroDenominator)
			{

				cout << "\nERROR: CANNOT ADD A RATIONAL NUMBER WITH A ZERO DENOMINATOR!";
			
			}

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		}
		break;


		case 'B':
		{

			cout << "\nRATIONAL NUMBER R1: " << r1.toString();

			cout << endl;
			cout << endl;


			system("pause");

			system("cls");


		}
		break;

		case 'C':
		{

			try
			{

				r2.setNumerator(inputInteger("\nENTER YOUR NUMERATOR: ", true));

				cout << endl;

				r2.setDenominator(inputInteger("\nENTER YOUR DENOMINATOR: ", true));

			}
			catch (Rational::ZeroDenominator)
			{

				cout << "\nERROR: CANNOT ADD A RATIONAL NUMBER WITH A ZERO DENOMINATOR!";

			}

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");
			
		}
		break;

		case 'D':
		{

			cout << "\nRATIONAL NUMBER R1: " << r2.toString();

			cout << endl;
			cout << endl;


			system("pause");

			system("cls");

		}
		break;

		case 'E':
		{


			Rational r3;

			r3 = r1 * r2;

			cout << "\nMULTIPLICATION OF RATIONAL NUMBERS(R1 * R2): " << r3.toString();

			cout << endl;

			cout << endl;

			system("pause");

			system("cls");
		
		
		}
		break;

		case 'F':
		{
			
			Rational r4;

			r4 = r1 / r2;

			cout << "\nDIVISION OF RATIONAL NUMBERS(R1 / R2): " << r4.toString();

			cout << endl;

			cout << endl;

			system("pause");

			system("cls");
		
		
		}
		break;

		case 'G':
		{
		
			Rational r5;

			r5 = r1 + r2;

			cout << "\nDIVISION OF RATIONAL NUMBERS(R1 / R2): " << r5.toString();

			cout << endl;

			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;


		case 'H':
		{

			Rational r7;

			r7 = r1 - r2;

			cout << "\nDIVISION OF RATIONAL NUMBERS(R1 / R2): " << r7.toString();

			cout << endl;

			cout << endl;

			system("pause");

			system("cls");
		
		
		}
		break;

		case 'I':
		{

		
			if(r1 == r2)
			{

				cout << endl;
				
				cout << "IS R1 == R2: TRUE!!";
				
				cout << endl;
			
			}
			else
			{

				cout << endl;
				
				cout << "IS R1 == R2: FALSE!!";

				cout << endl;
			
			}

			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;

		case 'J':
		{

			if (r1 < r2)
			{
				cout << endl;

				cout << "IS R1 < R2: TRUE!!";

				cout << endl;

			}
			else
			{

				cout << endl;

				cout << "IS R1 < R2: FALSE!!";

				cout << endl;

			}

			cout << endl;

			system("pause");

			system("cls");
		
		}
		break;


		}


	} while (true);


}