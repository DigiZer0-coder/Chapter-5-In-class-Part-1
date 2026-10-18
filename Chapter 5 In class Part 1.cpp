#include <iostream>
#include <string>
using namespace std;

int main()
{
	string operation;
	cout << "Choose an operation: 1.Add 2.Subtract 3.Multiply 4.Divide 5.End" << endl;
	cout << "Enter your choice by typing the operation name: ";
	cin >> operation;

	if (operation == "Add")
	{
		cout << "You chose to Add." << endl;
	}
	else if (operation == "Subtract")
	{
		cout << "You chose to Subtract." << endl;
	}
	else if (operation == "Multiply")
	{
		cout << "You chose to Multiply." << endl;
	}
	else if (operation == "Divide")
	{
		cout << "You chose to Divide." << endl;
	}
	
	if (operation != "Add" && operation != "Subtract" && operation != "Multiply" && operation != "Divide")
	{
		cout << "Invalid operation. Please choose a valid operation." << endl;
		return 0;
	}
	
	while (operation != "End")
	{
		cout << "Choose an operation: 1. Add 2. Subtract 3. Multiply 4. Divide 5. End" << endl;
		cin >> operation;

		if (operation == "Add")
		{
			cout << "You chose to Add." << endl;
		}
		
		else if (operation == "Subtract")
		{
			cout << "You chose to Subtract." << endl;
		}
		
		else if (operation == "Multiply")
		{
			cout << "You chose to Multiply." << endl;
		}
		
		else if (operation == "Divide")
		{
			cout << "You chose to Divide." << endl;
		}

		if (operation != "Add" && operation != "Subtract" && operation != "Multiply" && operation != "Divide" && operation != "End")
		{
			cout << "Invalid operation. Please choose a valid operation." << endl;
			break;
		}

	}
}
