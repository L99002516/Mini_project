#ifndef __CROP_H
#define __CROP_H

#include<string>
#include<cstdint>
#include<tuple>

struct func{
	double value1;
	double value2;
	double value3;
	double value4;
	double value5;
};
class Crop
{
protected:

	std::string crop_name;
	double production_06,production_07,production_08,production_09,production_10;
	double area_06,area_07,area_08,area_09,area_10;
	double yield_06,yield_07,yield_08,yield_09,yield_10;

public:
	Crop();
	Crop(std::string cropname,double production06,double production07,double production08,double production09,double production10,double area06,double area07,double area08,double area09,double area10,double yield06,double yield07,double yield08,double yield09,double yield10);
	double getmaxproduction();
	double getminproduction();
	double getmaxarea();
	double getminarea();
	double getmaxyield();
	double getminyield();
	func getproduction();
	func getarea();
	func getyield();
	void display();
};


#endif
