#ifndef PLORG_H
#define PLORG_H

class Plorg
{
public:
    Plorg(const char* nameParam = "Plorga", const int ciParam = 50);
    void setCi(const int ciParam);
    void showPlorg() const;

private:
    enum { MAX = 19 };
    char name[MAX];
    int ci;
};
#endif
