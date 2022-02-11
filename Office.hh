#pragma once 

#include "RealEstate.hh"

class Office : public RealEstate{

	private:
	 int _n_work; 

	public: 

		/*constructeur*/
		Office(int n_rooms, float surface, int floor, float price, int n_work): RealEstate(n_rooms,surface,floor,price,1),_n_work(n_work){};

		/*setter*/
		void setWorkstations(int n_work){_n_work= n_work;} ; 


		/*surcharge*/
		std::string type()const;
		std::string toCSV()const;
};