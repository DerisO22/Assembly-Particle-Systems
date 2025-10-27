#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

// Function to initialize OpenGL settings
void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

// Function to draw the scene
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Draw a red triangle
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(250.0, 400.0);
        glVertex2f(100.0, 100.0);
        glVertex2f(400.0, 100.0);
    glEnd();

    glFlush();
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Triangle");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
