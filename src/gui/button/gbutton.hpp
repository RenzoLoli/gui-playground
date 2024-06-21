#pragma once

#include <raygui.h>
#include <raylib.h>

#include <functional>

#include "gui/button/pbutton.hpp"

#include "traits/bounds.hpp"
#include "traits/color.hpp"

class ButtonHandler {
  private:
   ButtonProps _props{};

   bool _isPressed{false};

  public:
   void draw();
   void update();
   bool isPressed() const;

   void setText(const char* text);
   void setColor(const HexColor& color);
   void setCallback(const std::function<void()>& callback);
   void setBounds(const Bounds& bounds);

  public:
   ButtonHandler(ButtonProps& props);
   ButtonHandler();
};
