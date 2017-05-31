#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"

///@file

///\brief
///class wall is a sub-class of rectangle
///\detail
///it is blinking every update_interval
class wall: public rectangle {
private:
    int update_interval;
    int update_count;
public:
    wall(window& w, const vector& start, const vector & end, int update_interval, const vector & bounce);
    ///\brief
    ///update() add up wall's update_count
    ///\detail
    ///it updates the update_count if it higher then update_interval: the bool filled will flip
    void update() override;
};
#endif
    