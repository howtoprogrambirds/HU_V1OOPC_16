#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <iostream>

///@file

class vector {
public:
    int x;
    int y;
    vector( int x, int y ):
        x( x ), y( y )
   {}
   
    /// \brief  
    /// == Operator
    /// \details 
    /// Checks if vectors are equal
    bool operator==(const vector & rhs) const;

    /// \brief  
    /// == Operator
    /// \details 
    /// Checks if vectors are equal
    bool operator!=(const vector & rhs) const;

    /// \brief  
    /// + Operator
    /// \details 
    /// Add vector to vector
    vector operator+(const vector & rhs) const;
    
    /// \brief  
    /// - Operator
    /// \details 
    /// Substract vector with vector
    vector operator-(const vector & rhs) const;
    
    /// \brief  
    /// += Operator
    /// \details 
    /// Add vector to vector
    vector operator+=(const vector & rhs);
    
    /// \brief  
    /// -= Operator
    /// \details 
    /// Substract vector with vector
    vector operator-=(const vector & rhs);
    
    /// \brief  
    /// * Operator
    /// \details 
    /// Multiply vector by vector
    vector operator*(const vector & rhs) const;
    
    /// \brief  
    /// * Operator
    /// \details 
    /// Multiply vector by integer
    vector operator*(const int rhs) const;
    
    /// \brief  
    /// *= Operator
    /// \details 
    /// Multiply vector by vector
    vector operator*=(const vector & rhs);
    
    /// \brief  
    /// *= Operator
    /// \details 
    /// Multiply vector by integer
    vector operator*=(const int rhs);
    
    /// \brief  
    /// / Operator
    /// \details 
    /// Divide vector by vector
    vector operator/(const vector & rhs) const;
    
    /// \brief  
    /// / Operator
    /// \details 
    /// Divide vector by int
    vector operator/(const int rhs) const;
    
    /// \brief  
    /// /= Operator
    /// \details 
    /// Divide vector by vector
    vector operator/=(const vector & rhs);
    
    /// \brief  
    /// /= Operator
    /// \details 
    /// Divide vector by int
    vector operator/=(const int rhs);

};

    /// \brief  
    /// << Operator
    /// \details 
    /// Returns a vector using output operator
    std::ostream & operator<<( std::ostream & lhs, const vector & rhs);
    
#endif