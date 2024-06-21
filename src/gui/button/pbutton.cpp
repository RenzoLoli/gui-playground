#include "gui/button/pbutton.hpp"

#include "utils/format.hpp"

void ButtonProps::genInput() {
   this->input = TextFormat("%s%s", this->text, this->color);
}

ButtonProps::ButtonProps() { this->genInput(); }
