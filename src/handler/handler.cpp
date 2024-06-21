#include "handler/handler.hpp"

void AppHandler::run() {
   InitWindow(Context.width, Context.height, Context.title);
   SetTraceLogLevel(LOG_ERROR);

   SetTargetFPS(Context.fps);    // Set our game to run at 60 frames-per-second
   while (!WindowShouldClose())  // Detect window close button or ESC key
   {
      for (auto& view : this->_views) {
         view->update();
      }

      BeginDrawing();
      ClearBackground(RAYWHITE);

      for (auto& view : this->_views) {
         view->draw();
      }

      EndDrawing();
   }
}

AppHandler::AppHandler() {
   this->_views.push_back(std::make_unique<BaseView>());
};
AppHandler::~AppHandler() {
   CloseWindow();  // Close window and OpenGL context
};
