#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/oops.hpp"

TEST_CASE( "it works" ) {
    REQUIRE( oops() == "You can delete this function and put your code in this file!" );
}
