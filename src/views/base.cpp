#include "views/base.hpp"

BaseView::BaseView() : View() {}

void BaseView::draw() { this->_button.draw(); }

void BaseView::update() { this->_button.update(); }

