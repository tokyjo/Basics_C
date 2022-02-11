#pragma once

#include <string>
#include <iostream>

class RealEstate{

	public:
		/*setter*/
		int id() const{return _id;};
		int price ()const{return _price;};
		void setPrice( int price) {_price = price;};

		RealEstate(int n_rooms, float surface, int floor, float price,int type): _n_rooms(n_rooms), _surface(surface), _floor(floor), _price(price),_type(type),_id(_count++){};
		std::ostream& operator<<(std::ostream &out);
		/*Virtuelle*/
		virtual std::string type() const=0;
		virtual std::string toCSV() const=0;  


	protected:
		int _n_rooms;
		float _surface;
		int _floor;
		float _price;
		int _type; 
		int _id; 
		static int _count;

};

//std::ostream& operator<<(std::ostream & out, RealEstate& estate);