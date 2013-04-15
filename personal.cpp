#include <iostream>
#include<string>
#include "loan.cpp" //include the implement files

using namespace std;

class personal:public person_data //inherit from person data class
{
	private:				//list of attributes
		float interest;
		string loan;
	public:					//list of method
		~personal();		//declare desconstructor
		person_data x;		//create person object
		void input();
		void calculate();
};

personal::~personal()
{
	cout<<"\nClearing the memory for personal loan....";
	system("cls");
}; // desconstructor

void personal::input()
{	cout<<"\n PERSONAL LOAN SECTION\n------------------------------\n";
	x.input(); 
}; // input method

void personal::calculate()
{  interest=0.9;
	loan = "Personal";
	x.calculate(interest,loan);	
}; // calculate method


