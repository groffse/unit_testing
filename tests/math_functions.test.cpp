#include <catch.hpp>
#include "math_functions.hpp"

TEST_CASE( "Low factorial values are computed", "[factorial]" ) {
    REQUIRE( math_f::factorial(1) == 1 );
    REQUIRE( math_f::factorial(2) == 2 );
    REQUIRE( math_f::factorial(3) == 6 );
    REQUIRE( math_f::factorial(10) == 3628800 );
}

TEST_CASE( "High factorial values are computed", "[factorial]" ) {
    INFO("The value of i is " << 10);
    REQUIRE( math_f::factorial(10) == 3628800 );
}