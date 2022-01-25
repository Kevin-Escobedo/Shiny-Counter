#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>

class Counter
{
private:
    const char* name;
    int count;
    int step;

public:
    Counter(const char* target, int newCount, int newStep);
    Counter(const Counter& c);
    Counter& operator =(const Counter& c);
    ~Counter();
    void up();
    void down();
    int getCount();
    friend std::ostream& operator <<(std::ostream& os, const Counter& c);
};

#endif /* COUNTER_HPP */
