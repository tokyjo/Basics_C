#include "park.h"
#include <sstream>
#include <list>
#include <vector>
#include <fstream>

/*
 * Split a line in a list of string according to the delimeter delim
 */
std::vector<std::string> split(const std::string& line, char delim)
{
  std::vector<std::string> tokens;
  std::string token;
  std::istringstream tokenStream(line);
  while (std::getline(tokenStream, token, delim))
    {
      tokens.push_back(token);
    }
  return tokens;
}

/*
 * Do Not forget to not take into account  the first line
 */
void Park::parse(std::ifstream&f)
{
  std::cerr << "Not yet implemented" << std::endl;
}

Park::~Park()
{
  std::cerr << "Not yet implemented" << std::endl;
}


