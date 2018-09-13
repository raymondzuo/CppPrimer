#ifndef GOLF_H
#define GOLF_H

class Golf
{
public:
    Golf();
    Golf(const char* fullNameParam, const int hcParam);
    void SetGolf();
    void Handicap(const int hc);
    void ShowGolf() const;
private:
    enum{LEN = 40};
    char fullname[LEN];
    int handicap;
};
#endif
