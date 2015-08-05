#include "sample_class.h"
#include "sample_class_api.h"

void write_to_file(const std::string &filename, const std::string &message)
{
  sample_class sample;
  sample.write_to_file(filename, message);
}
