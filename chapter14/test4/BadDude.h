#ifndef BAD_DUDE_H
#define BAD_DUDE_H

#include "Person.h"
#include "PokerPlayer.h"
#include "Gunslinger.h"

class BadDude : public Gunslinger, public PokerPlayer
{
private:
    /* data */
protected:
    void Data() const;
public:
    BadDude(const std::string& strGn = "Nil", const std::string& strFn = "Nil", double dt = 0.0, int kh = 0) 
    : Person(strGn, strFn), Gunslinger(strGn, strFn, dt, kh), PokerPlayer(strGn, strFn)
    {};
    double Gdraw()
    {
        return Gunslinger::Draw();
    }
    int Cdraw()
    {
        return PokerPlayer::Draw();
    }
    virtual void Show() const override;
    void Set();
};

#endif