#pragma once

#include <raylib.h>

// Rectangle bounds x, y, width, height
struct Bounds : public Rectangle {
};

// Creates a new Bounds with explicit values
static Bounds createBounds(float x, float y, float width, float height) {
    return Bounds{x, y, width, height};
}
