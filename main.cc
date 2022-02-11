// Let Catch provide main():
#define CATCH_CONFIG_MAIN
 #include "catch.hpp"

// your includes here
#include "RealEstate.hh"
#include "flat.hh"
#include "shop.hh"
#include "Office.hh"
#include <iostream>
#include <fstream>
#include <sstream>



TEST_CASE("1: Flat")
{
  Flat f(1,35,3,118900,1);
  Flat f2(f);
  f.setFurnished(false);
  REQUIRE(f.type() == "Flat");
  REQUIRE(f2.isFurnished());
  REQUIRE(f.toCSV()== "1,35.000000,3,118900.000000,0,-1,-1");
  REQUIRE(f.id() != f2.id());
  std::stringstream ss;
  /*ss << f2;
  REQUIRE(ss.str()=="1,35.000000,3,118900.000000,1,-1,-1");*/
}

TEST_CASE("2: Shop")
{
  Shop s(2,63,0,67900,0);
  Shop s2(2,56,0,53900,0);
  s2.setColdRoom(true);
  s2.setPrice(s.price());
  REQUIRE(s.type() == "Shop");
  std::cout<<"cold:"<<(s.isColdRoom())<<std::endl;
  REQUIRE(!s.isColdRoom());
  REQUIRE(s2.isColdRoom());
  REQUIRE(s2.price() == s.price());
  REQUIRE(s.toCSV()== "2,63.000000,0,67900.000000,-1,0,-1");
  std::stringstream ss;
  /*ss << s2;
  REQUIRE(ss.str()=="2,56.000000,0,67900.000000,-1,1,-1");*/
}


TEST_CASE("3: Office")
{
  Office o(4,200,2,49600,20);
  o.setWorkstations(23);
  o.setPrice(o.price()+2000);
  REQUIRE(o.type() == "Office");
  REQUIRE(o.price() == 51600);
  REQUIRE(o.toCSV()== "4,200.000000,2,51600.000000,-1,-1,23");
  std::stringstream ss;
  /*ss << o;
  REQUIRE(ss.str()=="4,200.000000,2,51600.000000,-1,-1,23");*/
}
/*
TEST_CASE("4: Park")
{
  std::ifstream f("bhp_dataset.csv");
  Park p(f);
  REQUIRE (p.nbOfEstate() == 2499);
  f.close();
}
*/