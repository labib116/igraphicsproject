#include "iGraphics.h"
#include <windows.h>
#include <mmsystem.h>
#include<stdlib.h>
#include<time.h>
#pragma comment(lib,"winmm.lib")

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



char busuptoleft[30][50]={
    "image\\uptoleft\\bus\\bus (1).bmp",
    "image\\uptoleft\\bus\\bus (2).bmp",
    "image\\uptoleft\\bus\\bus (3).bmp",
    "image\\uptoleft\\bus\\bus (4).bmp",
    "image\\uptoleft\\bus\\bus (5).bmp",
    "image\\uptoleft\\bus\\bus (6).bmp"
};

/*char bikeuptoleft[30][50]={
    "image\\uptoleft\\bike\\bike(1).bmp",
    "image\\uptoleft\\bike\\bike (2).bmp",
    "image\\uptoleft\\bike\\bike (3).bmp",
    "image\\uptoleft\\bike\\bike (4).bmp",
    "image\\uptoleft\\bike\\bike (5).bmp",
    "image\\uptoleft\\bike\\bike (6).bmp"
};*/

char caruptoleft[30][50]={
    "image\\uptoleft\\car\\car (1).bmp",
    "image\\uptoleft\\car\\car (2).bmp",
    "image\\uptoleft\\car\\car (3).bmp",
    "image\\uptoleft\\car\\car (4).bmp",
    "image\\uptoleft\\car\\car (5).bmp",
    "image\\uptoleft\\car\\car (6).bmp"
};
char truckrightoup[30][50]={
	"image\\righttoup\\truck\\truck (1).bmp",
"image\\righttoup\\truck\\truck (2).bmp",
"image\\righttoup\\truck\\truck (3).bmp",
 "image\\righttoup\\truck\\truck (4).bmp",
 "image\\righttoup\\truck\\truck (5).bmp",
 "image\\righttoup\\truck\\truck (6).bmp"
};

char busdowntoright[30][50]={
    "image\\downtoright\\bus(1).bmp",
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
/*char busdowntoright[30][50]={
    "image\\downtoright\\bus (1).bmp",
    "image\\downtoright\\bus\\bus (2).bmp",
    "image\\downtoright\\bus\\bus (3).bmp",
    "image\\downtoright\\bus\\bus (4).bmp",
    "image\\downtoright\\bus\\bus (5).bmp",
    "image\\downtoright\\bus\\bus (6).bmp"
};*/

/*char bikedowntoright[30][50]={
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
};*/
char bikeuptoleft[30][50]={
    "image\\uptoleft\\bike\\bike (1).bmp",
    "image\\uptoleft\\bike\\bike (2).bmp",
    "image\\uptoleft\\bike\\bike (3).bmp",
    "image\\uptoleft\\bike\\bike (4).bmp",
    "image\\uptoleft\\bike\\bike (5).bmp",
    "image\\uptoleft\\bike\\bike (6).bmp"
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


//variable for screen show
int screencount=-1;
//variable for controlling car movement
int lcarindex= 0,leftcar_x=5,leftcar_y=600,rightcar_x=1660,rightcar_y=600-95,upcar_x=700,upcar_y=5,downcar_x=800,downcar_y=screenheight;
int leftcounter=0;
int rightposition[10000];
int leftlength=478;
//variable for controlling signal
int signalindex=0;
bool leftup =false;
bool leftdown =true;
bool rightup=true;
bool rightdown=false;
bool musicon1=true;
void  backgroundandsignalshow(){
	iShowBMP(0,0,"image\\background and signals\\intersection.bmp");
	iShowBMP2(634,758,signals[signalindex%3],100);
	iShowBMP2(634,354,signals[(signalindex+1)%3],100);
	iShowBMP2(1015,758,signals[(signalindex+1)%3],100);
	iShowBMP2(1015,354,signals[signalindex%3],100);
}
void leftcarshow(){
	iShowBMP2(leftcar_x,leftcar_y,left_vehicle[lcarindex],0);
	//iShowBMP2(leftcar_x,leftcar_y-6,left_vehicle[lcarindex],0);
	if(leftcar_x>=150){
		iShowBMP2(leftcar_x-150,leftcar_y-30,left_vehicle[lcarindex],0);
		//iShowBMP2(leftcar_x-155,leftcar_y-44,left_vehicle[lcarindex+1],0);
		iShowBMP2(leftcar_x-150,leftcar_y+10,left_vehicle[lcarindex],0);
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

int lcarindex_2= 0,leftcar_x_2=5,leftcar_y_2=580,rightcar_x_2=1660,rightcar_y_2=580-88,upcar_x_2=740,upcar_y_2=50,downcar_x_2=890,downcar_y_2=screenheight;
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
	iShowBMP2(730,660,signals[signalindex_2%3],100);
	iShowBMP2(730,240,signals[(signalindex_2+1)%3],100);
	iShowBMP2(1030,650,signals[(signalindex_2+1)%3],100);
	iShowBMP2(1030,233,signals[signalindex_2%3],100);
}
void leftcarshow_2(){
    iShowBMP2(leftcar_x_2, leftcar_y_2, left_vehicle[lcarindex_2], 0);
    iShowBMP2(leftcar_x_2, leftcar_y_2 - 80, left_vehicle[lcarindex_2], 0);
    if (leftcar_x_2 >= 150) {
        iShowBMP2(leftcar_x_2 - 150, leftcar_y_2, left_vehicle[lcarindex_2], 0);
        iShowBMP2(leftcar_x_2 - 155, leftcar_y_2 - 84, left_vehicle[lcarindex_2 + 1], 0);
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
void rightcarshow_2(){
    iShowBMP2( rightcar_x_2 - 35, rightcar_y_2-100, right_vehicle[0], 0);
    iShowBMP2( rightcar_x_2 - 30, rightcar_y_2 - 80-100, right_vehicle[0], 0);
    if ( rightcar_x_2 <= 1515) {
        iShowBMP2(rightcar_x_2 + 150, rightcar_y_2-100, right_vehicle[lcarindex_2], 0);
        iShowBMP2(rightcar_x_2 + 165, rightcar_y_2 - 80-100, right_vehicle[lcarindex_2 + 1], 0);
    }

    if (rightcar_x_2 <= 1665 - 320) {
        iShowBMP2(rightcar_x_2 + 320, rightcar_y_2-100, right_vehicle[lcarindex_2 + 1], 0);
        iShowBMP2(rightcar_x_2 + 320, rightcar_y_2 - 80-100, right_vehicle[lcarindex_2], 0);
    }

    if (rightcar_x_2 <= 1665 - 580) {
        iShowBMP2(rightcar_x_2 + 550, rightcar_y_2-100, right_vehicle[lcarindex_2 + 2], 0);
        iShowBMP2(rightcar_x_2 + 530, rightcar_y_2 - 80-100, right_vehicle[lcarindex_2 + 1], 0);
    }

    if (rightcar_x_2 <= 1665 - 800) {
        iShowBMP2(rightcar_x_2 + 720, rightcar_y_2-100, right_vehicle[lcarindex_2 + 3], 0);
        iShowBMP2(rightcar_x_2 + 750, rightcar_y_2 - 80-100, right_vehicle[lcarindex_2 + 2], 0);
    }

    if (rightcar_x_2 <= 1050) {
        iShowBMP2(rightcar_x_2 + 1030, rightcar_y_2-100, right_vehicle[lcarindex_2 + 2], 0);
        iShowBMP2(rightcar_x_2 + 1010, rightcar_y_2 - 80-100, right_vehicle[lcarindex_2 + 3], 0);
    }
}
void upcarshow_2(){
	iShowBMP2(upcar_x_2,upcar_y_2,up_vehicle[lcarindex],0);
	iShowBMP2(upcar_x_2+80,upcar_y_2,up_vehicle[lcarindex+2],0);
	if(upcar_y+50>=150){
	   iShowBMP2(upcar_x_2,upcar_y_2-135,up_vehicle[lcarindex+3],0);
	   iShowBMP2(upcar_x_2+80,upcar_y_2-140,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y+50>=250){
		iShowBMP2(upcar_x_2,upcar_y_2-245,up_vehicle[lcarindex+1],0);
	     iShowBMP2(upcar_x_2+80,upcar_y_2-255,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y+50>=370){
		iShowBMP2(upcar_x_2,upcar_y_2-360,up_vehicle[lcarindex],0);
	     iShowBMP2(upcar_x_2+80,upcar_y_2-375,up_vehicle[lcarindex+2],0);
	}
	if(upcar_y+50>=520){
		iShowBMP2(upcar_x_2,upcar_y_2-500,up_vehicle[lcarindex+1],0);
	     iShowBMP2(upcar_x_2+80,upcar_y_2-510,up_vehicle[lcarindex+2],0);
	}
	

}
void downcarshow_2(){
    iShowBMP2(downcar_x_2, downcar_y_2 - 30, downvhicle[0], 0);
    iShowBMP2(downcar_x_2 + 70, downcar_y_2 - 30, downvhicle[1], 0);
    if(downcar_y_2 <= screenheight - 150){
        iShowBMP2(downcar_x_2, downcar_y_2 - 30 + 120, downvhicle[2], 0);
        iShowBMP2(downcar_x_2 + 70, downcar_y_2 - 30 + 120, downvhicle[1], 0);
    }
    if(downcar_y_2 <= screenheight - 300){
        iShowBMP2(downcar_x_2, downcar_y_2 - 30 + 220, downvhicle[3], 0);
        iShowBMP2(downcar_x_2 + 70, downcar_y_2 - 30 + 220, downvhicle[1], 0);
    }
    if(downcar_y_2 <= screenheight - 450){
        iShowBMP2(downcar_x_2, downcar_y_2 - 30 + 420, downvhicle[3], 0);
        iShowBMP2(downcar_x_2 + 70, downcar_y_2 - 30 + 420, downvhicle[1], 0);
    }
}
int special_x1=0,special_y1=650,specialindex=0;
int special_x2=0,special_y2=650,specialindex1=0;
void specialleftcarshow_1(){
    iShowBMP2(special_x1,special_y1,carlefttoup[specialindex],0);
    if(special_x1>70){
        iShowBMP2(special_x2,special_y2,carlefttoup[specialindex1],0);
    }
    else{
        if(special_x2>500){
            iShowBMP2(special_x2,special_y2,carlefttoup[specialindex1],0);
        }
    }
}

int special_x3=1050, special_y3=1096, specialindex2=0;
int special_x4=1050, special_y4=1096, specialindex3=0;

void specialdowncarshow_1(){
    iShowBMP2(special_x3, special_y3, bikedowntoright[specialindex2], 0);
    if (special_y3 < 800) {
        iShowBMP2(special_x4, special_y4, bikedowntoright[specialindex3], 0);
    }
    else {
        if (special_y4 > 300) {
            iShowBMP2(special_x4, special_y4, bikedowntoright[specialindex3], 0);
        }
    }
}
int special_x5=650,special_y5=0,specialindex4=0;
void specialuptoleftcarshow(){
    iShowBMP2(special_x5,special_y5,caruptoleft[specialindex4],0);
}
int special_x6=1550,special_y6=230,specialindex5=0;
void specialrighttodowncarshow(){
    iShowBMP2(special_x6,special_y6,carrighttodown[specialindex5],0);
}
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
void signalcolourchanging_2(){
	if(leftcounter_2%100==0 & leftcounter_2>0){
		signalindex_2++;
		if(signalindex_2%3==1){
				leftup_2=true;
				rightdown_2=true;
				rightup_2=false;
				leftdown_2=false;
			}
		else if((signalindex_2+1)%3==1){
			leftup_2=false;
			rightdown_2=false;
			rightup_2=true;
			leftdown_2=true;
		}
		else{
			leftup_2=false;
			rightdown_2=false;
			rightup_2=false;
			leftdown_2=false;

		}	
	}
	leftcounter_2++;

}
void backbuttonshow(){
    iShowBMP2(5,1000,"image\\menu and others\\back.bmp",0);
}
int infocount=0;
char info[30][50]={"image\\menu and others\\info\\info (1).bmp",
"image\\menu and others\\info\\info (2).bmp",
"image\\menu and others\\info\\info (3).bmp",
"image\\menu and others\\info\\info (4).bmp"};
int i;
void infoshow(){
    iShowBMP(0,0,"image\\menu and others\\info\\info.bmp");
    
   /* infocount++;
   
    if(infocount>30 && infocount<60){
        i=0;
    }
    if(infocount>=60 && infocount<90){
       i=1;
    }
    if(infocount>-90 && infocount<120){
        i=2;
    }
    if(infocount>=120 && infocount<150){
        i=3;
    }
     iShowBMP2(200,400,info[i],100);*/
}
char menu[30][50]={
    "image\\menu and others\\menu\\menu (0).bmp",
    "image\\menu and others\\menu\\menu (1).bmp"
};
int menuindex=1;
void iDraw() {
	//place your drawing codes here
	
	iClear();
    if(screencount==-1){
        iShowBMP(0,0,"image\\traffic signal simulator.bmp");
    }
    if(screencount==0){
        if(musicon1==false)
        iShowBMP(0,0,menu[0]);
        else{
            iShowBMP(0,0,menu[1]);
        }
    }
	if(screencount==1){
	backgroundandsignalshow();
    leftcarshow();
    rightcarshow();
	upcarshow();
	downcarshow();
	signalcolourchanging();
    backbuttonshow();
	}
	else if(screencount==2){
		iShowBMP(0,0,"image\\background and signals\\6lanecrossroad.bmp");
         signalshow2();
		 signalcolourchanging_2();
		 leftcarshow_2();
		 rightcarshow_2();
		 upcarshow_2();
		 downcarshow_2();
         specialleftcarshow_1();
         specialdowncarshow_1();
         specialuptoleftcarshow();
         specialrighttodowncarshow();
         backbuttonshow();
		 
	}
    else if (screencount==3){
        iShowBMP(0,0,"image\\background and signals\\roundabout.bmp");
        lefttocentercaeshow();
	    downtocentercarshow();
	    centertoleftcarshow();
        centertodownshow();
	    timecount++;
        backbuttonshow();
    }
    if(screencount==4){
        infoshow();
        backbuttonshow();
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
int flag=0;
void iMouse(int button, int state, int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
        if(screencount==0){
            if(mx>=663 && mx<=933 && my>=874 && my<=986){
            screencount=1;
            if(musicon1){
                PlaySound("music\\road.wav",NULL,SND_ASYNC);
            }
            
        }
        if(mx>=645 && mx<=945 && my>=690 && my<=799){
            screencount=2;
            if(musicon1){
                PlaySound("music\\road.wav",NULL,SND_ASYNC);
            }
        }
        if(mx>=645 && mx<=945 && my>=491 && my<=602){
            screencount=3;
            if(musicon1){
                PlaySound("music\\road.wav",NULL,SND_ASYNC);
            }
        }
        if(mx>=645 && mx<=945 && my>=300 && my<=437){
            screencount=4;
            
        }
        
        if(mx>=1417 && mx<=1545 && my>=144 && my<=262 ){
            
             if(musicon1==TRUE){
                musicon1=FALSE;
                PlaySound(0,0,0);
            }
            else {
                musicon1=TRUE;
                PlaySound("music\\congrats.wav",NULL,SND_ASYNC);
            }
                
        }
       
        if(mx>=645 && mx<=945 && my>=114 && my<=239){
            exit(0);
        }
        }
        else{
            if(mx>=9 && mx<=51 && my>=1000 && my<=1045){
            screencount=0;
            if(musicon1){
                PlaySound("music\\congrats.wav",NULL,SND_ASYNC);
            }
            
        }

        }
        
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
    if(key==' '){
        if(screencount==-1)
        screencount=0;
        if(musicon1){
            PlaySound("music\\congrats.wav",NULL,SND_ASYNC);
        }
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
        if(screencount<=3)
		screencount++;
	}
	//place your codes for other keys here
	if(key==GLUT_KEY_LEFT){
        if(screencount>0)
		screencount--;
	}
}
void leftcarmove(int *leftcar_x_2, int leftcar_y_2, bool leftup) {
    if (leftup) 
        *leftcar_x_2 += 22 + rand()%7;
    else {
        if (*leftcar_x_2 > 690) 
            *leftcar_x_2 += 25 + rand()%2;
        else if (*leftcar_x_2 < 580) 
            *leftcar_x_2 += 22 + rand()%3;
    }
    if (*leftcar_x_2 >= 1655 + 1030) 
        *leftcar_x_2 = 5;
}
void leftcarmove_2(int *leftcar_x_2, int leftcar_y_2, bool leftup) {
    if (leftup) 
        *leftcar_x_2 += 22 + rand()%7;
    else {
        if (*leftcar_x_2 > 590) 
            *leftcar_x_2 += 25 + rand()%2;
        else if (*leftcar_x_2 < 500) 
            *leftcar_x_2 += 22 + rand()%3;
    }
    if (*leftcar_x_2 >= 1655 + 1030) 
        *leftcar_x_2 = 5;
}

void rightcarmove(int *rightcar_x_2, bool rightdown) {
    if (rightdown) 
        *rightcar_x_2 -= 20 + rand()%3;
    else {
        if (*rightcar_x_2 < 960) 
            *rightcar_x_2 -= 23 + rand()%2;
        else if (*rightcar_x_2 > 990) 
            *rightcar_x_2 -= 20 + rand()%3;
    }
    if (*rightcar_x_2 + 1090 <= 0) 
        *rightcar_x_2 = 1665;
}
void rightcarmove_2(int *rightcar_x_2, bool rightdown) {
    if (rightdown) 
        *rightcar_x_2 -= 20 + rand()%3;
    else {
        if (*rightcar_x_2 < 1170) 
            *rightcar_x_2 -= 23 + rand()%2;
        else if (*rightcar_x_2 > 1230) 
            *rightcar_x_2 -= 20 + rand()%3;
    }
    if (*rightcar_x_2 + 1090 <= 0) 
        *rightcar_x_2 = 1665;
}

void upcarmove(int *upcar_y_2, bool leftdown) {
    if (leftdown) 
        *upcar_y_2 += 15 + rand()%5;
    else {
        if (*upcar_y_2 > 360) 
            *upcar_y_2 += 18 + rand()%3;
        else if (*upcar_y_2 < 320) 
            *upcar_y_2 += 16;
    }
    if (*upcar_y_2 >= screenheight + 800) 
        *upcar_y_2 = 5;
}
void upcarmove_2(int *upcar_y_2, bool leftdown) {
    if (leftdown) 
        *upcar_y_2 += 10 + rand()%5;
    else {
        if (*upcar_y_2 > 140) 
            *upcar_y_2 += 12 + rand()%3;
        else if (*upcar_y_2 < 120) 
            *upcar_y_2 += 13;
    }
    if (*upcar_y_2 >= screenheight + 300) 
        *upcar_y_2 = 50;
}

void downcarmove(int *downcar_y_2, bool rightup) {
    if (rightup) 
        *downcar_y_2 -= 15 + rand()%2;
    else {
        if (*downcar_y_2 > 700) 
            *downcar_y_2 -= 17 + rand()%2;
        else if (*downcar_y_2 < 650) 
            *downcar_y_2 -= 15 + rand()%2;
    }
    if (*downcar_y_2 + 500 <= 0) 
        *downcar_y_2 = screenheight - 5;
}
void downcarmove_2(int *downcar_y_2, bool rightup) {
    if (rightup) 
        *downcar_y_2 -= 15 + rand()%2;
    else {
        if (*downcar_y_2 > 800) 
            *downcar_y_2 -= 17 + rand()%2;
        else if (*downcar_y_2 < 720) 
            *downcar_y_2 -= 15 + rand()%2;
    }
    if (*downcar_y_2 + 500 <= 0) 
        *downcar_y_2 = screenheight - 5;
}
void specialleftcar1move() {
    
        if (special_x1 < 620) {
        special_x1 += 20;
        if (special_x1 > 581 && special_x1 < 620) {
            if (specialindex < 5)    
                specialindex++;
        }
    }
    else {
        specialindex = 5;
        special_y1 += 20;
        //special_x1 = initial_x1;
    }
    if(special_y1+100>=screenheight){
        specialindex=0;
        special_x1=5;
        special_y1=650;
    }
    
    
}
void specialleftcar_move_2() {
        if (special_x2 < 620) {
            special_x2 += 20;
            if (special_x2 > 581 && special_x2 < 620) {
                if (specialindex1 < 5)    
                    specialindex1++;
            }
        } else {
            specialindex1 = 5;
            special_y2 += 20;
        }

        // Check if the bus has reached the bottom of the screen
        if (special_y2 +100>= screenheight) {
            // Reset parameters
            specialindex1 = 0;
            special_x2 = 0; // Corrected to reset x-coordinate to 0
            special_y2 = 650; // Assuming 650 is the initial y-coordinate for the bus
        }
}
void specialcarmovedown_1(){
       if(special_y3>720){
        special_y3-=20;
        if(special_y3<780 && special_y3>720){
            if(specialindex3<5)
            specialindex2++;
        }
       }
       else{
        specialindex2=5;
        special_x3+=20;
       }
       if(special_x3>=screenwidth){
        special_x3=1050;
        special_y3=1050;
        specialindex2=0;
       }

}
void specialcarmovedown_2(){
    if(special_y4>720){
        special_y4-=20;
        if(special_y4<780 && special_y4>720){
            if(specialindex3<5)
            specialindex3++;
        }
       }
       else{
        specialindex3=5;
        special_x4+=20;
       }
       if(special_x4>=screenwidth){
        special_x4=1050;
        special_y4=1050;
        specialindex3=0;
       }
}
void specialcarmovedwontoleft(){
    if(special_y5<220){
        special_y5+=20;
        if(special_y5>160 && special_y5<220){
            if(specialindex4<5){
                specialindex4++;
            }
        }
    }
    if(special_y5>=220){
        specialindex4=5;
        special_x5-=20;
    }
    if(special_x5<=0){
        special_x5=650;
        special_y5=0;
        specialindex4=0;
    }

}
void specialcarmoverighttodown(){
    if(special_x6>1030){
        special_x6-=15;
        if(special_x5<=1150 && special_x5>1030){
            if(specialindex5<5){
                specialindex5++;
            }
        }
    }
    if(special_x6<=1030){
        specialindex5=5;
        special_y6-=20;
    }
    if(special_y6<0){
        special_x6=1500;
        special_y6=230;
        specialindex5=0;
    }
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





	void change() {
		if(screencount==1){
	leftcarmove(&leftcar_x, leftcar_y, leftup);
    rightcarmove(&rightcar_x, rightdown);
    upcarmove(&upcar_y, leftdown);
    downcarmove(&downcar_y, rightup);
		}
    if(screencount==2){
		leftcarmove_2(&leftcar_x_2,leftcar_y_2,leftup_2);
		rightcarmove_2(&rightcar_x_2,rightdown_2);
		upcarmove_2(&upcar_y_2,leftdown_2);
		downcarmove_2(&downcar_y_2,rightup_2);
        specialleftcar1move();
        if(special_x1>150){
            specialleftcar_move_2();
        }
        else{
        if(special_x2>500){
            specialleftcar_move_2();
        }
        
    }
    specialcarmovedown_1();
    if(special_y3<screenheight-150){
        specialcarmovedown_2();
    }
    else{
        if(special_y4>=screenheight-150){
            specialcarmovedown_2();
        }
    }
    specialcarmovedwontoleft();
    specialcarmoverighttodown();
        
	}
    if(screencount==3){
         
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
   
	
}

	
	
int main() {
	//place your own initialization codes here.
    if(musicon1 && screencount==0){
        PlaySound("music\\congrats.wav",NULL,SND_ASYNC);
    }
	iSetTimer(10, change);
	iInitialize(screenwidth, screenheight, "demo");
	return 0;
}
