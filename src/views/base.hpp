#pragma once

#include "components/cbutton.hpp"
#include "views/view.hpp"

class BaseView : public View {
  private:
   CButton _button{};

  public:
   BaseView();

  public:
   void draw() override;
   void update() override;
};
