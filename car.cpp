#include <iostream>
#include <string>
#include "personal.cpp" //include the implement files

using namespace std;

class car:public person_data //inherit from person data class
{
	private:				//list of attributes
		float interest;
		string loan;
	public:					//list of method
		~car();				//declare desconstructor
		person_data l;		//create person object
		void input();
		void calculate();
};

car::~car()
{
	cout<<"\nClearing the memory for car loan....";
	system("cls");
};// desconstructor

void car::input()
{
	cout<<"\n CAR LOAN SECTION\n------------------------------\n";
	l.input();
};// input method

void car::calculate()
{  interest=0.4;
loan="Car";
	l.calculate(interest, loan);
};// calculate method
