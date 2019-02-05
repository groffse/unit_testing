#include <catch.hpp>
#include "math_functions.hpp"

SCENARIO("Factorial of a natural number") {
    GIVEN("a integer") {
        int number = 4;


        WHEN("Factorial of 4 is computed ") {
            int factorial_number = 24;
            REQUIRE(math_f::factorial(4) == factorial_number );
            THEN("we obtain 24");
        }
    }
}