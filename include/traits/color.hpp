#pragma once

#include <raylib.h>

// Represents a color in hex format
struct HexColor : public Color {};

// Converts a HexColor to a const char*
static const char* ColorToHex(const HexColor& color){
    return TextFormat("#%02x%02x%02x", color.r, color.g, color.b);
}
