// dma.cpp --dma class methods

#include "dma.h"
#include <cstring>
//ABC methods
ABC::ABC(const char *l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC &rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

ABC::~ABC()
{
    delete[] label;    
}

ABC& ABC::operator=(const ABC& rs)
{
    if(this == &rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

std::ostream & operator<<(std::ostream & os, const ABC & rs)
{
    os << rs.label << "," << rs.rating;
    return os;
}

void ABC::View() const
{
    std::cout << "label: " << label << " rating: " << rating;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : ABC(l, r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
        return *this;
    ABC::operator=(rs);
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void baseDMA::View() const
{
    std::cout << "baseDMA label: " << label << " baseDMA rating: " << rating;
}
    
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const ABC &) rs;
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : ABC(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
    : ABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
    std::cout << "lacks dma";
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const ABC &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
         : ABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
         : ABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
         : ABC(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);  // copy base portion
    delete [] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
    
void hasDMA::View() const
{
    std::cout << "has DMA";
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const ABC &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}
