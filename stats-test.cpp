#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include <cmath>

TEST_CASE("reports average, minimum and maximum") {
    Statistics:: stat<float> computedValue;
    vector<float> data{1.0,3.2,5.4,6.3,7.2};
    Statistics:: stat<float> ComputedStats=Statistics:: ComputeStatistics(data,computedValue);
    //auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(ComputedStats.Avg - 4.525) < epsilon);
    REQUIRE(std::abs(ComputedStats.Max - 8.9) < epsilon);
    REQUIRE(std::abs(ComputedStats.Min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    Statistics:: stat<float> computedValue;
    vector<float> data{0.0,3.2,5.4,6.3,7.2};
    Statistics:: stat<float> ComputedStats=Statistics:: ComputeStatistics(data,computedValue);
    //auto computedStats = Statistics::ComputeStatistics({});
    //All fields of computedStats (average, max, min) must be
    //Use http://www.cplusplus.com/reference/cmath/isnan/
    REQUIRE(std::isnan(ComputedStats.Avg));
    REQUIRE(std::isnan(ComputedStats.Max));
    REQUIRE(std::isnan(ComputedStats.Min));
    
}
