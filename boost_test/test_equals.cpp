#define BOOST_TEST_MODULE test equals

#include <boost/test/included/unit_test.hpp>
#include "complex.hpp"

/** Class REQUIRES operator<< */
/** ./test_equals --help shows options
    ./test_equals --report_level=detailed
 */

/** auto registration show test suite afterwards*/
BOOST_AUTO_TEST_SUITE(test_equals)

BOOST_AUTO_TEST_CASE(equals_simple_1) {
   
    complex zero_one(0, 0);
    complex zero_two(0, 0);
   
    BOOST_TEST(zero_one == zero_two);
}

BOOST_AUTO_TEST_CASE(equals_simple_2) {
    
    complex num_one(10, 1);
    complex num_two(10, 1);
   
    BOOST_TEST(num_one == num_two);
}

BOOST_AUTO_TEST_CASE(equals_not_1) {
    
    complex num_one(11, 1);
    complex num_two(11, 2);
   
    BOOST_TEST(!(num_one == num_two));
}

BOOST_AUTO_TEST_CASE(equals_not_2) {
    
    complex num_one(11, 1);
    complex num_two(12, 1);
   
    BOOST_TEST(!(num_one == num_two));
}

BOOST_AUTO_TEST_CASE(equals_not_3) {
    
    complex num_one(11, 1);
    complex num_two(12, 2);
   
    BOOST_TEST(!(num_one == num_two));
}
BOOST_AUTO_TEST_SUITE_END()
