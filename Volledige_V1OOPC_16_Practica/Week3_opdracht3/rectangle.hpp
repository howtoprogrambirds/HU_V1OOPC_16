// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

///@file

class rectangle : public drawable {
private:
    line left;
    line right;
    line top;
    line bottom;
    vector end;
    vector start;
protected:
    bool filled;
public:
    rectangle( window & w, const vector & start, const vector & end, const vector & bounce);   
    void draw() override;
    ///\brief
    ///resize() function to resize
    void resize(vector &start, vector &end);
};


#endif // RECTANGLE_HPP
