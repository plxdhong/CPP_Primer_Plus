//***************************************************************************************************
//
//  C++ Template Program
//
//***************************************************************************************************
//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include "header.h"

using namespace std;


//********************************
//
//  Global Variable Declaration
//
//********************************





//********************************
//
//  Compound Type Declaration Section
//
//********************************





//********************************
//
//  Function Declaration Section
//
//********************************





//***************************************************************************************************
//
//  Main Program Section
//
//***************************************************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
	
	{
		//*  Variable Declaration
		Cow Blank = Cow();
	

		//*  Main Code
		Blank.ShowCow();
		Cow Bob = Cow("Bob", "Golf", 1000.0);
		Cow Jim = Cow();
	
	
		Bob.ShowCow();
		Jim.ShowCow();
	
		Jim = Bob;
		Jim.ShowCow();

		//*  Program End
		//   - wait until user is ready before terminating program
		//   - to allow the user to see the program results

		cout << endl << endl;
	
	}

	system("PAUSE");
	return 0;

}
//***************************************************************************************************
//
//  Functions Begin Here
//
//***************************************************************************************************

//********************************
//
//	Function #1
//

    //*  Variable Declaration

	//*  Main Code

	//*  Program End

//********************************
