#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <string>

#include "car.cpp" //import the implement files
#define pass "123" //declare constant password key


using namespace std;

//create object for car and personal classes
car c;
personal p;

void login()
{
    char ch;

    string password;
    system("cls");
    cout << "\n\n";
    cout << "\t\t ===== USER PASSWORD VALIDATION =====";
    cout << "\n\n";
    cout << " Enter Your Password : ";

	while ((ch=_getch()) != 13)
	{
		cout << "*";
        password+=ch;
	}

	 if (password == pass)
	{
        cout << "\n\n Password is Right Access is Granted !!!";
        cout << "\n\n\n";
        system("pause");
     }
     else
	{
		cout << "\n\n\n";
        cout << "\t\t\t Password is Invalid Access is Denied !!!";
        cout << "\n\n\n";
        system("pause");
        login();
	}
 }; //Function for login system

void menu()
{
	int j;



	cout<<"\n =================================================";
	cout<<"\n ||                                             ||";
	cout<<"\n ||           Simple Loan Calculator            ||";
	cout<<"\n ||     ------------------------------------    ||";
	cout<<"\n =================================================";
	cout<<"\n 1.	Personal Loan calculator (Interest : 0.9 %)";
	cout<<"\n 2.	Car Loan calculator      (Interest : 0.4 %)";
	cout<<"\n 3.	About Simple Loan Calculator    ";
	cout<<"\n 4.	Terminate program and exit      ";
	cout<<"\n\n Please Enter Your Choice: ";
	cin>>j;

	//try & catch the right and wrong input from user
	if (j==1)
	{
		system("cls");
		p.input();		// call the personal input method
		p.calculate(); //  call the personal calculate method

	}
	else if (j==2)
	{
		system("cls");
		c.input();		// call the car input method
		c.calculate(); //  call the car calculate method
	}
	else if (j==3)
	{
		system("cls");
		cout<<" About \n-----------------------------";
		cout<<"\n Hi,this software was develop by us during semester 1 (1st year)";
		cout<<"\n at University Tun Hussein Onn Malaysia (UTHM) for full fill the";
		cout<<"\n BIC20904 Object Oriented Programming subject to solve the given";
		cout<<"\n study case";
		cout<<"\n\n\n";
		cout<<" Our team :";
		cout<<"\n > MUHAMAD ZULHELMI BIN MASEOT  ( Core System Engineer )";
		cout<<"\n > ROBBI NESPU BIN MOHAMAD @ MOHD MOKHTAR      ( M.I.S )";
		cout<<"\n > MUHAMAD HANAFI BIN SHAHARUDIN     ( Software Tester )";
		cout<<"\n > NURUL KAUSAR BINTI AMAN     ( Project Documentation )\n";


	}
	else if (j==4)
	{
		system("cls");
		exit(EXIT_SUCCESS); // exiting the program
	}
	else
	{
		system("cls"); // avoid wrong input from user
		cout<<"\n Bad input !, Please try again\n";
		menu();
	}
}; //Function for menu

void continueL()
{
	char in;
	cout<<"\n Do you want to try another loan calculation?";
	cout<<"\n Warning : the current calculation will be deleted!";
	cout<<"\n Press ( Y ) to continue or ( N ) to terminate program.";
	cout<<"\n Enter input : ";
	cin>>in;
	system("cls");

	//try & catch the right and wrong input from user
	if(in=='y'||in=='Y')
	{
		//call destructor
		c.~car();
		p.~personal();

		//loop program
		menu();
		continueL();
	}
	else if(in=='n'||in=='N')
	{
		//shut down the program
		cout<<"\n This program was created for solution of study case 1 - BIC20904";
		cout<<"\n Do NOT plagism our hard work, please request our permission first";
		cout<<"\n Thank you for using our application...... \n\n";
		exit;
	}
	else
	{
		//wrong input!
		cout<<"\n Oppps! Wrong input, try again!";
		continueL();
	}
}; // Function for loop the program or terminate

int main(void)
{
	login();				// call the login function
	system("cls");
	cout<<"\n Menu :";
	menu();					// call the menu function
	continueL();			// call the continueL function
	system("pause");

	return 0;
}
