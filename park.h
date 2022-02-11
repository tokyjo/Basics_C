#pragma once
#include "flat.hh"

#include <list>
#include <iostream>
#include <string>
class Park{
    private:
    std::list<RealEstate*> _l_estate;
    void parse(std::ifstream& f);

    public:
    Park(std::ifstream& f){parse(f);}
    Park(std::list<RealEstate*> l):_l_estate(l){}
    ~Park();
    uint16_t nbOfEstate()const {return _l_estate.size();}
};

