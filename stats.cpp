#include "stats.h"
#include<cmath>
#include<bits/stdc++.h>

//template<typename T> Statistics::Stat::Stat(){}
//template<typename T> Statistics::Stat<T,T,T>::Stat(T average,T Max,T min):average(average),Max(Max),Min(Min){}
//template<typename T> Statistics::Stat Statistics::ComputeStatistics(const std::vector<T>& data)
Statistics::Stats::Stats(){}
Statistics::Stats::Stats(float Average,float Max,float Min):Average(Average),Max(Max),Min(Min){}
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& data)

{
    if(data.size()==0)
    {
        return Stats(NAN,NAN,NAN);
    }
    
    //T maxi=*max_element(data.begin(),data.end());
    //T mani=*min_element(data.begin(),data.end());
    //T sum=accumulate(data.begin(), data.end() , 0);
    //T avg=sum/data.size();
    //return Statistics::Stat(avg,maxi,mini);
    float maxi=*max_element(data.begin(),data.end());
    float mini=*min_element(data.begin(),data.end());
    float sum=accumulate(data.begin(), data.end() , 0);
    float avg=sum/data.size();
    return Statistics::Stats(avg,maxi,mini);

    
}
