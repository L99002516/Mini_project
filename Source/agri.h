#ifndef __AGRI_H
#define __AGRI_H

#include<iostream>
#include<string>
#include<cstdint>
#include"crop.h"
#include <list>
#include <iterator>

class Agriculture
{
protected:

	std::list <Crop> crop;

public:
	void addcrop(std::string name,double production06,double production07,double production08,double production09,double production10,double area06,double area07,double area08,double area09,double area10,double yield06,double yield07,double yield08,double yield09,double yield10);
	double highest_production(std::string cropname);
	double lowest_production(std::string cropname);
	double lowest_area(std::string cropname);
	double highest_area(std::string cropname);
	double highest_yield(std::string cropname);
	double lowest_yield(std::string cropname);
	int countAll();
};

#endif
