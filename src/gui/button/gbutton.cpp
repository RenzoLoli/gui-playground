#include "gui/button/gbutton.hpp"

void ButtonHandler::draw() {
   this->_isPressed = GuiButton(this->_props.bounds, this->_props.input);
}

void ButtonHandler::update() {}

bool ButtonHandler::isPressed() const { return this->_isPressed; }

void ButtonHandler::setText(const char* text) {
   this->_props.text = TextFormat("#%s", text);
}

void ButtonHandler::setColor(const HexColor& color) {
   this->_props.color = ColorToHex(color);
}

void ButtonHandler::setCallback(const std::function<void()>& callback) {
   this->_props.callback = callback;
}

void ButtonHandler::setBounds(const Bounds& bounds) {
   this->_props.bounds = bounds;
}

ButtonHandler::ButtonHandler(ButtonProps& props) : _props(props) {}

ButtonHandler::ButtonHandler() : _props{} {}

