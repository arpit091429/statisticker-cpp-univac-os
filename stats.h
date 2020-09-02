#include <vector>
#include<bits/stdc++.h>

namespace Statistics {
    //Stats ComputeStatistics(const std::vector<___>& );
    //use template cause we use primitive data type
    template <typename T>
    struct stat
    {
        T Avg;
        T Max;
        T Min;
    };
    
    template <typename T>
    void ComputeAverage(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show average through strcut
        T Sum=0; 
        Sum=accumulate( data.begin(), data.end(),0);
        computeValue.avg=(Sum/data.size());
    }
    
    template <typename T>
    void ComputeMax(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show max through strcut
        T Max=0;
        Max=*max_element( data.begin(), data.end());
        computeValue.Max=Max;
    }
    
    template <typename T>
    void ComputeMin(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show min through strcut
        T Min=0;
        Min=*min_element( data.begin(), data.end());
        computeValue.Min=Min;
    }
    
    template<typename T>
    void stat<T> ComputeStatistics(const vector<T>& data,struct stat<T>& computeValue)
    {
        ComputeAverage(data,computeValue);
        ComputeMax(data,computeValue);
        ComputeMin(data,computeValue);
        return computeValue;
    }
}
