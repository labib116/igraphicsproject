# include "iGraphics.h"
#include<stdio.h>
int screenheight=1096,screenwidth=1664;

/*
	function iDraw() is called again and again by the system.

	*/
char signals[30][50] = {
    "image\\background and signals\\red.bmp",
    "image\\background and signals\\green.bmp",
    "image\\background and signals\\yellow.bmp"
};

char left_vehicle[30][50]={
	"image\\left\\bus (1).bmp",
	"image\\left\\car (1).bmp",
	"image\\left\\bike (1).bmp",
	"image\\left\\truck (1).bmp"

};
char right_vehicle[30][50]={
	"image\\right\\bus (2).bmp",
"image\\right\\car (2).bmp",
"image\\right\\bike (2).bmp",
"image\\right\\truck (2).bmp"

};
char up_vehicle[30][50]={
	"image\\up\\bus (3).bmp",
"image\\up\\car (3).bmp",
"image\\up\\bike (3).bmp",
"image\\up\\truck (3).bmp"

};
char downvhicle[30][50]={
	"image\\down\\bus.bmp",
	"image\\down\\car.bmp",
	"image\\down\\truck.bmp",
	"image\\down\\bike.bmp",
};



char busrighttoup[30][50]={"image\\righttoup\\bus(1).bmp",
"image\\righttoup\\bus\\bus (2).bmp",
"image\\righttoup\\bus\\bus (3).bmp",
 "image\\righttoup\\bus\\bus (4).bmp",
 "image\\righttoup\\bus\\bus (5).bmp",
 "image\\righttoup\\bus\\bus (6).bmp"
};
char bikerighttoup[30][50]={
	"image\\righttoup\\bike\\bike(1).bmp",
"image\\righttoup\\bike\\bike (2).bmp",
"image\\righttoup\\bike\\bike (3).bmp",
 "image\\righttoup\\bike\\bike (4).bmp",
 "image\\righttoup\\bike\\bike (5).bmp",
 "image\\righttoup\\bike\\bike (6).bmp"
};
char carrighttoup[30][50]={
	"image\\righttoup\\car\\car (1).bmp",
"image\\righttoup\\car\\car (2).bmp",
"image\\righttoup\\car\\car (3).bmp",
 "image\\righttoup\\car\\car (4).bmp",
 "image\\righttoup\\car\\car (5).bmp",
 "image\\righttoup\\car\\car (6).bmp"
};
char truckrightoup[30][50]={
	"image\\righttoup\\truck\\truck (1).bmp",
"image\\righttoup\\truck\\truck (2).bmp",
"image\\righttoup\\truck\\truck (3).bmp",
 "image\\righttoup\\truck\\truck (4).bmp",
 "image\\righttoup\\truck\\truck (5).bmp",
 "image\\righttoup\\truck\\truck (6).bmp"
};

char busrighttodwon[30][50]={"image\\righttodwon\\bus(1).bmp",
"image\\righttodwon\\bus\\bus (2).bmp",
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
char buslefttoup[30][50]={
    "image\\lefttoup\\bus\\bus (1).bmp",
    "image\\lefttoup\\bus\\bus (2).bmp",
    "image\\lefttoup\\bus\\bus (3).bmp",
    "image\\lefttoup\\bus\\bus (4).bmp",
    "image\\lefttoup\\bus\\bus (5).bmp",
    "image\\lefttoup\\bus\\bus (6).bmp"
};

char bikelefttoup[30][50]={
    "image\\lefttoup\\bike\\bike (1).bmp",
    "image\\lefttoup\\bike\\bike (2).bmp",
    "image\\lefttoup\\bike\\bike (3).bmp",
    "image\\lefttoup\\bike\\bike (4).bmp",
    "image\\lefttoup\\bike\\bike (5).bmp",
    "image\\lefttoup\\bike\\bike (6).bmp"
};

char carlefttoup[30][50]={
    "image\\lefttoup\\car\\car (1).bmp",
    "image\\lefttoup\\car\\car (2).bmp",
    "image\\lefttoup\\car\\car (3).bmp",
    "image\\lefttoup\\car\\car (4).bmp",
    "image\\lefttoup\\car\\car (5).bmp",
    "image\\lefttoup\\car\\car (6).bmp"
};

char trucklefttoup[30][50]={
    "image\\lefttoup\\truck\\truck (1).bmp",
    "image\\lefttoup\\truck\\truck (2).bmp",
    "image\\lefttoup\\truck\\truck (3).bmp",
    "image\\lefttoup\\truck\\truck (4).bmp",
    "image\\lefttoup\\truck\\truck (5).bmp",
    "image\\lefttoup\\truck\\truck (6).bmp"
};

char buslefttodown[30][50]={
    "image\\lefttodown\\bus\\bus (1).bmp",
    "image\\lefttodown\\bus\\bus (2).bmp",
    "image\\lefttodown\\bus\\bus (3).bmp",
    "image\\lefttodown\\bus\\bus (4).bmp",
    "image\\lefttodown\\bus\\bus (5).bmp",
    "image\\lefttodown\\bus\\bus (6).bmp"
};

char bikelefttodown[30][50]={
    "image\\lefttodown\\bike\\bike (1).bmp",
    "image\\lefttodown\\bike\\bike (2).bmp",
    "image\\lefttodown\\bike\\bike (3).bmp",
    "image\\lefttodown\\bike\\bike (4).bmp",
    "image\\lefttodown\\bike\\bike (5).bmp",
    "image\\lefttodown\\bike\\bike (6).bmp"
};

char carlefttodown[30][50]={
    "image\\lefttodown\\car\\car (1).bmp",
    "image\\lefttodown\\car\\car (2).bmp",
    "image\\lefttodown\\car\\car (3).bmp",
    "image\\lefttodown\\car\\car (4).bmp",
    "image\\lefttodown\\car\\car (5).bmp",
    "image\\lefttodown\\car\\car (6).bmp"
};

char trucklefttodown[30][50]={
    "image\\lefttodown\\truck\\truck (1).bmp",
    "image\\lefttodown\\truck\\truck (2).bmp",
    "image\\lefttodown\\truck\\truck (3).bmp",
    "image\\lefttodown\\truck\\truck (4).bmp",
    "image\\lefttodown\\truck\\truck (5).bmp",
    "image\\lefttodown\\truck\\truck (6).bmp"
};
int screencount=0;
//variable for controlling car movement
int lcarindex= 0,leftcar_x=5,leftcar_y=620+10,rightcar_x=1660,rightcar_y=630-88,upcar_x=700,upcar_y=5,downcar_x=800,downcar_y=screenheight;
int leftcounter=0;
int rightposition[10000];
int leftlength=478;
//variable for controlling signal
int signalindex=0;
bool leftup =false;
bool leftdown =true;
bool rightup=true;
bool rightdown=false;
void  backgroundandsignalshow(){
	iShowBMP(0,0,"image\\background and signals\\intersection.bmp");
	iShowBMP2(634,758,signals[signalindex%3],100);
	iShowBMP2(634,354,signals[(signalindex+1)%3],100);
	iShowBMP2(1015,758,signals[(signalindex+1)%3],100);
	iShowBMP2(1015,354,signals[signalindex%3],100);
}
int special_x1=0,special_y1=600,specialindex=0;
int special_x2=0,special_y2=630,specialindex1=0;
void leftcarshow(){
	iShowBMP2(leftcar_x,leftcar_y,left_vehicle[lcarindex],0);
	iShowBMP2(leftcar_x,leftcar_y-6,left_vehicle[lcarindex],0);
	if(leftcar_x>=150){
		iShowBMP2(leftcar_x-150,leftcar_y-30,left_vehicle[lcarindex],0);
		//iShowBMP2(leftcar_x-155,leftcar_y-44,left_vehicle[lcarindex+1],0);
		iShowBMP2(special_x1,special_y1+30,carlefttoup[specialindex],0);
	}
    if(leftcar_x>=320){
		iShowBMP2(leftcar_x-320,leftcar_y,left_vehicle[lcarindex+1],0);
		iShowBMP2(leftcar_x-320,leftcar_y-44,left_vehicle[lcarindex],0);
	}
	if(leftcar_x>=580){
		iShowBMP2(leftcar_x-550,leftcar_y,left_vehicle[lcarindex+2],0);
		iShowBMP2(leftcar_x-550,leftcar_y-44,left_vehicle[lcarindex+1],0);
	}
	if(leftcar_x>=800){
		iShowBMP2(leftcar_x-700,leftcar_y,left_vehicle[lcarindex+3],0);
		iShowBMP2(leftcar_x-720,leftcar_y-44,left_vehicle[lcarindex+2],0);
	}
	if(leftcar_x>=1050){
		iShowBMP2(leftcar_x-1030,leftcar_y,left_vehicle[lcarindex+2],0);
		iShowBMP2(leftcar_x-1030,leftcar_y-44,left_vehicle[lcarindex+3],0);
	}
}
void rightcarshow(){
	iShowBMP2( rightcar_x-35, rightcar_y, right_vehicle[0], 0);
    iShowBMP2( rightcar_x-30, rightcar_y -60,right_vehicle[0], 0);
	if ( rightcar_x<= 1515) {
    iShowBMP2(rightcar_x+150, rightcar_y, right_vehicle[lcarindex], 0);
    iShowBMP2(rightcar_x+165, rightcar_y - 60, right_vehicle[lcarindex + 1], 0);
}

if (rightcar_x <= 1665-320) {
    iShowBMP2(rightcar_x + 320, rightcar_y, right_vehicle[lcarindex + 1], 0);
    iShowBMP2(rightcar_x + 320, rightcar_y - 60, right_vehicle[lcarindex], 0);
}

if (rightcar_x <=1665- 580) {
    iShowBMP2(rightcar_x+550, rightcar_y, right_vehicle[lcarindex + 2], 0);
    iShowBMP2(rightcar_x+530, rightcar_y - 60, right_vehicle[lcarindex + 1], 0);
}

if (rightcar_x <=1665- 800) {
    iShowBMP2(rightcar_x+720, rightcar_y, right_vehicle[lcarindex + 3], 0);
    iShowBMP2(rightcar_x+750, rightcar_y - 60, right_vehicle[lcarindex + 2], 0);
}

if (rightcar_x <= 1050) {
    iShowBMP2(rightcar_x+1030, rightcar_y, right_vehicle[lcarindex + 2], 0);
    iShowBMP2(rightcar_x+1010, rightcar_y - 60, right_vehicle[lcarindex + 3], 0);
}

}
void upcarshow(){
	iShowBMP2(upcar_x,upcar_y,up_vehicle[lcarindex],0);
	iShowBMP2(upcar_x+30,upcar_y,up_vehicle[lcarindex+2],0);
	if(upcar_y>=150){
	   iShowBMP2(upcar_x,upcar_y-135,up_vehicle[lcarindex+3],0);
	   iShowBMP2(upcar_x+30,upcar_y-120,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y>=250){
		iShowBMP2(upcar_x,upcar_y-245,up_vehicle[lcarindex+1],0);
	     iShowBMP2(upcar_x+30,upcar_y-255,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y>=370){
		iShowBMP2(upcar_x,upcar_y-360,up_vehicle[lcarindex],0);
	     iShowBMP2(upcar_x+30,upcar_y-375,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y>=520){
		iShowBMP2(upcar_x,upcar_y-500,up_vehicle[lcarindex+1],0);
	     iShowBMP2(upcar_x+30,upcar_y-510,up_vehicle[lcarindex+2],0);
	}
	

}
void downcarshow(){
    iShowBMP2(downcar_x,downcar_y-30,downvhicle[0],0);
	iShowBMP2(downcar_x+40,downcar_y-30,downvhicle[1],0);
	if(downcar_y<=screenheight-150){
		 iShowBMP2(downcar_x,downcar_y-30+120,downvhicle[2],0);
	     iShowBMP2(downcar_x+40,downcar_y-30+120,downvhicle[1],0);
	}
	if(downcar_y<=screenheight-300){
         iShowBMP2(downcar_x,downcar_y-30+220,downvhicle[3],0);
	     iShowBMP2(downcar_x+40,downcar_y-30+220,downvhicle[1],0);
	}
	if(downcar_y<=screenheight-450){
		iShowBMP2(downcar_x,downcar_y-30+420,downvhicle[3],0);
	     iShowBMP2(downcar_x+40,downcar_y-30+420,downvhicle[1],0);
	}
}
void signalcolourchanging(){
	if(leftcounter%100==0 & leftcounter>0){
		signalindex++;
		if(signalindex%3==1){
				leftup=true;
				rightdown=true;
				rightup=false;
				leftdown=false;
			}
		else if((signalindex+1)%3==1){
			leftup=false;
			rightdown=false;
			rightup=true;
			leftdown=true;
		}
		else{
			leftup=false;
			rightdown=false;
			rightup=false;
			leftdown=false;

		}	
	}
	leftcounter++;

}
int lcarindex_2= 0,leftcar_x_2=5,leftcar_y_2=620+10,rightcar_x_2=1660,rightcar_y_2=630-88,upcar_x_2=700,upcar_y_2=5,downcar_x_2=800,downcar_y_2=screenheight;
int leftcounter_2=0;
//int rightposition[10000];
int leftlength_2=478;
//variable for controlling signal
int signalindex_2=0;
bool leftup_2 =false;
bool leftdown_2 =true;
bool rightup_2=true;
bool rightdown_2=false;
void signalshow2(){
	iShowBMP2(665,710,signals[signalindex%3],100);
	iShowBMP2(665,294,signals[(signalindex+1)%3],100);
	iShowBMP2(940,710,signals[(signalindex+1)%3],100);
	iShowBMP2(940,306,signals[signalindex%3],100);
}
void leftcarshow_2(){
    iShowBMP2(leftcar_x_2, leftcar_y_2, left_vehicle[lcarindex_2], 0);
    iShowBMP2(leftcar_x_2, leftcar_y_2 - 80, left_vehicle[lcarindex_2], 0);
    if (leftcar_x_2 >= 150) {
        iShowBMP2(leftcar_x_2 - 150, leftcar_y_2 - 30, left_vehicle[lcarindex_2], 0);
        //iShowBMP2(leftcar_x_2 - 155, leftcar_y_2 - 44, left_vehicle[lcarindex_2 + 1], 0);
        //iShowBMP2(special_x1_2, special_y1_2 + 30, carlefttoup[specialindex_2], 0);
    }
    if (leftcar_x_2 >= 320) {
        iShowBMP2(leftcar_x_2 - 320, leftcar_y_2, left_vehicle[lcarindex_2 + 1], 0);
        iShowBMP2(leftcar_x_2 - 320, leftcar_y_2 - 80, left_vehicle[lcarindex_2], 0);
    }
    if (leftcar_x_2 >= 580) {
        iShowBMP2(leftcar_x_2 - 550, leftcar_y_2, left_vehicle[lcarindex_2 + 2], 0);
        iShowBMP2(leftcar_x_2 - 550, leftcar_y_2 - 80, left_vehicle[lcarindex_2 + 1], 0);
    }
    if (leftcar_x_2 >= 800) {
        iShowBMP2(leftcar_x_2 - 700, leftcar_y_2, left_vehicle[lcarindex_2 + 3], 0);
        iShowBMP2(leftcar_x_2 - 720, leftcar_y_2 - 80, left_vehicle[lcarindex_2 + 2], 0);
    }
    if (leftcar_x_2 >= 1050) {
        iShowBMP2(leftcar_x_2 - 1030, leftcar_y_2, left_vehicle[lcarindex_2 + 2], 0);
        iShowBMP2(leftcar_x_2 - 1030, leftcar_y_2 - 80, left_vehicle[lcarindex_2 + 3], 0);
    }
}
void iDraw() {
	//place your drawing codes here
	
	iClear();
	if(screencount==0){
		backgroundandsignalshow();
    leftcarshow();
    rightcarshow();
	upcarshow();
	downcarshow();
	signalcolourchanging();
	}
	else if(screencount==1){
		iShowBMP(0,0,"image\\background and signals\\6lanecrossroad.bmp");
         signalshow2();
		 signalcolourchanging();
		 leftcarshow_2();
	}

	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	//printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here

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
	if(key==GLUT_KEY_RIGHT){
		screencount=1;
	}
	//place your codes for other keys here
}
void leftcar_move(){}
void change(){
	if(leftup)leftcar_x+=22+rand()%7;
	else{
		if(leftcar_x>690)leftcar_x+=25+rand()%2;
		else if(leftcar_x<600)leftcar_x+=22+rand()%3;
		else leftcar_x;
	}
	if(leftcar_x>=1655+1030)leftcar_x=5;
    if(rightdown)rightcar_x-=20+rand()%3;
	else{
		if(rightcar_x<960)rightcar_x-=23+rand()%2;
		else if(rightcar_x>990)rightcar_x-=20+rand()%3;
		else rightcar_x;
	}
	if(rightcar_x+1090<=0)rightcar_x=1665;
	if(leftdown)upcar_y+=15+rand()%5;
	else{
		if(upcar_y>360)upcar_y+=18+rand()%3;
		else if(upcar_y<320)upcar_y+=16;
		else upcar_y;
	}
	if(upcar_y>=screenheight+800)upcar_y=5;
	if(rightup)downcar_y-=15+rand()%2;
	else{
		if(downcar_y>800)downcar_y-=17+rand()%2;
		else if(downcar_y<720)downcar_y-=15+rand()%2;
		else downcar_y;
	}
	if(downcar_y+500<=0)downcar_y=screenheight-5;
	if(special_x1 < 580-2*40)
        special_x1 += 19;
    else if(special_x1 >= 580-2*40 && special_x1 <= 730){
		if(leftup){
			if(special_x1<670){
				special_x1+=20;
			}
        else if(special_x1>=670){
		special_x1 += 25;
        special_y1 += 5;
		if(specialindex < 5)
            specialindex++;
		}
		}      
    }
    else {
        specialindex = 5;
        special_y1 += 20;

	}
	if(special_y1>1096 ){
		if(leftcar_x>40&&leftcar_x<=60){
		special_x1=leftcar_x-80;
		special_y1=610;
		specialindex=0;
		}
		
		
	}
	if(special_x2<540){
		special_x2+=18;
	}
	else if(special_x2>=540 && special_x2<=920){
		if(leftup){
			if(special_x2<630+240)
			special_x2+=15;
		
		else if(special_x2>=630+240){
			special_x2+=15;
			if(specialindex1<5)specialindex1++;
		}
		}
	}
	else{
		specialindex1=5;
		special_y2-=20;
	}
	if(special_y2>1096 ){
		if(leftcar_x>40&&leftcar_x<=60){
		special_x2=leftcar_x;
		special_y1=610;
		specialindex=0;
		}
		
		
	}

	
	}
int main() {
	//place your own initialization codes here.
	iSetTimer(10, change);
	iInitialize(screenwidth, screenheight, "demo");
	return 0;
}
