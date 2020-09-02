#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

template<typename T> Statistics::Stat::Stat(){}
template<typename T> Statistics::Stat<T,T,T>::Stat(T average,T Max,T min):average(average),Max(Max),Min(Min){}
template<typename T> Statistics::Stat Statistics::ComputeStatistics(const std::vector<T>& data)
{
    if(data.size()==0)
    {
        return Stat(NaN,NaN,NaN);
    }
    
    T maxi=*max_element(data.begin(),data.end());
    T mani=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    T avg=sum/data.size();
    return Statistics::Stat(avg,maxi,mini);
    
}
