#include "Counter.hpp"

Counter::Counter(const char* target, int newCount, int newStep)
:name(target), count(newCount), step(newStep)
{

}

Counter::Counter(const Counter& c)
:name(c.name), count(c.count), step(c.step)
{

}

Counter& Counter::operator =(const Counter& c)
{
    name = c.name;
    count = c.count;
    step = c.step;

    return *this;
}

Counter::~Counter()
{

}

void Counter::up()
{
    count += step;
}

void Counter::down()
{
    count -= step;
}

int Counter::getCount()
{
    return count;
}

std::ostream& operator <<(std::ostream& os, const Counter& c)
{
    os<<"Target: "<<c.name<<std::endl;
    os<<"Count: "<<c.count<<std::endl;
    os<<"Step: "<<c.step;

    return os;
}
