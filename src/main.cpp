#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

int main()
{
    GLFWwindow* window;

    if(!glfwInit()) return -1;

    window = glfwCreateWindow(640, 480, "Hello world", NULL , NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK)
        std::cout << "Error!" << std::endl;

    std::cout << glGetString(GL_VERSION) << std::endl;

    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    cout << "Hello World!" << endl;
    return 0;
}
