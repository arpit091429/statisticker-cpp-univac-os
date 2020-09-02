#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <cmath>
#include<vector>

TEST_CASE("reports average, minimum and maximum") {
	Statistics::Stat<float> computedvalues;
	vector<float> data{1.5, 8.9, 3.2, 4.5};
    Statistics::Stat<float> computedstats = Statistics::ComputeStatistics(computedvalues,data);
    float epsilon = 0.001;
    REQUIRE(std::abs(computedstats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedstats.Max - 8.9) < epsilon);
    REQUIRE(std::abs(computedstats.Min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
	 Statistics::Stat<float> computedvalues;
	vector<float> data{1.5, 8.9, 3.2, 4.5};
    Statistics::Stat<float> computedstats = Statistics::ComputeStatistics(computedvalues,data);
    REQUIRE(isnan(computedstats.average) == true);
    REQUIRE(isnan(computedstats.Max) == true);
    REQUIRE(isnan(computedstats.Min) == true);
}
