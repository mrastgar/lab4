/*
/*
 * test.cpp
 *
 *  Created on: Nov 25, 2013
 *      Author: mrastgar
 */

//#include <sys/select.h>
#include <iostream>

#include <fstream>

#include <sstream>

#include <string.h>

#include <iosfwd>

#include "lab4.cpp"

#include"function.hpp"

using namespace std;


// constructors


physicaltest::physicaltest(){

admin=unknown;

date=0;

}


vitalsign::vitalsign(){

resp=0;

temp=0.00;

puls=0;

gender=unknown;


}


bloodpressure::bloodpressure(){

sys=0.00;
dia=0.00;

}


urin::urin(){

ph=0;

bloodcell=0;

}

//file append

//?????


void physicaltest::getinfo(){


cout<<"please enter one of the following\n"<<endl;


cout<<"1.Doctor\n"<<endl;


cout<<"2.nurse\n"<<endl;


cout<<"3.pathologist\n"<<endl;


cin>>admin;


cout<<"enter the date";


cin>>date;


}


void vitalsign::getbodytemp(){


cout <<"please enter the body tempreture";


cin>>temp;


}


void vitalsign::testbodytemp(){


if (temp<=37.2|temp>=36.5){


cout<< "the body temresture is normal";


}


else if (temp>=37.2){


cout<<"the paitent have fever";


}


else if(temp<=36.5){


cout<<"the body tempreture is lower than normal";


}


}


void vitalsign::getpulsrate(){


cout<<"what is the pulse rate of the patient for one minute\n";


cin>>puls;


}


void vitalsign::testpulsrate(){


if (puls<=100|pulse>=60){


cout<<"the pulse rate is normal\n";


}


else{


cout<<"patient doesnt have a normal pulse rate\n";


}


}



bloodpressure::getsystolic(){


cout<<"please enter the systolic blood pressure";


cin>> sys;


}


void bloodpressure::getdiastolic(){


cout<<"please enter the diastolic blood pressure";


cin>> dia;


}


void bloodpressure::testbloodpressure(){


if(sys>=140 && dia>=90){


cout<<"the paitent has a high blood pressure";


}


else if(sys<=120 && dia<=80){


cout<<"the blood pressure is normal";


}


}


void urin::getph(){


cout<<"please enter the ph of the urin";


cin>>ph;


}


void urin::testph(){


if (ph>=5|ph<=6){


cout<<"the ph is normal";


}


urin::getblood(){


cout<<"what is the number of redblood cells n the urin?";


cin>>bloodcell;

}


urin::testblood(){


if(bloodcell>0){


cout<<"there is blood in the urin/n test is not normal";


}


}
} * test.cpp
 *
 *  Created on: Nov 25, 2013
 *      Author: mrastgar
 */




