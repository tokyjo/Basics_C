#include "Office.hh"

std::string Office::toCSV() const{

	std::string s ;
	s = std::to_string(_n_rooms) +","+ std::to_string(_surface) +","+ std::to_string(_floor) +","+ std::to_string(_price) +",-1,-1,"+ std::to_string(_n_work);

	return s;
}

std::string Office::type() const{
	std::string s="Office";
	return s;
}