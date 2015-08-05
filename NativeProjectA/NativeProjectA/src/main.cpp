#include "sample_class.h"

int main()
{
  std::string test_filename = "test.txt";
  std::string test_message = "Hello native!";
  
  sample_class sample;
  sample.write_to_file(test_filename, test_message);

  return 0;
}