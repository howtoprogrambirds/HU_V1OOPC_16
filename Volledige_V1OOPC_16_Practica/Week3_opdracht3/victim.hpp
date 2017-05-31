#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "rectangle.hpp"
///@file

///\brief
///class victim; sub class of rectangle becomes smaller when touched
class victim : public rectangle{
private:
    vector start;
    vector end;
public:
    bool touched;
    victim(window& w, const vector& start, const vector & end, const vector & bounce);
    ///\brief
    ///interact() when interact touched becomes true
    void interact( drawable & other) override;
    ///\brief
    ///update() when touched victim becomes smaller
    void update() override;
};

#endif