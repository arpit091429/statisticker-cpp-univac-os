#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics
{
    
	//template <typename T=double>	//default
	class Stats
   	 {
	   public:
		//T average;
		//T Max;
		//T Min;
		float average;
		float Max;
		float Min;
		Stats();//empty array
		Stats(float avg,float max,float min);
	};
	//template<typename T=double>
	//Stat ComputeStatistics(const std::vector<T>& );
	Stats ComputeStatistics(const std::vector<float>&);
}
//decalartion
	
	
    
	
