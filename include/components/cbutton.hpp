#pragma once

#include "gui/button/gbutton.hpp"

class CButton {
private:
  ButtonHandler _button {};

public:
 CButton();

 void draw();

 void update();
};
