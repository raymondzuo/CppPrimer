// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class base_error : public std::logic_error
{
private:
    double a_;
    double b_;
public:
    base_error(double a, double b, const std::string & msg) : logic_error(msg), a_(a), b_(b)
    {}

    void msg() const
    {
        std::cout << a_ << " " << b_ << " " << what() << std::endl;
    }
};

class bad_hmean : public base_error
{
public:
    bad_hmean(double a, double b, const std::string & msg) : base_error(a, b, msg)
    {}
};

class bad_gmean : public base_error
{
public:
    bad_gmean(double a, double b, const std::string & msg) : base_error(a, b, msg)
    {}
};