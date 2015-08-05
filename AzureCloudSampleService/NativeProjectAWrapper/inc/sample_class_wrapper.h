#include <string>

namespace sample_class {
  public ref class sample_class_wrapper
  {
  public:
    sample_class_wrapper() {
    };

    void write_to_file_wrapper(System::String^ filename, System::String^ message);
    std::string marshal_string(System::String^ input);
  };
}
