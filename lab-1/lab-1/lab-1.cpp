// lab-1.cpp : Defines the entry point for the console application.
//okay this lab is to count the number of numbers in a text file or something. We had this exact assignment back in 1030 so if I get really stuck I can go look in that book.
//First time using visual studio. Why are there so many options. 

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	//create char to hold name of file to be read
	char fileName[100];
	//get name of file to read
	cout << "Enter name of file:" << endl;
	//get file
	cin >> fileName;
	ifstream infile;
	//open file
	infile.open(fileName);
	if (infile.fail()) 
		{
			cout << "Couldn't open your file. Bye." << endl;
		}
	else
		{
		//int to hold number of numbers counted
		int numberCount = 0;
			while (infile.get())
			{
				double x = infile.get();
				if (isspace(x))
				{
					numberCount = numberCount + 1;
					cout << "Counting...\n";
				}
				if (infile.eof())
				{
					cout << "End of file reached.\n";
					break;
				}
			}
		cout << "Number of numbers in file: " << numberCount << endl;
		cout << "First two numbers: " << ", " << endl;
		cout << "Last two numbers: " <<  ", " << endl;
		}
	//close the file when you're done with it
	infile.close();
	//make program stay open at the end until you hit something so can actually see what happened :/
	system("PAUSE");
	return 0;
}

