#include <stdlib.h>
#include "catch.hpp"
#include "demo.hpp"

TEST_CASE("output should be empty", "[file]") {
 std::string result = getenv_var();
 REQUIRE(result == "");
}

