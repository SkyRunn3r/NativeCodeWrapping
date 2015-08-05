#include <fstream>
#include "sample_class.h"


void sample_class::write_to_file(const std::string & filename, const std::string & message)
{
  std::ofstream o(filename);
  o << message << std::endl;
}
