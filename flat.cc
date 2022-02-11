#include "flat.hh"

std::string Flat::type() const{
	std::string s="Flat";
	return s;
}


void Flat::setFurnished (bool b){
	if (b==false){
		_is_furnished=0; 
	}
	else{
		_is_furnished=1;
	}
}
bool Flat::isFurnished() const{
	if (_is_furnished==-1)
		return false;
	else
		return true;
}

std::string Flat::toCSV() const{

	std::string s ;
	s = std::to_string(_n_rooms) +","+ std::to_string(_surface) +","+ std::to_string(_floor) +","+ std::to_string(_price) +","+ std::to_string(_is_furnished)+","+"-1,-1";

	return s;
}


