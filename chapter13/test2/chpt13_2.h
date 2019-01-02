#ifndef CHPT13_2_H
#define CHPT13_2_H
class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd()
    {
        if(performers != nullptr)
            delete[] performers;
        if(label != nullptr)
            delete[] label;
    };
    virtual void Report() const; //report all CD data
    Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
    char *main;// main cd
public:
    Classic(char *s1, char *s2, char *s3, int n, double x);
    Classic(const Classic& c);
    Classic();
    ~Classic()
    {
        if(main != nullptr)
            delete[] main;
    };
    virtual void Report() const override;
    Classic &operator=(const Classic &c);
};
#endif