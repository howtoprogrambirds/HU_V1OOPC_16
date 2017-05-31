/* --------------------------- */
// Dylan van Eck
// 1702786
// Jorn Bunk
// Week 2 opdracht 2
/* --------------------------- */

#include <ostream>
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED
namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"

TEST_CASE( "constructor, two_parameters" ){
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "[3,4]" );   
}


TEST_CASE( "multiply vector by integer using *" ){
   vector v( 3, 2 );
   vector x= v * 3;
   REQUIRE( v == vector( 3, 2 ) );
   REQUIRE( x == vector( 9, 6 ) );
}

TEST_CASE( "multiply vector by vector using *" ){
   vector v( 2, 6 );
   vector x = v * vector( 3, 3 );
   REQUIRE( v == vector( 2, 6 ) );   
   REQUIRE( x == vector( 6, 18 ) );   
}

TEST_CASE( "add vector to vector using +=" ){
   vector v( 3, 10 );
   v += vector( 6, 7 ); 
   REQUIRE( v == vector( 9, 17 ) );     
}

TEST_CASE( "add vector to vector using +" ){
   vector v( 1, 2 );
   vector x = v + vector(2,3); 
   REQUIRE( v == vector( 1, 2 ) );     
   REQUIRE( x == vector( 3, 5 ) );     
}

TEST_CASE( "multiply vector by vector using *=" ){
   vector v( 3, 10 );
   v *= vector( 1, 2 ); 
   REQUIRE( v == vector( 3, 10 ) );
}

TEST_CASE("subtract vector from vector -"){
	vector v(5, 8);
    vector x = v - vector(3, 4);
	REQUIRE( x == vector(2, 4));
}

TEST_CASE("subtract vector from vector using -="){
	vector v(4, 3);
	v -= vector(2, 1);
	REQUIRE(v == vector(2, 2));
}

TEST_CASE("divide vector by vector using /"){
	vector v(6, 6);
	REQUIRE( v / vector(3, 3) == vector(2, 2));
}

TEST_CASE("divide vector by integer using /"){
	vector v(4, 6);
    vector x = v / 2;
	REQUIRE(x == vector(2, 3));
}

TEST_CASE("divide vector by vector using /="){
	vector v(4, 6);
	v /= vector(2,2);
	REQUIRE( v == vector(2, 3));
}

TEST_CASE("divide vector by integer using /="){
	vector v(3, 9);
	v /= 3;
	REQUIRE( v == vector(1,3));
}