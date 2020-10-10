#include<iostream>
#include<string>
#include "crop.h"

Crop::Crop():crop_name(""),production_06(0),production_07(0),production_08(0),production_09(0),production_10(0),area_06(0),area_07(0),area_08(0),area_09(0),area_10(0),yield_06(0),yield_07(0),yield_08(0),yield_09(0),yield_10(0){}
Crop::Crop(std::string cropname,double production06,double production07,double production08,double production09,double production10,double area06,double area07,double area08,double area09,double area10,double yield06,double yield07,double yield08,double yield09,double yield10):crop_name(cropname),production_06(production06),production_07(production07),production_08(production08),production_09(production09),production_10(production10),area_06(area06),area_07(area07),area_08(area08),area_09(area09),area_10(area10),yield_06(yield06),yield_07(yield07),yield_08(yield08),yield_09(yield09),yield_10(yield10){}
double Crop::getmaxproduction(){
	double arr[5]={production_06,production_07,production_08,production_09,production_10};
	double max=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			max=arr[i+1];
		}
		else{
			max=arr[i];
		}
	}
	return max;
}
double Crop::getminproduction(){
	double arr[5]={production_06,production_07,production_08,production_09,production_10};
	double min=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			min=arr[i];
		}
		else{
			min=arr[i+1];
		}
	}
	return min;
}
double Crop::getmaxarea(){
	double arr[5]={area_06,area_07,area_08,area_09,area_10};
	double max=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			max=arr[i+1];
		}
		else{
			max=arr[i];
		}
	}
	return max;
}
double Crop::getminarea(){
	double arr[5]={area_06,area_07,area_08,area_09,area_10};
	double min=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			min=arr[i];
		}
		else{
			min=arr[i+1];
		}
	}
	return min;
}
double Crop::getmaxyield(){
	double arr[5]={yield_06,yield_07,yield_08,yield_09,yield_10};
	double max=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			max=arr[i+1];
		}
		else{
			max=arr[i];
		}
	}
	return max;
}
double Crop::getminyield(){
	double arr[5]={yield_06,yield_07,yield_08,yield_09,yield_10};
	double min=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			min=arr[i];
		}
		else{
			min=arr[i+1];
		}
	}
	return min;
}
func Crop::getproduction(){
	func production={production_06,production_07,production_08,production_09,production_10};
	return production;
}
func Crop::getarea(){
	func area={area_06,area_07,area_08,area_09,area_10};
	return area;
}
func Crop::getyield(){
	func yield={yield_06,yield_07,yield_08,yield_09,yield_10};
	return yield;
}
void Crop::display()
{
	std::cout<<crop_name<<"\n";
}

