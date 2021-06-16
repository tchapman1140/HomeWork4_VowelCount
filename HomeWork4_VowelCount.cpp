// ConsoleApplication1.cpp : Defines the entry point for the console application.
//Create a program that counts the number of vowels in a file.  
//Requirements:
//User must specify the name of the file(from the command line) to analyze when the program is run.If not an error should be generated.
//Use constants where appropriate.
//Use I / O(stream) manipulators to format the output so that it is identical to the example below
///Pass the name of the file to read in from the command line.

#include <iostream>
#include <string>
#include <fstream>	//for files
#include <iomanip>
using namespace std;

//constant variables
const string FILENAME = "Constitution_of_the_United_States.html";		//file we will be working with
//Dont forget to setup Visual Studio to pass the name of a file to your program so that you can debug your program from within Visual Studio. Properties.. debugging... arguments
//argc = # of things entered into command line
//argv = array that hold string vaulues of things that were entered on the command line
int main(int argc, char* argv[])	//This is how to run a program from the command line with arguments
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}

	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}

	//displaying a header
	cout << setw(80) << setfill('*') << "" << endl;		//this will print out 80 '*'
	cout << setw(55) << setfill('*') << right << "Welcome to my Letter Count Program" << left << setw(25) << setfill('*') << "" << endl;	//centering my text within 80 collumns
	cout << setw(80) << setfill('*') << "" << endl << endl;	//setw() = sets a number of collumns, setfill()= allows you to fill in thoes blank collumns when needed

	///////////////////////
	// Work here with open file.....
	///////////////////////

	inFile.close();

	//opening html file
	ifstream runFile;
	runFile.open(FILENAME);
	char c;	//looking at each character

	//initialing letter index so we can total them up
	int aIndex = 0;
	int eIndex = 0;
	int iIndex = 0;
	int oIndex = 0;
	int uIndex = 0;
	//extra for github
	int bIndex = 0;
	int cIndex = 0;
	int dIndex = 0;

	//while this is not the end of a file and and runFile is char
	//RunFile>>c means extract character out of file
	while (!runFile.eof() && runFile >> c) {	//starting while statment. Control structure
		if ((c == 'a') || (c == 'A')) { //if else starts
			aIndex++;
		}
		else if (c == 'e' || c == 'E') {
			eIndex++;
		}
		else if (c == 'i' || c == 'I') {
			iIndex++;
		}
		else if (c == 'O' || c == 'o') {
			oIndex++;
		}
		else if (c == 'u' || c == 'U') {
			uIndex++;
		}
		//Modify the Week 04 - Programming Assignment so that it counts 3 more letters and post the new modified source code (CPP file) to your GitHub account.
		//B/C/D
		else if (c == 'b' || c == 'B') {
			bIndex++;
		}
		else if (c == 'C' || c == 'c') {
			cIndex++;
		}
		else if (c == 'd' || c == 'D') {
			dIndex++;
		}
	}
	//THIS IS THE PATH TO RUN FILE ON COMMAND LINE!!!!!!!!!!
	//C:\Users\sliza\source\repos\HomeWork4_VowelCount\Debug>HomeWork4_VowelCount.exe Constitution_of_the_United_States.html 
	//.exe is how to run a file on the command line

	//Displaying to user.............
	cout << "Analyzing File \'Constitution_of_the_United_States.html\'..." << endl << endl;

	cout << setw(50) << setfill(' ') << right << "First, Lets Count Vowels!" << left << setw(25) << endl;
	cout << setw(50) << setfill('.') << left << "The number of A's: " << setw(25) << right << "" << aIndex << endl;	
	cout << setw(50) << setfill('.') << left << "The number of E's: " << setw(25) << right << "" << eIndex << endl;
	cout << setw(50) << setfill('.') << left << "The number of I's: " << setw(25) << right << "" << iIndex << endl;
	cout << setw(50) << setfill('.') << left << "The number of O's: " << setw(25) << right << "" << oIndex << endl;
	cout << setw(50) << setfill('.') << left << "The number of U's: " << setw(25) << right << "" << uIndex << endl;

	//EXTRA B C D
	cout << setw(45) << setfill(' ') << right << "More letters!" <<  endl;
	cout << setw(50) << setfill('.') << left << "The number of B's: " << setw(25) << right << "" << bIndex << endl;
	cout << setw(50) << setfill('.') << left << "The number of C's: " << setw(25) << right << "" << cIndex << endl;
	cout << setw(50) << setfill('.') << left << "The number of D's: " << setw(25) << right << "" << dIndex << endl;
	cout << endl;
	//total vowel count
	cout << setw(55) << setfill('.') << left << "The vowel count is: " << setw(20) << right << "" << (aIndex + eIndex + iIndex + oIndex +uIndex + bIndex + cIndex + dIndex) << endl;





}

