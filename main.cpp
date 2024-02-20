#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
  GLFWwindow* window;

  if (!glfwInit())
        return -1;

  window = glfwCreateWindow(2560, 1600, "Hello World", NULL, NULL);
  if (!window) {
    glfwTerminate();
      return -1;
  }

  glfwMakeContextCurrent(window);

  if (!gladLoadGL()) {
    std::cout << "Can't load glad" << std::endl;
    return -1;
  }

  std::cout << "OpenGL" << GLVersion.major << "." << GLVersion.minor << std::endl;

  glClearColor(0, 1, 0, 1);

  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
