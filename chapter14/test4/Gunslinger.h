#ifndef GUNSLINGER_H
#define GUNSLINGER_H

#include "Person.h"

class Gunslinger : public virtual Person
{
private:
    int kehen = 0;
    double drawtime = 0.0f;
protected:
    void Data() const;
public:
    Gunslinger(const std::string& strGn = "Nil", const std::string& strFn = "Nil", double dt = 0.0, int kh = 0)
    : Person(strGn, strFn), drawtime(dt), kehen(kh)
    { }
    void Show() const override;
    double Draw() const
    {
        return drawtime;
    }
    void Set();
};

#endif