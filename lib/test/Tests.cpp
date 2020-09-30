#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include <sstream>
#include "Document.h"

using namespace std;

TEST_CASE("Simple document struct filled with data shouldn't throw fmt exception on 'print'")
{
    Document doc
    {
        "Author",
        std::time(nullptr),
        "Title",
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor"
                " incididunt ut labore et dolore magna aliqua.\nUt enim ad minim veniam, quis nostrud"
                " exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."
    };

    ostringstream output;

    REQUIRE_NOTHROW( doc.print(output) );
}