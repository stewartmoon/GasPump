/* Author: Stewart Moon
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 10/17/2017
Page & Problem #: Page 278, #4
Description: This program, counts the total amount of gas dispended, the cost, and the cost per liter.
This program also has a built in control, and allows the user to stop the pump at any time by pressing the left
Mouse click.  the user can then continue to pump gas by pressing enter on the keyboard.
*/
#include <iomanip>
#include <iostream>
using namespace std;

//Declare Globabl Constants
const double COSTPERGALLON = 2.25;

//Declare Class GasPump
class GasPump
{
public:

	void Calculate_Values(double, double);
	//Pre-condition: two double variables are already defined and initlialized
	//Post-condition: No values are returned.  The function calculates and outputs the results

	//Declare class variables;
	double amountdispensed;
	double amountcharged;
	double cost;
};


int main()
{
	//Declare variables
	GasPump Gas;
	int n = 0;
	double gallons = 0;
	double cost = 0;

	//Output for user to control program
	cout << "In order to stop the pump, click with the mouse.  If you wish to continue pumping gas hit enter. " << endl;

	//Continually Loop calling the function Calculate_Values to get output as variables increment up
	while (n != 1)
	{
		Gas.Calculate_Values(gallons, cost);
		gallons += 0.01;
	}
	
return 0;
}

//Description:This function uses the class GasPump,calculates the metrics of pumping gas, and then outputs the results onto the same line
void GasPump::Calculate_Values(double gallons, double cost)
{
			
		//Calculate cost of Gas
		cost = gallons*COSTPERGALLON;
		
		//Output cost per gallon, # of gallons, and total cost of gas on one single line.
		cout << "\r" << "Cost Per Gallon: $"<<COSTPERGALLON<<"   Total Gallons: " << setprecision(4) << gallons << "   Total Cost: $" << setprecision(4) << cost;
}