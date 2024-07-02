#include "shader.hpp"

int Shader::greyScale(int min, int max, int val)
{
    int reducedmax = max - min;
    double constant = reducedmax / 255;
    return val/constant;
}
