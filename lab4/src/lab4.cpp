//============================================================================
// Name        : lab4.cpp
// Author      : maryam rastgar-jazi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : lab4.cpp
// Author      : maryam rastgar-jazi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <time.h>
#include <iostream>

#include <fstream>
#include <sys/select.h>B

#include <sstream>


#include <string.h>


#include <iosfwd>
#include"test.cpp"


#include "function.hpp"


using namespace std;


int main() {


int select;


int i;


ofstream myfile;


while(1){


physicaltest callFunc;


callFunc.getinfo();


vitalsign callbodytemp;


vitalsign callpulsrate;


bloodpressure callsystokic;


bloodpressure calldiastolic;


urin callph;


urin callblood;


}


//meniu



cout<<"please choose one of the following options\n what test do you want to do?";



cout << "1. body tempreture  test "<<endl;


cout << "2. resparation test"<<endl;


cout << "3. pulse rate test "<<endl;


cout << "4. blood pressure test "<<endl;


cout << "5. urine ph test"<<endl;


cout << "6. urine blood test "<<endl;


cout << "7. Add annotation "<<endl;


cout << "8. Exit the program" <<endl;



cin>>select;


myFile.open ("sessionLog.txt");


switch(select){


case 1:

callbodytemp.getbodytemp();

callbodytemp.testbodytemp();


//callFunc.appendToFile();


break;


case 2:

callresparationrate.getresparationrate();

callresparationrate.testresparationrate();


break;


case 3:

callpulsrate.getpulsrate();

callpulsrate.testpulsrate();


break;


case 4:

callsystolic.getsystolic();

callsystolic.testsystolic();

calldiastolic.getdiastolic();

calldiastolic.testdiastolic();


break;


case 5:

callurinph.geturinph();

callurinph.testurinph();


break;


case 6:

callurinblood.geturinblood();

callurinblood.testurinblood();


break;


case 7:


string annotation;


//The name of the person doing the annotation and the position that they are in should be written before the annotation, multiple people should be allowed to


//add annotations to the file.


cout << "write your annotation here";


cin >> annotation;


break;




case 8:


i =0;


break;


}



}


myFile.close();


return (0);

}
