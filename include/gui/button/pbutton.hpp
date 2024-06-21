#pragma once

#include <functional>

#include "traits/bounds.hpp"

struct ButtonProps {
   const char* text = "#";
   const char* color = "#000";
   const char* input;
   std::function<void()> callback;
   Bounds bounds;

   void genInput();

   ButtonProps();
};
