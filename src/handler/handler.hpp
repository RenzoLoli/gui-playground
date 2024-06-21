#include <raylib.h>

#include <memory>
#include <vector>

#include "context/context.hpp"
#include "views/base.hpp"

class AppHandler {
  private:
   std::vector<std::unique_ptr<View>> _views;

  public:
   void run();

  public:
   AppHandler();
   ~AppHandler();
};
