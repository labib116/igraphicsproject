# include "iGraphics.h"
#include<stdio.h>
int x=200,y=300,z=200,r=50;
/*
	function iDraw() is called again and again by the system.this is a core concept
    

	*/
char bikelefttocenter[30][50] = {
    "image\\lefttocenter\\bike\\bike (1).bmp",
    "image\\lefttocenter\\bike\\bike (2).bmp",
    "image\\lefttocenter\\bike\\bike (3).bmp",
    "image\\lefttocenter\\bike\\bike (4).bmp",
    "image\\lefttocenter\\bike\\bike (5).bmp",
    "image\\lefttocenter\\bike\\bike (6).bmp"
};

char buslefttocenter[30][50] = {
    "image\\lefttocenter\\bus\\bus (1).bmp",
    "image\\lefttocenter\\bus\\bus (2).bmp",
    "image\\lefttocenter\\bus\\bus (3).bmp",
    "image\\lefttocenter\\bus\\bus (4).bmp",
    "image\\lefttocenter\\bus\\bus (5).bmp",
    "image\\lefttocenter\\bus\\bus (6).bmp"
};
char carlefttocenter[30][50] = {
    "image\\lefttocenter\\car\\car (1).bmp",
    "image\\lefttocenter\\car\\car (2).bmp",
    "image\\lefttocenter\\car\\car (3).bmp",
    "image\\lefttocenter\\car\\car (4).bmp",
    "image\\lefttocenter\\car\\car (5).bmp",
    "image\\lefttocenter\\car\\car (6).bmp"
};
char busdowntoright[30][50]={
    "image\\downtoright\\bus (1).bmp",
    "image\\downtoright\\bus\\bus (2).bmp",
    "image\\downtoright\\bus\\bus (3).bmp",
    "image\\downtoright\\bus\\bus (4).bmp",
    "image\\downtoright\\bus\\bus (5).bmp",
    "image\\downtoright\\bus\\bus (6).bmp"
};

char bikedowntoright[30][50]={
    "image\\downtoright\\bike\\bike (1).bmp",
    "image\\downtoright\\bike\\bike (2).bmp",
    "image\\downtoright\\bike\\bike (3).bmp",
    "image\\downtoright\\bike\\bike (4).bmp",
    "image\\downtoright\\bike\\bike (5).bmp",
    "image\\downtoright\\bike\\bike (6).bmp"
};

char cardowntoright[30][50]={
    "image\\downtoright\\car\\car (1).bmp",
    "image\\downtoright\\car\\car (2).bmp",
    "image\\downtoright\\car\\car (3).bmp",
    "image\\downtoright\\car\\car (4).bmp",
    "image\\downtoright\\car\\car (5).bmp",
    "image\\downtoright\\car\\car (6).bmp"
};

char truckdowntoright[30][50]={
    "image\\downtoright\\truck\\truck (1).bmp",
    "image\\downtoright\\truck\\truck (2).bmp",
    "image\\downtoright\\truck\\truck (3).bmp",
    "image\\downtoright\\truck\\truck (4).bmp",
    "image\\downtoright\\truck\\truck (5).bmp",
    "image\\downtoright\\truck\\truck (6).bmp"
};
char busuptoleft[30][50]={
    "image\\uptoleft\\bus\\bus (1).bmp",
    "image\\uptoleft\\bus\\bus (2).bmp",
    "image\\uptoleft\\bus\\bus (3).bmp",
    "image\\uptoleft\\bus\\bus (4).bmp",
    "image\\uptoleft\\bus\\bus (5).bmp",
    "image\\uptoleft\\bus\\bus (6).bmp"
};

char bikeuptoleft[30][50]={
    "image\\uptoleft\\bike\\bike (1).bmp",
    "image\\uptoleft\\bike\\bike (2).bmp",
    "image\\uptoleft\\bike\\bike (3).bmp",
    "image\\uptoleft\\bike\\bike (4).bmp",
    "image\\uptoleft\\bike\\bike (5).bmp",
    "image\\uptoleft\\bike\\bike (6).bmp"
};

char caruptoleft[30][50]={
    "image\\uptoleft\\car\\car (1).bmp",
    "image\\uptoleft\\car\\car (2).bmp",
    "image\\uptoleft\\car\\car (3).bmp",
    "image\\uptoleft\\car\\car (4).bmp",
    "image\\uptoleft\\car\\car (5).bmp",
    "image\\uptoleft\\car\\car (6).bmp"
};
char busrighttodown[30][50]={
    "image\\righttodown\\bus\\bus (1).bmp",
    "image\\righttodown\\bus\\bus (2).bmp",
    "image\\righttodown\\bus\\bus (3).bmp",
    "image\\righttodown\\bus\\bus (4).bmp",
    "image\\righttodown\\bus\\bus (5).bmp",
    "image\\righttodown\\bus\\bus (6).bmp"
};

char bikerighttodown[30][50]={
    "image\\righttodown\\bike\\bike (1).bmp",
    "image\\righttodown\\bike\\bike (2).bmp",
    "image\\righttodown\\bike\\bike (3).bmp",
    "image\\righttodown\\bike\\bike (4).bmp",
    "image\\righttodown\\bike\\bike (5).bmp",
    "image\\righttodown\\bike\\bike (6).bmp"
};

char carrighttodown[30][50]={
    "image\\righttodown\\car\\car (1).bmp",
    "image\\righttodown\\car\\car (2).bmp",
    "image\\righttodown\\car\\car (3).bmp",
    "image\\righttodown\\car\\car (4).bmp",
    "image\\righttodown\\car\\car (5).bmp",
    "image\\righttodown\\car\\car (6).bmp"
};

char truckrighttodown[30][50]={
    "image\\righttodown\\truck\\truck (1).bmp",
    "image\\righttodown\\truck\\truck (2).bmp",
    "image\\righttodown\\truck\\truck (3).bmp",
    "image\\righttodown\\truck\\truck (4).bmp",
    "image\\righttodown\\truck\\truck (5).bmp",
    "image\\righttodown\\truck\\truck (6).bmp"
};
char rbikelefttoright[30][50]={
    "image\\roundaboutlefttoright\\bike\\bike (1).bmp",
    "image\\roundaboutlefttoright\\bike\\bike (2).bmp",
    "image\\roundaboutlefttoright\\bike\\bike (3).bmp",
    "image\\roundaboutlefttoright\\bike\\bike (4).bmp",
    "image\\roundaboutlefttoright\\bike\\bike (5) .bmp",
    
};
char rcarlefttoright[30][50]={
    "image\\roundaboutlefttoright\\car\\car (1).bmp",
    "image\\roundaboutlefttoright\\car\\car (2).bmp",
    "image\\roundaboutlefttoright\\car\\car (3).bmp",
    "image\\roundaboutlefttoright\\car\\car (4).bmp",
    "image\\roundaboutlefttoright\\car\\car (5).bmp",
    
};

char rbikerighttoleft[30][50]={
     "image\\roundaboutrighttoleft\\bike\\bike (1).bmp",
     "image\\roundaboutrighttoleft\\bike\\bike (2).bmp",
     "image\\roundaboutrighttoleft\\bike\\bike (3).bmp",
     "image\\roundaboutrighttoleft\\bike\\bike (4).bmp",
     "image\\roundaboutrighttoleft\\bike\\bike (5).bmp"
};


//storing the initial x and y coordinate of the vehicles
int x1[]={5,5,5,5,5,5},a1[]={583,583,583,583,530,520};//for left to center
int rspecialindex[]={0,0,0,0,0,0};
//for uptocenter
int x2[]={1030,1030,1030,1030},a2[]={1096,1096,1096,1096};
int rspecialindex_2[]={0,0,0,0};
//int angle=0;
int timecount=0;
void lefttocentercaeshow(){
	iShowBMP2(x1[0],a1[0],bikelefttocenter[rspecialindex[0]],0);
	if(timecount>=5){
		iShowBMP2(x1[1],a1[1],bikelefttocenter[rspecialindex[1]],0);
	}
	if(timecount>=15){
		iShowBMP2(x1[2],a1[2],buslefttocenter[rspecialindex[2]],0);
	}
	if(timecount>=25){
		iShowBMP2(x1[3],a1[3],carlefttocenter[rspecialindex[3]],0);
	}
    if(timecount>=30){
        iShowBMP2(x1[4],a1[4],rbikelefttoright[rspecialindex[4]],0);
    }
    if(timecount>=35){
         iShowBMP2(x1[5],a1[5],rcarlefttoright[rspecialindex[5]],0);
    }
	
}
void downtocentercarshow(){
	iShowBMP2(x2[0],a2[0],bikedowntoright[rspecialindex_2[0]],0);
	if(timecount>=15){
		iShowBMP2(x2[1],a2[1],bikedowntoright[rspecialindex_2[1]],0);
	}
	/*if(timecount>=15){
		iShowBMP2(x2[2],a2[2],busdowntoright[specialindex_2[2]],0);
	}*/
	if(timecount>=25){
		iShowBMP2(x2[3],a2[3],cardowntoright[rspecialindex_2[3]],0);
	}
}
int x3[]={664,640,664,664,664},a3[]={0,0,0,0,0},rspecialindex_3[]={0,0,0,0,0};
void centertoleftcarshow(){
	iShowBMP2(x3[0],a3[0],bikeuptoleft[rspecialindex_3[0]],0);
	if(timecount>=10){
		iShowBMP2(x3[1],a3[1],caruptoleft[rspecialindex_3[1]],0);
	}
	if(timecount>=15){
       iShowBMP2(x3[2],a3[2],caruptoleft[rspecialindex_3[2]],0);
	}
	if(timecount>=25){
       iShowBMP2(x3[3],a3[3],bikeuptoleft[rspecialindex_3[3]],0);
	}

}
int x4[]={1664,1664,1664,1664,1664,1664},a4[]={320,320,320,320,380,380,350},rspecialindex_4[]={0,0,0,0,0,0};
void centertodownshow(){
    iShowBMP2(x4[0],a4[0],bikerighttodown[rspecialindex_4[0]],0);
    if(timecount>=10){
		iShowBMP2(x4[1],a4[1],carrighttodown[rspecialindex_4[1]],0);
        
	}
	if(timecount>=15){
       iShowBMP2(x4[2],a4[2],carrighttodown[rspecialindex_4[2]],0);
	}
	if(timecount>=25){
       iShowBMP2(x4[3],a4[3],bikerighttodown[rspecialindex_4[3]],0);
	}
    if(timecount>=30){
         iShowBMP2(x4[4],a4[4],rbikerighttoleft[rspecialindex_4[4]],0);
    }
}
//int x5[];
/*void roundaboutlefttorightshow(){
    iShowBMP2();
}*/
void iDraw() {
	//place your drawing codes here
	iClear();
	iShowBMP(0,0,"image\\background and signals\\roundabout.bmp");
	/*iSetColor(20, 200, 200);
	iFilledCircle(x, y, r);
	//iFilledRectangle(10, 30, 20, 20);
	iSetColor(20, 200, 0);
	iText(40, 40, "Hi, I am iGraphics");*/
	lefttocentercaeshow();
	downtocentercarshow();
	centertoleftcarshow();
    centertodownshow();
	timecount++;
	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
			printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}
double angle=M_PI;
int center_x=864;
int center_y=542;
int radius=864-450;
void roundaboutleftcarmovement(int *p, int *q,int *i) {
	//int temp=*i;
    if (*p < 450) {
        *p += 20;
		
    }
    else if (*p >= 450 && *p <= 710) {
        *q=542+sqrt(pow(radius,2)-pow((center_x-*p),2));
		*p+=10;
		*i=3;
    }
    else {
        *q += 10;
		*i=5;
    }
    if (*q >= 1096) {
        *p = 5;
        *q = 593;
		angle=M_PI;
		*i=0;
    }
	
	
}
void roundaboutlefttorightcarmovement(int *p,int *q,int *i){
    if(*p<450){
        *p+=20;
        *i=0;
    }
    else if(*p>=450 && *p<600){
         *p+=10;
         *q+=10;
         *i=1;
    }
    else if(*p>=600 && *p <750){
        *p+=15;
        *q+=10;
        *i=1;
    }
    else if(*p>=750 && *p<=1000){
        *p+=20;
        *i=2;
    }
    else if(*p>1000 && *p<=1200){
        *p+=10;
        *q-=13;
        *i=3;
    }
    /*else if(*p>1050 && *p<=1150){
        *p+=13;
        *q-=10;
        *i=3;

    }*/
    else {
        *p+=10;
        *i=4;
    }
    if(*p>1650){
      *p=5;
      *q=530;
      *i=0;
    }
}

void roundaboutdowncarmovement(int *p, int *q, int *i) {
    if (*q >= 952) { // If the car is above the threshold for going downward
        *q -= 20;
        *i = 0; // Indicate the car is moving downward
    }
    else if (*q <= 952 && *q >= 650) { // If the car is within the range to move to the right
        // Calculate the x-coordinate based on the circular path
        *p =  864+sqrt(pow(radius, 2) - pow((*q - center_y), 2));
        *q -= 10;
        *i = 3; // Indicate the car is moving right
    }
    else { // If the car is below the threshold for going downward
        *p += 10;
        *i = 5; // Indicate the car is moving left
    }
    if (*p >= 1600) { // If the car has moved beyond the right boundary
        *p = 1030; // Reset the x-coordinate
        *q = 1096; // Reset the y-coordinate
        *i = 0; // Indicate the car is at the initial position
    }
} 
void roundaboutupcarmovement(int *p, int *q, int *i) {
    if (*q <= 150) { // Move the car up
        *q += 20;
        *i = 0;
    }
    else if (*q > 150 && *q <= 200) { // Move the car to the right
        *p -=15;
        *q += 10;
        *i = 3;
    }
	else if (*q > 200 && *q <= 250) { // Move the car to the right
        *p -=10;
        *q += 13;
        *i = 3;
    }
	else if (*q > 250 && *q <= 310) { // Move the car to the right
        *p -=10;
        *q += 15;
        *i = 3;
    }
	
    else { // Move the car down
        *p -= 20;
        *i = 5;
    }

    if (*p <= 0) { // Reset the car's position to the left side
        *p = 650;
        *q = 0;
        *i = 0;
    }
}
void roundaboutrightcarmovement(int *p,int *q,int *i){
    if(*p>1250){
        *p-=20;
    }
    else if(*p<=1250 && *p>1200){
        *p-=10;
        *q-=18;
        *i=3;
    }
    else if(*p<=1200 && *p>1100){
        *p-=10;
        *q-=10;
        *i=3;
    }
    else if(*p<=1100 && *p>970){
        *p-=18;
        *q-=10;
        *i=3;
    }
    else{
        *q-=10;
        *i=5;
    }
    if(*q<=0){
        *p=1665;
        *q=320;
        *i=0;
    }
}
void roundaboutrighttoleftcarmovement(int *p,int *q,int *i){
    if(*p>=1250){
        *p-=20;
        *i=0;
    }
    else if(*p<1250 && *p>=1050){
        *p-=10;
        *q-=10;
        *i=1;
    }
    else if(*p<1050 && *p>=750){
        *p-=10;
        *i=0;
    }
    else if(*p<750 && *p>=550){
        *p-=10;
        *q+=10;
        *i=3;
    }
    else {
      *p-=10;
      *i=0;
    }
    if(*p<=0){
        *p=1650;
        *q=380;
        *i=0;
    }
}



void change(){
	roundaboutleftcarmovement(&x1[0],&a1[0],&rspecialindex[0]);
	roundaboutdowncarmovement(&x2[0],&a2[0],&rspecialindex_2[0]);
	roundaboutupcarmovement(&x3[0],&a3[0],&rspecialindex_3[0]);
    roundaboutrightcarmovement(&x4[0],&a4[0],&rspecialindex_4[0]);
	if(timecount>=5)
	roundaboutleftcarmovement(&x1[1],&a1[1],&rspecialindex[1]);
    
	if(timecount>=10){
        roundaboutupcarmovement(&x3[1],&a3[1],&rspecialindex_3[1]);
         roundaboutrightcarmovement(&x4[1],&a4[1],&rspecialindex_4[1]);
	}
	
	if(timecount>=15){
		roundaboutleftcarmovement(&x1[2],&a1[2],&rspecialindex[2]);
		//downcarmovement(&x2[2],&a2[2],&specialindex_2[2]);
		roundaboutdowncarmovement(&x2[1],&a2[1],&rspecialindex_2[1]);
		roundaboutupcarmovement(&x3[2],&a3[2],&rspecialindex_3[2]);
        
		
	}
	if(timecount>=25){
		roundaboutleftcarmovement(&x1[3],&a1[3],&rspecialindex[3]);
		roundaboutdowncarmovement(&x2[3],&a2[3],&rspecialindex_2[3]);
		roundaboutupcarmovement(&x3[3],&a3[3],&rspecialindex_3[3]);
         roundaboutrightcarmovement(&x4[2],&a4[2],&rspecialindex_4[2]);
	}
    if(timecount>=30){
        roundaboutlefttorightcarmovement(&x1[4],&a1[4],&rspecialindex[4]);
        roundaboutrighttoleftcarmovement(&x4[4],&a4[4],&rspecialindex_4[4]);
    }
    if(timecount>=38){
         roundaboutlefttorightcarmovement(&x1[5],&a1[5],&rspecialindex[5]);
    }
}




int main() {
	//place your own initialization codes here.
	iSetTimer(10,change);
	iInitialize(1664, 1096, "Circular Motion"); 
	return 0;
}
