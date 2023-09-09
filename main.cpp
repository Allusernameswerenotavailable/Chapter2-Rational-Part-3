#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include "input.h"
#include "PseudoRandom.h"
using namespace std;

int menuOption();
void Quadratic();
void Pseudo();
void rational();


int main()
{


	do
	{

		switch (menuOption())
		{

		case 0: exit(0); break;
		case 1: Quadratic(); break;
		case 2: Pseudo(); break;
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

void Quadratic()
{


	do
	{

		system("cls");


		cout << "\n" << string(80, char(205));
		cout << "\n1> QUADRATIC MENU";
		cout << "\n" << string(80, char(205));
		cout << "\nD. DISPLAY THE EXPRESSION";
		cout << "\nA. SET COEFFICIENT (A)";
		cout << "\nB. SET COEFFICENT (B)";
		cout << "\nC. SET COEFFICIENT (C)";
		cout << "\nE. GET EVALUATION (X)";
		cout << "\nN. GET THE NUMBER OF REAL ROOTS";
		cout << "\nR. GET REAL ROOT(S)";
		cout << "\n" << string(80, char(205));
		cout << "\nX> RETURN TO MAIN MENU";
		cout << "\n" << string(80, char(205));

		switch (inputChar("\nOPTION: ", static_cast<string>("ABCDENRX")))
		{







		}






	} while (true);



}

void Pseudo()
{

	PseudoRandom pseudo1;

	do
	{

		system("cls");


		cout << "\n" << string(80, char(205));
		cout << "\n2> PSUEDORANDOM MENU";
		cout << "\n" << string(80, char(205));
		cout << "\nA. GET SEED";
		cout << "\nB. SET SEED";
		cout << "\nC. GET MULTIPLIER";
		cout << "\nD. SET MULTIPLIER";
		cout << "\nE. GET MODULUS";
		cout << "\nF. SET MODULUS";
		cout << "\nG. GET INCREMENT";
		cout << "\nH. SET INCREMENT";
		cout << "\nI. GET NEXT NUMBER";
		cout << "\nJ. GET INDIRECT NEXT NUMBER";
		cout << "\nK. RUN EXPERIMENT WITH DIFFERENT VALUES (MULTIPLIER, INCREMENT, MODULUS)";
		cout << "\n" << string(80, char(205));
		cout << "\nX> RETURN TO MAIN MENU";
		cout << "\n" << string(80, char(205));

		switch (inputChar("\nOPTION: ", static_cast<string>("ABCDEFGHIJKX")))
		{

		case 'A':
		{

			cout << endl;

			cout << "\nSEED: " << pseudo1.getSeed();

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");


		}
		break;

		case 'B':
		{

			cout << endl;

			pseudo1.setSeed(inputInteger("\nENTER A NEW SEED: ", true));

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;

		case 'C':
		{

		
			cout << endl;

			cout << "\nMULTIPLIER: " << pseudo1.getMultiplier();

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;

		case 'D':
		{
		
			cout << endl;

			pseudo1.setMultiplier(inputInteger("\nENTER A NEW MULTIPLIER: ", true));

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");
		
		}
		break;

		case 'E':
		{

			cout << endl;

			cout << "\nMODULUS: " << pseudo1.getModulus();

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;

		case 'F':
		{

			cout << endl;

			pseudo1.setModulus(inputInteger("\nENTER A NEW MODULUS: ", true));

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");


		}
		break;

		case 'G':
		{
		
			cout << endl;

			cout << "\nINCREMENT: " << pseudo1.getIncrement();

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		
		}
		break;

		case 'H':
		{

			cout << endl;

			pseudo1.setIncrement(inputInteger("\nENTER A NEW INCREMENT: ", true));

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");
		
		
		}
		break;

		case 'I':
		{

			cout << endl;
		
			pseudo1.nextSeed();

			cout << "THE NEW SEED: " << pseudo1.getSeed();

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");
		
		}
		break;

		case 'J':
		{
		
		
		}
		break;

		case 'X':
		{
			
			return;
		
		}
		break;



		}






	} while (true);



}

void rational()
{

	//Rational r1;

	//Rational r2;


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


			

		}
		break;


		case 'B':
		{

			


		}
		break;

		case 'C':
		{

			

			cout << endl;
			cout << endl;

			system("pause");

			system("cls");

		}
		break;

		case 'D':
		{

			

			cout << endl;
			cout << endl;


			system("pause");

			system("cls");

		}
		break;

		case 'E':
		{


			


		}
		break;

		case 'F':
		{

			


		}
		break;

		case 'G':
		{

			


		}
		break;


		case 'H':
		{

			


		}
		break;

		case 'I':
		{


			

			cout << endl;

			system("pause");

			system("cls");


		}
		break;

		case 'J':
		{

			

			cout << endl;

			system("pause");

			system("cls");

		}
		break;


		}


	} while (true);


}