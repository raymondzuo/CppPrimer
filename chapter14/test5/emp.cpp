#include "emp.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/********************
 * abstr_emp About
 *******************/
abstr_emp::abstr_emp()
{
    fname = "Nil";
    lname = "Nil";
    job = "Nil";
}

abstr_emp::abstr_emp(const std::string &fn, const std::string & ln, const std::string & j)
                    : fname(fn), lname(ln), job(j)
{ }

void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << " last name: " << lname << " job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "input first name: ";
    std::getline(std::cin, fname);
    cout << "input last name: ";
    std::getline(std::cin, lname);
    cout << "input job: ";
    std::getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << " fname: " << e.fname << " lname: " << e.lname << " job: " << e.job;
    return os;
}

abstr_emp::~abstr_emp(){};
/********************
 * employee About
 *******************/
employee::employee(const std::string &fn, const std::string & ln, const std::string & j) : abstr_emp(fn, ln, j)
{ }

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

//employee::~employee()
//{}

/********************
 * manager About
 *******************/
manager::manager()
{
    inchargeof = 0;
}

manager::manager(const std::string &fn, const std::string & ln, const std::string & j, int ico)
        : abstr_emp(fn, ln, j), inchargeof(ico)
{ }

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{ }

manager::manager(const manager & m) : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "InChargeOf: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "intput incharge of: " << endl;
    cin >> inchargeof;
    cin.get();
}
/********************
 * fink About
 *******************/
fink::fink()
{
    reportsto = "Nil";
}

fink::fink(const std::string & fn, const std::string & ln, const std::string & j,
           const std::string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{ }

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo)
{ }

fink::fink(const fink & e) :abstr_emp(e)
{
    reportsto = e.reportsto;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "ReportTo: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Input reportto: " << endl;
    std::getline(std::cin, reportsto);
}
/********************
 * highfink About
 *******************/
highfink::highfink()
{ }

highfink::highfink(const std::string & fn, const std::string & ln,
            const std::string & j, const std::string & rpo,
            int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{}

highfink::highfink(const abstr_emp & e, const std::string rpo, int ico)
                   : abstr_emp(e), manager(e, ico), fink(e, rpo)
{ }

highfink::highfink(const fink & f, int ico) : abstr_emp(f), manager((const abstr_emp &)f, ico), fink(f)
{ }

highfink::highfink(const manager & m, const std::string rpo) : abstr_emp(m), manager(m), fink((const abstr_emp &)m, rpo)
{ }

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h)
{ }

void highfink::ShowAll() const 
{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << manager::InChargeOf() << endl;
    cout << "Reportto: " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Input Inchargeof: " << endl;
    cin >> manager::InChargeOf();
    cin.get();
    cout << "Input reportsto: " << endl;
    std::getline(std::cin, fink::ReportsTo());
}