#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"

class wall: public rectangle {
private:
    int update_interval;
    int update_count;
public:
    wall(window& w, const vector& start, const vector & end, int update_interval, const vector & bounce);
    void update() override;
};
#endif
    