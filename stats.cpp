#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

template<typename T> Statistics::Stats<>::Stats(){}
template<typename T> Statistics::Stats<T,T,T>::Stats(T average,T Max,T Min):average(average),Max(Max),Min(Min){}
template<typename T> Statistics::Stats<T,T,T> Statistics::ComputeStatistics(const std::vector<T>& data)
//Statistics::Stats::Stats(){}
//Statistics::Stats::Stats(float Average,float Max,float Min):Average(Average),Max(Max),Min(Min){}
//Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& data)

{
    if(data.size()==0)
    {
        return Statistics::Stats(NAN,NAN,NAN);
    }
    
    T maxi=*max_element(data.begin(),data.end());
    T mini=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    T avg=(sum/data.size());
    return Statistics::Stats(avg,maxi,mini);
   // float maxi=*max_element(data.begin(),data.end());
    //float mini=*min_element(data.begin(),data.end());
    //float sum=accumulate(data.begin(), data.end() , 0);
    //float avg=sum/data.size();
    //return Statistics::Stats(avg,maxi,mini);

    
}
