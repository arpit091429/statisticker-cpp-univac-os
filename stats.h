#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

namespace Statistics
{
    
	template <typename T>
	struct Stat
    {
		T average;
		T Max;
		T Min;
	};	
    
	template <typename T>
	void ComputeAverage(struct Stat<T> &computedValues, const vector<T>& data)
    {
		T sum = accumulate( data.begin(), data.end(), 0);
		computedValues.average = (sum / data.size());
	}
	
	template <typename T>
	void ComputeMax(struct Stat<T> &computedValues, const vector<T>& data)
    {
		computedValues.Max = *max_element(data.begin(), data.end());
	}
	
	template <typename T>
	void ComputeMin(struct Stat<T> &computedValues, const vector<T>& data)
    {
		computedValues.Min = *min_element(data.begin(), data.end());
	}
	
	template <typename T>
	struct Stat<T> ComputeStatistics(struct Stat<T> &computedValues, const vector<T>& data)
    {
		ComputeAverage(computedValues,data);
		ComputeMax(computedValues,data);
		ComputeMin(computedValues,data);
		return computedValues;
	}
    
}
