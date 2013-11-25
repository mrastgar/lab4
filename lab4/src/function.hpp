
//#include <sys/select.h>

//#include <string>

#include <iostream>

#include <fstream>

#include <sstream>

#include <iosfwd>

#include <time.h>

using namespace std;


#ifndef FUNCTIONS_HPP_

#define FUNCTIONS_HPP_


class physicaltest{

private:

int date;

char admin;

public:


physicaltest();

void appendToFile(int param);

void appendToFile(string param);

void getinfo();

};


class vitalsign : public physicaltest{

private:

int resp,puls;

double temp;

char gender;

public:



//constructors


void testbodytemp();

void testpulsrate();

void getbodytemp();

void getpulsrate();

vitalsign();
};


class bloodpressure : public physicaltest{

private:

double sys,dia;

public:

void getsystolic();

void getdiastolic();

void testbloodpressure();
bloodpressure();
};

class urin : public physicaltest{

private:

double ph,bloodcell;

public:

void getph();

void testph();

void getblood();

void testblood();
urin();

};


#endif /* FUNCTIONS_HPP_ */


