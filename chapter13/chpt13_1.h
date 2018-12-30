#ifndef CHPT13_1_H
#define CHPT13_1_H
class Cd
{
private:
    char performers[50];
    char label[10];
    int selections;
    double playtime;
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd(){};
    virtual void Report() const; //report all CD data
    Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
    char main[20];// main cd
public:
    Classic(char *s1, char *s2, char *s3, int n, double x);
    Classic(const Classic& c);
    Classic();
    ~Classic(){};
    virtual void Report() const override;
    Classic &operator=(const Classic &c);
};
#endif