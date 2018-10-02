// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAtLast(3.33);  //testing last addition
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cows.insertAtLast(8.88);  //testing last addition
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;


	cout << "sum of cows " << cows.sum() << endl;  //testing sum
	cout << "sum of horses " << horses.sum() << endl;  //testing sum

	List pigs;


	pigs.insertAsFirst(10.5432);
	pigs.insertAsFirst(12.231);
	pigs.insertAtLast(14.44);  //testing last addition
	pigs.insertAtLast(16.334);  //testing last addition
	pigs.insertAsFirst(1.3433);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;


	cout << "sum of pigs " << pigs.sum() << endl;  //testing sum
	cout << "sum of horses " << horses.sum() << endl;  //testing sum
	cout << "sum of cows " << cows.sum() << endl;  //testing sum

	cout << "size of pigs " << pigs.size() << endl;  //testing size
	cout << "size of horses " << horses.size() << endl;  //testing size
	cout << "size of cows " << cows.size() << endl;  //testing size
	
	cout << "End of code" << endl;
	return 0;
}

