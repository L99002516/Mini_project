#include<iostream>
#include<string>
#include <list>
#include <iterator>
#include"crop.h"
#include"agri.h"


void Agriculture::addcrop(std::string name,double production06,double production07,double production08,double production09,double production10,double area06,double area07,double area08,double area09,double area10,double yield06,double yield07,double yield08,double yield09,double yield10){
crop.push_back(Crop(name,production06,production07,production08,production09,production10,area06,area07,area08,area09,area10,yield06,yield07,yield08,yield09,yield10));
}
double Agriculture:: highest_production(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto maxproduction  = iter->getmaxproduction();
    return maxproduction;

}
double Agriculture:: lowest_production(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto minproduction  = iter->getminproduction();
    iter++;
    for(;iter!=crop.end();++iter)
    {
        if(minproduction < iter->getminproduction())
        {
            minproduction = iter->getminproduction();
        }

    }
    return minproduction;

}
double Agriculture:: highest_area(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto maxarea  = iter->getmaxarea();
    iter++;
    for(;iter!=crop.end();++iter)
    {
        if(maxarea < iter->getmaxarea())
        {
            maxarea = iter->getmaxarea();
        }

    }
    return maxarea;

}
double Agriculture:: lowest_area(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto minarea  = iter->getminarea();
    iter++;
    for(;iter!=crop.end();++iter)
    {
        if(minarea < iter->getminarea())
        {
            minarea = iter->getminarea();
        }

    }
    return minarea;

}
double Agriculture:: lowest_yield(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto minyield = iter->getminyield();
    iter++;
    for(;iter!=crop.end();++iter)
    {
        if(minyield < iter->getminyield())
        {
            minyield = iter->getminyield();
        }

    }
    return minyield;

}
double Agriculture:: highest_yield(std::string cropname)
{
    std:: list<Crop> :: iterator iter = crop.begin();
    auto maxyield  = iter->getmaxyield();
    iter++;
    for(;iter!=crop.end();++iter)
    {
        if(maxyield < iter->getmaxyield())
        {
            maxyield = iter->getmaxyield();
        }

    }
    return maxyield;

}

int Agriculture:: countAll()
{
	
    std:: list<Crop> :: iterator iter ;/*
 for(iter=crop.begin();iter!=crop.end();++iter)
    
        std::cout<<&(*iter->display())<<"\n";*/
   return crop.size();
}

