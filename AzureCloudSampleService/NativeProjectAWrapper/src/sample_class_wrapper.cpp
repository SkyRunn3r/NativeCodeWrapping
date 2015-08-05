#include "sample_class_wrapper.h"
#include <sample_class_api.h>


namespace sample_class {
  void sample_class_wrapper::write_to_file_wrapper(System::String ^ filename, System::String ^ message)
  {
    write_to_file(marshal_string(filename), marshal_string(message));
  }

  std::string sample_class_wrapper::marshal_string(System::String^ s)
  {
    using namespace System::Runtime::InteropServices;
    const char* chars =
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    std::string os = chars;
    Marshal::FreeHGlobal(System::IntPtr((void*)chars));
    return os;
  }
}
