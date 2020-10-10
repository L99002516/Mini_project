#include "crop.h"
#include "crop.cpp"
#include "agri.h"
#include "agri.cpp"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;
#include <list>
#include <iterator>

namespace {

class cropdbtest : public ::testing::Test {

protected:
  void SetUp() 
  { 
  
  		std::list<string> res;
     		std::list<string> ::iterator iter;
     		std::string cropname;
     		double production06,production07,production08,production09,production10;
		double area06,area07,area08,area09,area10;
		double yield06,yield07,yield08,yield09,yield10;
    		std::string S, T;
    		fstream fin;
    		int count=1;
    		fin.open("data.csv", ios::in);
    		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		iter=res.begin();
   		 ++iter;
    		for(;iter!=res.end();++iter)
    		{
    			//std::cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			std::string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
        			{
        				case 1:
        					cropname=substr;
        					break;
        				case 2:
        					production06=stoi(substr);
        					break;
					case 3:
        					production07=stoi(substr);
        					break;
					case 4:
        					production08=stoi(substr);
        					break;
					case 5:
        					production09=stoi(substr);
        					break;
					case 6:
        					production10=stoi(substr);
        					break;
					case 7:
        					area06=stoi(substr);
        					break;
					case 8:
        					area07=stoi(substr);
        					break;
					case 9:
        					area08=stoi(substr);
        					break;
					case 10:
        					area09=stoi(substr);
        					break;
					case 11:
        					area10=stoi(substr);
        					break;
        				case 12:
        					yield06=stoi(substr);
        					break;
					case 13:
        					yield07=stoi(substr);
        					break;
					case 14:
        					yield08=stoi(substr);
        					break;
					case 15:
        					yield09=stoi(substr);
        					break;
					case 16:
        					yield10=stoi(substr);
        				c.addcrop(cropname,production06,production07,production08,production09,production10,area06,area07,area08,area09,area10,yield06,yield07,yield08,yield09,yield10);
        						cropname="";production06=0.0;production07=0.0;production08=0.0;production09=0.0;production10=0.0;
						area06=0.0;area07=0.0;area08=0.0;area09=0.0;area10=0.0;
        					yield06=0.0;yield07=0.0;yield08=0.0;yield09=0.0;yield10=0.0;count=0;
						break;
        			
        			}
        			++count;
        			
    			} 
  		}
    
  }
  void TearDown() {}
  Agriculture c;
};

TEST_F(cropdbtest, DefaultConstructor1){
c.addcrop("avacodo",1000,2000,3000,2800,6700,100,120,150,140,180,10,11,12,13,14);
EXPECT_EQ(56,c.countAll());
}
TEST_F(cropdbtest, highestproduction){
EXPECT_DOUBLE_EQ(213,c.highest_production("Rice"));
EXPECT_EQ(55,c.countAll());
}
TEST_F(cropdbtest, lowestproduction){
EXPECT_DOUBLE_EQ(191,c.lowest_production("Rice"));
EXPECT_EQ(55,c.countAll());
}
TEST_F(cropdbtest, highestarea){
EXPECT_DOUBLE_EQ(175,c.highest_area("Rice"));
EXPECT_EQ(55,c.countAll());
}
TEST_F(cropdbtest, lowestarea){
EXPECT_DOUBLE_EQ(161,c.lowest_area("Rice"));
EXPECT_EQ(55,c.countAll());
}
TEST_F(cropdbtest, highestyield){
EXPECT_DOUBLE_EQ(125,c.highest_yield("Rice"));
EXPECT_EQ(55,c.countAll());
}
TEST_F(cropdbtest, lowestyield){
EXPECT_DOUBLE_EQ(118,c.lowest_yield("Rice"));
EXPECT_EQ(55,c.countAll());
}
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } // namespace

