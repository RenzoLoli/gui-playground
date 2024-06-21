#include <iostream>

#include "components/cbutton.hpp"

CButton::CButton() {
   this->_button.setBounds(createBounds(0, 0, 100, 100));
   this->_button.setText("Hello");
   this->_button.setColor(HexColor{255, 0, 0});
   this->_button.setCallback([]() { std::cout << "Hello World" << std::endl; });
}

void CButton::draw() { this->_button.draw(); }

void CButton::update() {
   if (this->_button.isPressed()) {
      std::cout << "Button pressed" << std::endl;
   }
}

