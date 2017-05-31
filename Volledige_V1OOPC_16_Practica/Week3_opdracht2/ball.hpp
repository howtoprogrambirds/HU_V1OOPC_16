#ifndef BALL_HPP
#define BALL_HPP


#include "circle.hpp"
///@file

class ball : public circle {
private:
   vector speed;
public:
   ball( window & w, const vector & midpoint, int radius, const vector & speed );
   void update() override;
   ///\brief
   ///interact() let the speed multiply with bounce
   void interact( drawable & other ) override;
};

#endif // BALL_HPP
