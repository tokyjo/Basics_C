#include "shop.hh"

std::string Shop::toCSV() const{

	std::string s ;
	s = std::to_string(_n_rooms) +","+ std::to_string(_surface) +","+ std::to_string(_floor) +","+ std::to_string(_price) +",-1,"+ std::to_string(_is_coldRoom)+","+"-1";

	return s;
}

std::string Shop::type() const{
	std::string s="Shop";
	return s;
}

void Shop::setColdRoom (bool b){
	if (b==false){
		_is_coldRoom=0; 
	}
	else{
		_is_coldRoom=1;
	}
}

bool Shop::isColdRoom() const{
	if (_is_coldRoom==0)
		return false;
	else
		return true;
}