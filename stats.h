#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

namespace Statistics
{
    
	template <typename T=double>	//default
	class Stat
   	 {
	   public:
		T average;
		T Max;
		T Min;
		
		Stat();//empty array
		Stat(T,T,T);
	};
	template<typename T=double>
	Stat ComputeStatistics(const std::vector<T>& );
}
//decalartion
	
	
    
	
