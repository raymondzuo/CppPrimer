// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
    bad_hmean() : logic_error("bad_hmean()")
    {}
};

class bad_gmean : public std::logic_error
{
public:
    bad_gmean() : logic_error("bad_gmean()!")
    {}
};