#include <vector>
#include<bits/stdc++.h>

namespace Statistics {
    Stats ComputeStatistics(const std::vector<___>& );
    //use template cause we use primitive data type
    template <class T>
    struct stat
    {
        T avg;
        T max;
        T min;
    };
    
    template <typename T>
    void ComputeAverage(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show average through strcut
        T sum=0;
        sum=accumlate(data.begin(),data.end(),0);
        computeValue.avg=(sum/data.size());
    }
    
    template <typename T>
    void ComputeMax(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show max through strcut
        T max=0;
        max=*max_element(data.begin(),data.end());
        computeValue.max=max;
    }
    
    template <typename T>
    void ComputeMin(const vector<T>& data,struct stat<T>& computeValue)
    {
        //take value from vector and show min through strcut
        T min=0;
        min=*min_element(data.begin(),data.end());
        computeValue.max=max;
    }
    
    template<typename T>
    void stat<T> ComputeStatistics(const vector<T>& data,struct computeValue<T>& computeValue)
    {
        computeAverage(data,computeValue,);
        computeMax(data,computeValue);
        computeMin(data,computeValue,);
        return computeValue;
    }
}
