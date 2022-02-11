#pragma once 

#include "RealEstate.hh"

class Shop : public RealEstate{

	private:
	 int _is_coldRoom; 

	public: 

		/*constructeur*/
		Shop (int n_rooms, float surface, int floor, float price, int is_coldRoom): RealEstate(n_rooms,surface,floor,price,2),_is_coldRoom(is_coldRoom){};
		
		/*getter*/
		bool isColdRoom() const;

		/*setter*/
		void setColdRoom( bool b); 


		/*surcharge*/
		std::string type()const;
		std::string toCSV()const;
};