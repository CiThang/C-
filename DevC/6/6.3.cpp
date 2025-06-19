#include <bits/stdc++.h>
using namespace std;
double getSales(string);
void findHighest(double,  double, double, double);
int main()
{
	double NE, SE, NW, SW;
	cout<<"\n This program determines which of a company's";
	cout<<"four divisions had the greatest sales. \n";
	
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");
	
	findHighest(NE, SE , NW , SW);
	return 0;
}
double getSales(string Division){
	double Sales;
	do
	{
		cout<<"What is the "<<Division;
		cout<<" division's amount must be greater than $0.00 \n";
	} while(!(Sales > 0.00));
	return Sales;
}

void findHighest(double NE , double SE, double NW, double SW)
{
	double Hightest;
	cout<<"\n The Hightest grossing division is the ";
	if (NE > SE && NE > NW && NE > SW)
	{
		Hightest = NE;
		cout<<"Northeast";
	}
	else if (NW > SE && NW>NE && NW > SW)
	{
		Hightest = NW;
		cout<<"Northwest";
	}
	else 
	{
		Hightest = SW;
		cout<<"Southwest";
	}
	cout<< fixed << showpoint << setprecision(2);
	cout<<"division with $"<<Hightest<<" in sales \n";
}









