#ifndef BALL_HPP
#define BALL_HPP

#include "circle.hpp"

class ball : public circle {
private:
    vector speed;
public:
    ball( window & w, const vector & midpoint, int radius, const vector & speed, const vector & location, const vector & size):
        circle( w, midpoint, radius, location, size),
        speed( speed )
    {}
    void update() override;
    void interact( drawable & other ) override;
};

#endif