#include <catch2/catch_test_macros.hpp>
#include "test_config.h"
#include "../src/binary_info.h"
#include "../src/version.h"
TEST_CASE("binary name not empty",    "[info]")    { REQUIRE(std::string(BINARY_NAME).size() > 0); }
TEST_CASE("version string not empty", "[version]") { REQUIRE(std::string(get_version()).size() > 0); }
TEST_CASE("flag test",                "[flag]")    { REQUIRE(TEST_SHOULD_FAIL == 0); }
