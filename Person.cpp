/*
 * Person.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Person.h"

namespace PCRM {
/********************************************************/
Person::Person(): data(nullptr) {
	//std::cout<<"Person Constructor"<<std::endl;
}
/********************************************************/
Person::Person(std::string n): data(nullptr) {
	name = n;
	//std::cout<<"Person Constructor, Name: "<<name<<std::endl;
}
/********************************************************/
Person::~Person(){
	//std::cout<<"Person Deconstructor!!!"<<std::endl;
}
/********************************************************/
People &Person::operator+(Person &p) const {
	People* people = new People();
	people->list.push_back(p);
	people->list.push_back(*this);
	return *people;
}
/********************************************************/
void Person::Print() {
	std::cout<<"Name: "<<name<<" ID: "<<id<<std::endl;
}
/********************************************************/
} /* namespace PCRM_Person */
/********************************************************/
