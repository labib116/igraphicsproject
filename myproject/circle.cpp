#include <math.h>
#include "iGraphics.h"

// Define the paths for the images used
char bikelefttoup[30][50] = {
    "image\\lefttoup\\bike\\bike (1).bmp",
    "image\\lefttoup\\bike\\bike (2).bmp",
    "image\\lefttoup\\bike\\bike (3).bmp",
    "image\\lefttoup\\bike\\bike (4).bmp",
    "image\\lefttoup\\bike\\bike (5).bmp",
    "image\\lefttoup\\bike\\bike (6).bmp"
};

// Declare global variables
double x = 5;        // Initial x-coordinate of the car
double y = 500;      // Initial y-coordinate of the car
double x2 = 900;     // Final x-coordinate of the car
double y2 = 1100;    // Final y-coordinate of the car
int specialindex = 0; // Index to track the image frame
double angle = 0;     // Angle for circular movement

// Function to move the car from left to right in a circular path
void lefttocentermovecar() {
    // Show the car image at the current position
    iShowBMP2(x, y, bikelefttoup[specialindex], 0);

    // Move the car towards the final x-coordinate
    if (x < x2) {
        // Increment the x-coordinate
        x += 20;

        // If the car has reached the final x-coordinate, change the image frame
        if (x >= x2 && specialindex < 5) {
            specialindex++;
        }
    }
}
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}


// Function to draw the graphics
void iDraw() {
    // Clear the screen
    iClear();

    // Draw the roundabout background
    iShowBMP(0, 0, "image\\background and signals\\roundabout.bmp");

    // Move the car from left to right
    lefttocentermovecar();
}

// Main function
int main() {
    // Initialize the graphics
    iInitialize(1950, 1100, "Circular Motion");

    // Return 0 to indicate successful execution
    return 0;
}
