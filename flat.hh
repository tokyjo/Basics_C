#pragma once 

#include "RealEstate.hh"

class Flat : public RealEstate{

	private:
		int _is_furnished; 

	public: 

		/*constructeur*/
		Flat (int n_rooms, float surface, int floor, float price, int is_furnished): RealEstate(n_rooms,surface,floor,price,0),_is_furnished(is_furnished){};
		Flat (const Flat& f): Flat(f._n_rooms, f._surface, f._floor, f._price,f._is_furnished){};
		/*setter*/
		bool isFurnished() const;

		/*getter*/
		void setFurnished (int val) { _is_furnished= val;};
		void setFurnished( bool b); 


		/*surcharge*/
		std::string type()const;
		std::string toCSV()const;
};