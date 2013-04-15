#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> // to use system()

using namespace std;

class person_data
{	private:				//list of attributes
		float full_loan;
		float interest;
		float rate;
		int year;
		float installment;

	public:				 //list of method
		void input();
		void calculate(float,string);
}; // class for person data

void person_data::input()
{
	cout<<"\n *************************************************************";
	cout<<"\n * Guide :  Total loan amount                                *";
	cout<<"\n * =======                                                   *";
	cout<<"\n -> The valid loan must between RM10,000.00-200,000.00 only. *";
	cout<<"\n -> You total loan input must be in postive value.           *";
	cout<<"\n *************************************************************\n";
	cout<<" Enter the loan amount: RM ";
	cin>>full_loan;

	while(full_loan < 0)
	{
		system("cls");
		cout<<"\n You total loan input must be in postive value! ";
		cout<<"\n Enter the loan amount: RM ";
		cin>> full_loan;
	}

	while(full_loan < 10000 || full_loan > 200000)
	{
		cout<<"The valid loan must between RM10,000.00-200,000.00 only!";
		cout<<"\n Enter the loan amount: RM ";
		cin>> full_loan;
		while(full_loan < 0)
		{
			system("cls");
			cout<<"\n You total loan input must be in postive value! ";
			cout<<"\n Enter the loan amount: RM ";
			cin>> full_loan;
		}

	}
	system("cls");
	cout<<"\n *************************************************************";
	cout<<"\n * Guide : Year of loan                                      *";
	cout<<"\n * =======                                                   *";
	cout<<"\n -> The valid  year of loan must between 1 - 14 year(s) only.*";
	cout<<"\n -> You year of loan input must be in postive value.         *";
	cout<<"\n *************************************************************\n";
	cout<<"\nEnter the year of loan taken: ";
	cin>>year;

	while(year < 0)
	{
		system("cls");
		cout<<"\n You year of loan input must be in postive value! ";
		cout<<"\n Enter the year of loan taken: ";
		cin>> year;
	}

	while(year < 1|| year > 14)
	{
		cout<<" The valid  year of loan must between 1 - 14 year(s) only!";
		cout<<"\n Enter the year of loan taken: ";
		cin>> year;
		while(year < 0)
		{
			system("cls");
			cout<<"\n You year of loan input must be in postive value! ";
			cout<<"\n Enter the year of loan taken: ";
			cin>> year;
		}

	}
}; // input method

void person_data::calculate(float interest, string loan)
{
	system("cls");
	cout<<" Output data :";
	rate=(full_loan/(year*12))*interest;
	installment=(full_loan/(year*12))+rate;
	cout.setf(ios::fixed);
	cout<<"\n *************************************************************";
	cout<<"\n * Type of loan      : "<<loan;
	cout<<"\n * ==============                                             ";
	cout<<"\n -> Total loan amout : RM"<< setprecision(2)<<full_loan;
	cout<<"\n -> Year(s) of loan  : "<<year;
	cout<<"\n -> Interest rate    : "<<interest;
	cout<<"\n #  Monthly payment  : RM "<< setprecision(2)<<installment;
	cout<<"\n *************************************************************\n";


}; // calculate method
