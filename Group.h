/*
 * Group.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef GROUP_H_
#define GROUP_H_

#include "Person.h"

namespace PCRM {
/*************************************************************************************/
class Group: public ID, public People {
public:
	//members
	Data data;
	//constructors
    Group();
    Group(Group *g);
    Group(People *pl);
    Group(People &pl);
    Group(Person &p1, Person &p2);
    Group(Person &p1, Person &p2, std::string n);
    virtual ~Group();
	//operators Person
    Group &operator+(Person &p);
    Group &operator-(Person &p);
    Group &operator+=(Person &p);
    Group &operator-=(Person &p);
	//operators People Equal
    Group &operator=(People &p);
    Group &operator=(People *p);
	//operators People
    Group &operator+(People &p);
    Group &operator-(People &p);
    Group &operator+=(People &p);
    Group &operator+=(People *p);
    //Group &operator-=(People &p);
    Group &operator-=(People *p);
    //operators Group
    Group &operator=(Group &g);
    Group &operator=(Group *g);
    Group &operator+(Group &g);
    Group &operator-(Group &g) ;
    Group &operator+=(Group &g);
    Group &operator+=(Group *g);
    Group &operator-=(Group &g);
    Group &operator-=(Group *g);
};
/********************************************/
} /* namespace PCRM */

#endif /* GROUP_H_ */
