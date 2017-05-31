#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>
#include <iomanip>

class vector {
public:
    int x;
    int y;
    vector( int x, int y ):
        x( x ), y( y )
    {}
    bool operator ==( const vector & rhs ) const;
    vector operator +( const vector & rhs ) const;
    vector operator +=( const vector & rhs);
    vector operator *( const int & rhs );
    vector operator *( const int & rhs ) const;
    vector operator *=( const int & rhs );
    friend std::ostream &  operator<<( std::ostream & lhs, const vector & rhs);
   
};
#endif