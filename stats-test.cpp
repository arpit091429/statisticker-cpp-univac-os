#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <cmath>
/*TEST_CASE("reports average, minimum and maximum") {
	Statistics::Stat<float> computedvalues;
    Statistics::Stat<float> computedstats = Statistics::ComputeStatistics(computedvalues,{1.5, 8.9, 3.1, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedstats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedstats.Max - 8.9) < epsilon);
    REQUIRE(std::abs(computedstats.Min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
	 Statistics::Stat<float> computedvalues;
    Statistics::Stat<float> computedstats = Statistics::ComputeStatistics(computedvalues, {});
    REQUIRE(isnan(computedstats.average));
    REQUIRE(isnan(computedstats.Max));
    REQUIRE(isnan(computedstats.Min));
}
*/
//trying another method
TEST_CASE("reports average, minimum and maximum") {
	std::vector<float> data{1.5, 8.9, 3.1, 4.5};
    auto computedStats=Statistics::ComputeStatistics(data);
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.Average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.Max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.Min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
	std::vector<float> data{};
    auto computedStats = Statistics::ComputeStatistics(data);
    REQUIRE(isnan(computedStats.Average));
    REQUIRE(isnan(computedStats.Max));
    REQUIRE(isnan(computedStats.Min));
}
