#include <ostream>
#include "vector.hpp"

    bool vector::operator==( const vector & rhs ) const {
        vector tmpRhs(rhs.x,rhs.y);
        rational tmpLhs(counter, denominator);
        reduce(tmpRhs);
        reduce(tmpLhs);
        return ( counter == rhs.counter) && ( denominator == rhs.denominator);
    }

    bool vector::operator!=(const vector & rhs) const {
        return (x % rhs.x != 0) && (y % rhs.y != 0);
    }
    
    vector vector::operator+( const vector& rhs ) const {
        return vector( x + rhs.x, y + rhs.y );
    }
    
    vector  vector::operator-(const vector & rhs) const {
        return vector(x - rhs.x, y - rhs.y);
    }
    
    vector vector::operator+=( const vector & rhs ){
        x += rhs.x;
        y += rhs.y;
        return *this;
    }

    vector vector::operator-=( const vector & rhs ){
        x -= rhs.x;
        y -= rhs.y;
        return *this;
    }
    
    vector vector::operator*(const int rhs) const{
        return vector( x * rhs, y * rhs );
    }
    
    vector vector::operator*(const vector & rhs) const {
        return vector(x * rhs.x, y * rhs.y);
    }
    
    vector vector::operator*=(const int rhs){
        x *= rhs;
        y *= rhs;
        return *this;
    }
    
    vector vector::operator*=(const vector & rhs) {
        x *= rhs.x;
        y *= rhs.y;
        return *this;
    }
    
    vector vector::operator/(const vector & rhs) const {
        return vector(x / rhs.x, y / rhs.y);
    }

    vector vector::operator/(const int rhs) const {
        return vector(x / rhs, y / rhs);
    }
    
    vector vector::operator/=(const vector & rhs) {
        x /= rhs.x;
        y /= rhs.y;
        return *this;
    }


    vector vector::operator/=(const int rhs) {
        x /= rhs;
        y /= rhs;
        return *this;
    }
    
    std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
      return lhs 
         << "[" 
         << rhs.x
         << "," 
         << rhs.y
         << "]";
    }

