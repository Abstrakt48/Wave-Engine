#include "src/graphics/window.h"

int main(void)
{
    using namespace wave;
    using namespace graphics;

    Window window("Wave engine", 960, 540);
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

    while (!window.closed())
    {
        window.clear();
        glBegin(GL_QUADS);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();
        window.update();
    }

    return 0;
}