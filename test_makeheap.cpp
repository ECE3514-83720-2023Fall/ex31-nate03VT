#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

#include "heap.cpp"

TEST_CASE("test make_min_heap", "[make_heap]") {
    // an example for ArrayType is std::vector
    std::vector<int> a = { 1,45,76,2,33,65,99,345,-5, 21 };

    // test my find function
    REQUIRE(find_min_child(a, 0) == 0);
    REQUIRE(find_min_child(a, 1) == 3);
    REQUIRE(find_min_child(a, 2) == 5);
    REQUIRE(find_min_child(a, 7) == 0);

    REQUIRE_FALSE(check_min_heap(a));

    make_min_heap(a);

    REQUIRE(a[0] == -5);
    REQUIRE(a[1] == 1);
    REQUIRE(a[2] == 65);
    REQUIRE(a[3] == 2);
    REQUIRE(a[4] == 21);
    REQUIRE(a[5] == 76);
    REQUIRE(a[6] == 99);
    REQUIRE(a[7] == 345);
    REQUIRE(a[8] == 45);
    REQUIRE(a[9] == 33);

    REQUIRE(check_min_heap(a));
}

TEST_CASE(" test insert", "[make_heap]") {
    std::vector<int> b = { 1,45,76,2,33,65,99,345,-5, 21 };
    std::vector<int> a;

    for (std::size_t i = 0; i < b.size(); i++) {
        insert(a, b[i]);
    }

    REQUIRE_FALSE(check_min_heap(a));
   
}

TEST_CASE(" test peek, remove", "[make_heap]") {
    
    std::vector<int> a = { 1,45,76,2,33,65,99,345,-5, 21 };
    std::vector<int> b = { -5,1,2,21,33,45,65,76,99,345 };

    make_min_heap(a);
    REQUIRE(check_min_heap(a));

    for (std::size_t i = 0; i < b.size(); i++) {
        REQUIRE(peek(a) == b[i]);
        remove(a);
    }

    REQUIRE(a.size() == 0);
}

