// lab-1.cpp : Defines the entry point for the console application.
//okay this lab is to count the number of numbers in a text file or something.

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
    //display message if opening file fails
	if (infile.fail()) 
		{
			cout << "Couldn't open your file. Bye." << endl;
		}
	else
		{
		//int to hold number of numbers counted
		int numberCount = 0;
        //doubles to hold first and last two numbers
        double numOne, numTwo, numThree, numFour;
            //initialize them to zero so things don't point to whatever, just to be safe
            numOne = numTwo = numThree = numFour = 0;
			while (infile.get())
			{
				double x = infile.get();
				if (!isspace(x))
				{
					numberCount = numberCount + 1;
					cout << infile.get() << endl;
                    if (numberCount == 1)
                    {
                        numOne = x;
                    }

				}
                //tell user when file is done being read and get out of this while loop, maybe not necessary,
                // I can't remember what I was thinking exactly when I did this part but it works so I'll leave it
                // for now
				if (infile.eof())
				{
					cout << "End of file reached.\n";
					break;
				}
			}
        //tell the people what the results are
		cout << "Number of numbers in file: " << numberCount << endl;
		cout << "First two numbers: " << numOne << ", " << numTwo << endl;
		cout << "Last two numbers: " << numThree << ", " << numFour << endl;
		}
	//close the file when you're done with it
	infile.close();
	//make program stay open at the end until you hit something so can actually see what happened :/
	system("PAUSE");
	return 0;
}

