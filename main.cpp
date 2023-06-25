#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>

using namespace std;

int a1=80, a2=280, b1=280, b2=280;
int c1=65, c2=45;
int f1=600 ,f2=650, f3=700;

void glass(){
    ///glass
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(0, 320);
	glVertex2i(0, 390);
	glVertex2i(140, 390);
	glVertex2i(140, 320);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(0, 480);
	glVertex2i(0, 410);
	glVertex2i(140, 410);
	glVertex2i(140, 480);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(300, 480);
	glVertex2i(300, 410);
	glVertex2i(160, 410);
	glVertex2i(160, 480);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(300, 320);
	glVertex2i(300, 390);
	glVertex2i(160, 390);
	glVertex2i(160, 320);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(0, 230);
	glVertex2i(0, 300);
	glVertex2i(140, 300);
	glVertex2i(140, 230);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.129, 0.341);
	glVertex2i(300, 230);
	glVertex2i(300, 300);
	glVertex2i(160, 300);
	glVertex2i(160, 230);

	glEnd();
}

void moon(){
    ///moon
    float radius;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.969, 0.6);
	for(int i=0; i< 360; i++)
         {
             radius = i * 3.142/18;
             glVertex2f(205 + 20 * cos(radius), 445 + 20 * sin(radius));
         }

	glEnd();
}

void cloud(){
    ///cloud1
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(100, 460);
	glVertex2i(100, 430);
	glVertex2i(30, 430);
	glVertex2i(30, 460);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(120, 450);
	glVertex2i(120, 440);
	glVertex2i(100, 440);
	glVertex2i(100, 450);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(18, 454);
	glVertex2i(18, 445);
	glVertex2i(30, 445);
	glVertex2i(30, 454);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(40, 460);
	glVertex2i(40, 465);
	glVertex2i(90, 465);
	glVertex2i(90, 460);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(30, 445);
	glVertex2i(30, 436);
	glVertex2i(10, 436);
	glVertex2i(10, 445);

	glEnd();

	///cloud2
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(150, 440);
	glVertex2i(150, 420);
	glVertex2i(180, 420);
	glVertex2i(180, 440);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(150, 435);
	glVertex2i(150, 425);
	glVertex2i(130, 425);
	glVertex2i(130, 435);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(150, 440);
	glVertex2i(150, 435);
	glVertex2i(138, 435);
	glVertex2i(138, 440);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(180, 437);
	glVertex2i(180, 423);
	glVertex2i(190, 423);
	glVertex2i(190, 437);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(190, 433);
	glVertex2i(190, 427);
	glVertex2i(212, 427);
	glVertex2i(212, 433);

	glEnd();

	///cloud3
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(300, 465);
	glVertex2i(300, 435);
	glVertex2i(250, 435);
	glVertex2i(250, 465);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(220, 460);
	glVertex2i(220, 442);
	glVertex2i(250, 442);
	glVertex2i(250, 460);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
	glVertex2i(220, 457);
	glVertex2i(220, 450);
	glVertex2i(205, 450);
	glVertex2i(205, 457);

	glEnd();
}

void tree(){
    ///tree1
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(50, 360);
	glVertex2i(20, 330);
	glVertex2i(80, 330);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(50, 340);
	glVertex2i(0, 290);
	glVertex2i(110, 290);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(50, 320);
	glVertex2i(-20, 240);
	glVertex2i(130, 240);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(40, 230);
	glVertex2i(40, 240);
	glVertex2i(60, 240);
	glVertex2i(60, 230);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(50, 360);
	glVertex2i(35, 345);
	glVertex2i(45, 348);
	glVertex2i(54, 335);
	glVertex2i(56, 350);
	glVertex2i(70, 340);

	glEnd();

    ///tree2
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200, 340);
	glVertex2i(170, 300);
	glVertex2i(230, 300);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200, 320);
	glVertex2i(170, 280);
	glVertex2i(230, 280);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200, 300);
	glVertex2i(160, 240);
	glVertex2i(240, 240);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(194, 230);
	glVertex2i(194, 240);
	glVertex2i(206, 240);
	glVertex2i(206, 230);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(200, 340);
	glVertex2i(188, 325);
	glVertex2i(200, 335);
	glVertex2i(208, 330);

	glEnd();
}

void snow(){
    ///snow1
    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.0, 1.0);
	glVertex2i(44, 260);
	glVertex2i(44, 266);
	glVertex2i(38, 266);
	glVertex2i(38, 260);

	glEnd();

	///snow2
    glBegin(GL_POLYGON);
    glColor3f(0.753, 0.961, 0.984);
	glVertex2i(74, 368);
	glVertex2i(70, 364);
	glVertex2i(74, 360);
	glVertex2i(78, 364);

	glEnd();

	///snow3
	float radius1;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(120 + 3 * cos(radius1), 330 + 3 * sin(radius1));
         }

	glEnd();

	///snow4
	float radius2;

    glBegin(GL_POLYGON);
    glColor3f(0.753, 0.961, 0.984);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(24 + 3 * cos(radius2), 442 + 3 * sin(radius2));
         }

	glEnd();

	///snow5
	float radius3;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius3 = i * 3.142/18;
             glVertex2f(280 + 3 * cos(radius3), 250 + 3 * sin(radius3));
         }

	glEnd();

	///snow6
    glBegin(GL_POLYGON);
    glColor3f(0.753, 0.961, 0.984);
	glVertex2i(254, 340);
	glVertex2i(254, 346);
	glVertex2i(248, 346);
	glVertex2i(248, 340);

	glEnd();

	///snow7
	float radius4;

    glBegin(GL_POLYGON);
    glColor3f(0.878, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius4 = i * 3.142/18;
             glVertex2f(270 + 3 * cos(radius4), 375 + 3 * sin(radius4));
         }

	glEnd();

	///snow8
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(244, 428);
	glVertex2i(240, 424);
	glVertex2i(244, 420);
	glVertex2i(248, 424);

	glEnd();
}

void snowman(){
    ///left arm
	glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.322, 0.18, 0.082);
    glVertex2i(140, 260);
    glVertex2i(a1,b1);

    glEnd();

    ///right arm
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.322, 0.18, 0.082);
    glVertex2i(220, 260);
    glVertex2i(a2,b2);

    glEnd();

    ///snowman
    float radius1;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(180 + 60 * cos(radius1), 170 + 60 * sin(radius1));
         }

	glEnd();

	float radius2;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(180 + 45 * cos(radius2), 250 + 45 * sin(radius2));
         }

	glEnd();

	float radius3;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius3 = i * 3.142/18;
             glVertex2f(180 + 30 * cos(radius3), 320 + 30 * sin(radius3));
         }

	glEnd();

	///eyes
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(175, 327);
	glVertex2i(175, 335);
	glVertex2i(167, 335);
	glVertex2i(167, 327);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(172, 330);
	glVertex2i(172, 334);
	glVertex2i(168, 334);
	glVertex2i(168, 330);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(195, 327);
	glVertex2i(195, 335);
	glVertex2i(187, 335);
	glVertex2i(187, 327);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(192, 330);
	glVertex2i(192, 334);
	glVertex2i(188, 334);
	glVertex2i(188, 330);

    glEnd();

    ///nose
    glBegin(GL_POLYGON);
    glColor3f(0.816, 0.357, 0.02);
	glVertex2i(181, 325);
	glVertex2i(175, 315);
	glVertex2i(187, 315);

	glEnd();

	///buttons
	float radius4;

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	for(int i=0; i< 360; i++)
         {
             radius4 = i * 3.142/18;
             glVertex2f(180 + 4 * cos(radius4), 238 + 4 * sin(radius4));
         }

	glEnd();

	float radius5;

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	for(int i=0; i< 360; i++)
         {
             radius5 = i * 3.142/18;
             glVertex2f(180 + 4 * cos(radius5), 258 + 4 * sin(radius5));
         }

	glEnd();

	float radius6;

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	for(int i=0; i< 360; i++)
         {
             radius6 = i * 3.142/18;
             glVertex2f(180 + 4 * cos(radius6), 278 + 4 * sin(radius6));
         }

	glEnd();

	///hat
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(210, 385);
	glVertex2i(210, 350);
	glVertex2i(150, 350);
	glVertex2i(150, 385);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(220, 348);
	glVertex2i(220, 340);
	glVertex2i(140, 340);
	glVertex2i(140, 348);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.65, 0.043, 0.063);
    glVertex2i(210, 348);
	glVertex2i(210, 360);
	glVertex2i(150, 360);
	glVertex2i(150, 348);

    glEnd();

    ///scarf
    glBegin(GL_POLYGON);
    glColor3f(0.208, 0.322, 0.063);
    glVertex2i(206, 290);
	glVertex2i(204, 300);
	glVertex2i(150, 300);
	glVertex2i(150, 290);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.208, 0.322, 0.063);
    glVertex2i(210, 290);
	glVertex2i(210, 250);
	glVertex2i(200, 250);
	glVertex2i(200, 290);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.2, 0.53, 0.031);
	glVertex2i(200, 290);
	glVertex2i(210, 290);
	glVertex2i(204, 300);
	glVertex2i(200, 300);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.2, 0.53, 0.031);
    glVertex2i(210, 280);
	glVertex2i(210, 270);
	glVertex2i(200, 270);
	glVertex2i(200, 280);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.2, 0.53, 0.031);
    glVertex2i(210, 260);
	glVertex2i(210, 250);
	glVertex2i(200, 250);
	glVertex2i(200, 260);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.2, 0.53, 0.031);
    glVertex2i(190, 290);
	glVertex2i(190, 300);
	glVertex2i(180, 300);
	glVertex2i(180, 290);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.2, 0.53, 0.031);
    glVertex2i(170, 290);
	glVertex2i(170, 300);
	glVertex2i(160, 300);
	glVertex2i(160, 290);

	glEnd();

    glEnable(GL_LINE_STIPPLE);
    glLineWidth(8);
    glLineStipple(1, 0XAAAA);
    glBegin(GL_LINES);
    glColor3f(0.208, 0.322, 0.063);
    glVertex2i(210, 246);
	glVertex2i(200, 246);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
}

void window(){
    ///window
    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(0, 300);
    glVertex2i(0, 320);
    glVertex2i(320, 320);
    glVertex2i(320, 300);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(0, 480);
    glVertex2i(0, 500);
    glVertex2i(320, 500);
    glVertex2i(320, 480);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(0, 390);
    glVertex2i(0, 410);
    glVertex2i(320, 410);
    glVertex2i(320, 390);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(140, 230);
    glVertex2i(140, 500);
    glVertex2i(160, 500);
    glVertex2i(160, 230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(300, 230);
    glVertex2i(300, 500);
    glVertex2i(320, 500);
    glVertex2i(320, 230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.286, 0.0);
    glVertex2i(0, 210);
    glVertex2i(0, 230);
    glVertex2i(320, 230);
    glVertex2i(320, 210);

    glEnd();

	///switch
	glBegin(GL_POLYGON);
    glColor3f(0.537, 0.537, 0.537);
	glVertex2i(146, 340);
	glVertex2i(148, 340);
	glVertex2i(148, 370);
	glVertex2i(146, 370);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.537, 0.537, 0.537);
	glVertex2i(154, 340);
	glVertex2i(152, 340);
	glVertex2i(152, 370);
	glVertex2i(154, 370);

	glEnd();

	///background
	glBegin(GL_POLYGON);
    glColor3f(0.50, 0.20, 0.0);
	glVertex2i(320, 210);
	glVertex2i(0, 210);
	glVertex2i(0, 100);
	glVertex2i(320, 100);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.31, 0.231, 0.043);
	glVertex2i(320, 210);
	glVertex2i(0, 210);
	glVertex2i(0, 207);
	glVertex2i(310, 207);

	glEnd();
}

void floor(){
    ///floor
	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.1, 0.0);
	glVertex2i(0, 90);
	glVertex2i(0, 100);
	glVertex2i(1200, 100);
	glVertex2i(1200, 90);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.6, 0.4,0.2);
	glVertex2i(0, 0);
	glVertex2i(0, 90);
	glVertex2i(1200, 90);
	glVertex2i(1200, 0);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7, 0.5,0.1);
	glVertex2i(0, 15);
	glVertex2i(0, 34);
	glVertex2i(1200, 34);
	glVertex2i(1200, 15);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7, 0.5,0.1);
	glVertex2i(0, 47);
	glVertex2i(0, 64);
	glVertex2i(1200, 64);
	glVertex2i(1200, 47);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7, 0.5,0.1);
	glVertex2i(0,74 );
	glVertex2i(0, 88);
	glVertex2i(1200, 88);
	glVertex2i(1200, 74);

    glEnd();
}

void firewall(){
    ///firewall_Roof
	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.4, 0.4);
	glVertex2i(450, 310);
	glVertex2i(425, 330);
	glVertex2i(875, 330);
	glVertex2i(850, 310);

	glEnd();

    ///firewall outside
	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2,0.0);
	glVertex2i(450,100);
	glVertex2i(450,310);
	glVertex2i(850,310);
	glVertex2i(850,100);

	glEnd();

    ///firewall inside
	glBegin(GL_POLYGON);
    glColor3f(0.3, 0.3, 0.3);
	glVertex2i(525,100);
	glVertex2i(525,275);
	glVertex2i(775,275);
	glVertex2i(775,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.5, 0.0);
	glVertex2i(550,100);
	glVertex2i(550,255);
	glVertex2i(750,255);
	glVertex2i(750,100);

    glEnd();

    ///shadow
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2i(857,305);
    glVertex2i(882,330);
    glVertex2i(875,330);
    glVertex2i(850,310);
    glVertex2i(850,100);
    glVertex2i(857,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2i(447,307);
    glVertex2i(422,330);
    glVertex2i(425,330);
    glVertex2i(450,310);
    glVertex2i(450,100);
    glVertex2i(447,100);

    glEnd();

    ///others
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(450,290);
	glVertex2i(450,300);
	glVertex2i(470,300);
    glVertex2i(470,290);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(460,280);
	glVertex2i(460,290);
	glVertex2i(490,290);
    glVertex2i(490,280);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(510,290);
	glVertex2i(510,300);
	glVertex2i(540,300);
    glVertex2i(540,290);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(490,260);
	glVertex2i(490,270);
	glVertex2i(520,270);
    glVertex2i(520,260);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(460,240);
	glVertex2i(460,250);
	glVertex2i(480,250);
    glVertex2i(480,240);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(450,230);
	glVertex2i(450,240);
	glVertex2i(470,240);
    glVertex2i(470,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(500,230);
	glVertex2i(500,240);
	glVertex2i(510,240);
    glVertex2i(510,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(510,240);
	glVertex2i(510,250);
	glVertex2i(525,250);
    glVertex2i(525,240);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(480,230);
	glVertex2i(480,220);
	glVertex2i(490,220);
    glVertex2i(490,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(480,210);
	glVertex2i(480,220);
	glVertex2i(510,220);
    glVertex2i(510,210);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(450,190);
	glVertex2i(450,200);
	glVertex2i(480,200);
    glVertex2i(480,190);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(490,180);
	glVertex2i(490,190);
	glVertex2i(520,190);
    glVertex2i(520,180);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(480,170);
	glVertex2i(480,180);
	glVertex2i(500,180);
    glVertex2i(500,170);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(510,160);
	glVertex2i(525,160);
	glVertex2i(525,170);
    glVertex2i(510,170);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(450,150);
	glVertex2i(470,150);
	glVertex2i(470,160);
    glVertex2i(450,160);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(480,130);
	glVertex2i(510,130);
	glVertex2i(510,140);
    glVertex2i(480,140);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(460,110);
	glVertex2i(460,120);
	glVertex2i(480,120);
    glVertex2i(480,110);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(500,100);
	glVertex2i(500,110);
	glVertex2i(525,110);
    glVertex2i(525,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(775,290);
	glVertex2i(775,300);
	glVertex2i(795,300);
    glVertex2i(795,290);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(785,280);
	glVertex2i(785,290);
	glVertex2i(815,290);
    glVertex2i(815,280);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(835,290);
	glVertex2i(835,300);
	glVertex2i(850,300);
    glVertex2i(850,290);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(815,260);
	glVertex2i(815,270);
	glVertex2i(835,270);
    glVertex2i(835,260);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(785,240);
	glVertex2i(785,250);
	glVertex2i(805,250);
    glVertex2i(805,240);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(775,230);
	glVertex2i(775,240);
	glVertex2i(795,240);
    glVertex2i(795,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(825,230);
	glVertex2i(825,240);
	glVertex2i(835,240);
    glVertex2i(835,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(835,240);
	glVertex2i(835,250);
	glVertex2i(850,250);
    glVertex2i(850,240);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(805,230);
	glVertex2i(805,220);
	glVertex2i(815,220);
    glVertex2i(815,230);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(805,210);
	glVertex2i(805,220);
	glVertex2i(835,220);
    glVertex2i(835,210);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(775,190);
	glVertex2i(775,200);
	glVertex2i(805,200);
    glVertex2i(805,190);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(815,180);
	glVertex2i(815,190);
	glVertex2i(845,190);
    glVertex2i(845,180);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(805,170);
	glVertex2i(805,180);
	glVertex2i(825,180);
    glVertex2i(825,170);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(825,160);
	glVertex2i(850,160);
	glVertex2i(850,170);
    glVertex2i(825,170);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(775,150);
	glVertex2i(795,150);
	glVertex2i(795,160);
    glVertex2i(775,160);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(805,130);
	glVertex2i(835,130);
	glVertex2i(835,140);
    glVertex2i(805,140);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(785,110);
	glVertex2i(785,120);
	glVertex2i(805,120);
    glVertex2i(805,110);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(825,100);
	glVertex2i(825,110);
	glVertex2i(850,110);
    glVertex2i(850,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(540,310);
	glVertex2i(540,300);
	glVertex2i(560,300);
    glVertex2i(560,310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(555,280);
	glVertex2i(555,290);
	glVertex2i(585,290);
    glVertex2i(585,280);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(600,300);
	glVertex2i(600,290);
	glVertex2i(630,290);
    glVertex2i(630,300);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(650,310);
	glVertex2i(650,300);
	glVertex2i(670,300);
    glVertex2i(670,310);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(685,275);
	glVertex2i(685,285);
	glVertex2i(705,285);
    glVertex2i(705,275);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.1,0.0);
    glVertex2i(715,290);
	glVertex2i(715,300);
	glVertex2i(735,300);
    glVertex2i(735,290);

    glEnd();

    ///Fire
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);
	glVertex2i(590,100);
	glVertex2i(570,110);
	glVertex2i(560,130);
	glVertex2i(580,150);
    glVertex2i(f1,180);
	glVertex2i(610,160);
	glVertex2i(630,180);
    glVertex2i(f2,230);
    glVertex2i(670,180);
	glVertex2i(690,160);
	glVertex2i(f3,180);
	glVertex2i(720,150);
	glVertex2i(740,130);
	glVertex2i(730,110);
	glVertex2d(710,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.3, 0.0);
	glVertex2i(630,100);
	glVertex2i(610,120);
	glVertex2i(610,140);
	glVertex2i(650,180);
	glVertex2i(690,140);
	glVertex2i(690,120);
	glVertex2i(670,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.2, 0.0);
	glVertex2i(640,100);
	glVertex2i(630,110);
	glVertex2i(630,120);
	glVertex2i(650,140);
	glVertex2i(670,120);
	glVertex2i(670,110);
	glVertex2i(660,100);

    glEnd();
}

void wood(){
    ///1
    glBegin(GL_POLYGON);
    glColor3f(0.46,0.23,0.07);
    glVertex2i(210,160);
    glVertex2i(325,160);
    glVertex2i(330,157);
    glVertex2i(330,135);
    glVertex2i(325,130);
    glVertex2i(210,130);

    glEnd();

    float radius;
    glColor3f(1.0,0.7,0.4);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(210 + 15 * cos(radius), 145 + 15 * sin(radius));
    }

    glEnd();

    glColor3f(0.46,0.23,0.07);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(210 + 8 * cos(radius), 145 + 8 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.15,0.0);
    glVertex2i(180,130);
    glVertex2i(330,130);
    glVertex2i(330,133);
    glVertex2i(180,133);

    glEnd();

    ///2
    glBegin(GL_POLYGON);
    glColor3f(0.46,0.23,0.07);
    glVertex2i(180,130);
    glVertex2i(327,130);
    glVertex2i(330,127);
    glVertex2i(330,103);
    glVertex2i(327,100);
    glVertex2i(180,100);

    glEnd();

    glColor3f(1.0,0.7,0.4);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(180 + 15 * cos(radius), 115 + 15 * sin(radius));
    }

    glEnd();

    glColor3f(0.46,0.23,0.07);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(180 + 9 * cos(radius), 115 + 9 * sin(radius));
    }

    glEnd();

    ///print
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(200,100);
	glVertex2i(200,105);
	glVertex2i(240,105);
	glVertex2i(240,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(250,100);
	glVertex2i(250,108);
	glVertex2i(310,108);
	glVertex2i(310,100);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(210,120);
	glVertex2i(210,125);
	glVertex2i(260,125);
	glVertex2i(260,120);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(270,115);
	glVertex2i(270,120);
	glVertex2i(320,120);
	glVertex2i(320,115);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(225,134);
	glVertex2i(225,139);
	glVertex2i(250,139);
	glVertex2i(250,134);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(245,145);
	glVertex2i(245,150);
	glVertex2i(280,150);
	glVertex2i(280,145);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(295,136);
	glVertex2i(295,141);
	glVertex2i(330,141);
	glVertex2i(330,136);

    glEnd();

    ///shadow
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2i(330,100);
    glVertex2i(330,155);
    glVertex2i(333,155);
    glVertex2i(333,100);

    glEnd();
}

void garland(){
    ///Outer ring
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
	glVertex2i(575,475);
	glVertex2i(595,530);
	glVertex2i(650,550);
	glVertex2i(705,530);
	glVertex2i(725,475);
	glVertex2i(705,420);
	glVertex2i(650,400);
	glVertex2i(595,420);

	glEnd();

    ///Inner ring
	glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2,0.0);
    glVertex2i(615,475);
	glVertex2i(625,500);
	glVertex2i(650,510);
	glVertex2i(675,500);
	glVertex2i(685,475);
	glVertex2i(675,450);
	glVertex2i(650,440);
	glVertex2i(625,450);

	glEnd();

	///others
	glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(585,480);
	glVertex2i(585,490);
	glVertex2i(595,490);
    glVertex2i(595,480);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(595,475);
	glVertex2i(595,465);
	glVertex2i(605,465);
    glVertex2i(605,475);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(605,500);
	glVertex2i(605,490);
	glVertex2i(615,490);
    glVertex2i(615,500);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(685,500);
	glVertex2i(685,490);
	glVertex2i(695,490);
    glVertex2i(695,500);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(700,480);
	glVertex2i(700,490);
	glVertex2i(710,490);
    glVertex2i(710,480);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.0);
    glVertex2i(690,475);
	glVertex2i(690,465);
	glVertex2i(700,465);
    glVertex2i(700,475);

    glEnd();

    ///bow1
	glBegin(GL_POLYGON);
    glColor3f(0.7, 0.0, 0.0);
	glVertex2i(575,520);
	glVertex2i(605,550);
	glVertex2i(650,510);

    glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.7, 0.0, 0.0);
	glVertex2i(650,510);
	glVertex2i(695,550);
	glVertex2i(725,520);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
	glVertex2i(610,525);
	glVertex2i(615,530);
	glVertex2i(625,520);

    glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.4, 0.0);
	glVertex2i(675,520);
	glVertex2i(685,530);
	glVertex2i(690,525);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.0, 0.0);
	glVertex2i(625,480);
	glVertex2i(650,510);
	glVertex2i(630,480);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.0, 0.0);
	glVertex2i(650,510);
	glVertex2i(675,480);
	glVertex2i(670,480);

	glEnd();
}

void carpet(){
    ///carpet
	glBegin(GL_POLYGON);
    glColor3f(0.3, 0.5, 0.0);
	glVertex2i(200,25);
	glVertex2i(250,60);
	glVertex2i(500,60);
	glVertex2i(550,25);
	glVertex2i(525,0);
	glVertex2i(225,0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.6, 0.0);
	glVertex2i(220,25);
	glVertex2i(257,50);
	glVertex2i(493,50);
	glVertex2i(530,25);
	glVertex2i(510,0);
	glVertex2i(240,0);

    glEnd();
}

void ornament(){
    ///ornament1
	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(460,330);
	glVertex2i(460,380);
	glVertex2i(500,380);
	glVertex2i(500,330);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
	glVertex2i(464,330);
	glVertex2i(464,376);
	glVertex2i(496,376);
	glVertex2i(496,330);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(470,350);
	glVertex2i(470,370);
	glVertex2i(480,370);
	glVertex2i(480,350);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
	glVertex2i(480,350);
	glVertex2i(480,360);
	glVertex2i(490,360);
	glVertex2i(490,350);

	glEnd();

	///ornament2
	glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.1);
	glVertex2i(515,330);
	glVertex2i(515,400);
	glVertex2i(570,400);
	glVertex2i(570,330);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
	glVertex2i(525,330);
	glVertex2i(525,390);
	glVertex2i(560,390);
	glVertex2i(560,330);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(528,370);
	glVertex2i(528,375);
	glVertex2i(538,375);
	glVertex2i(538,370);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
	glVertex2i(547,370);
	glVertex2i(547,375);
	glVertex2i(557,375);
	glVertex2i(557,370);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(540,355);
	glVertex2i(540,365);
	glVertex2i(545,365);
	glVertex2i(545,355);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
	glVertex2i(530,340);
	glVertex2i(530,348);
	glVertex2i(555,348);
	glVertex2i(555,340);

	glEnd();

	///ornament3
	glBegin(GL_POLYGON);
    glColor3f(0.9,0.5,0.0);
	glVertex2i(710,330);
	glVertex2i(750,330);
	glVertex2i(760,340);
	glVertex2i(700,340);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0,0.3,0.0);
	glVertex2i(710,340);
	glVertex2i(720,340);
	glVertex2i(720,345);
	glVertex2i(710,345);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0,0.3,0.0);
	glVertex2i(723,340);
	glVertex2i(733,340);
	glVertex2i(733,347);
	glVertex2i(723,347);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.3,0.0);
	glVertex2i(735,340);
	glVertex2i(745,340);
	glVertex2i(745,346);
	glVertex2i(735,346);

	glEnd();

	///ornament4
	glBegin(GL_POLYGON);
    glColor3f(0.2,0.1,0.1);
	glVertex2i(600,330);
	glVertex2i(640,330);
	glVertex2i(640,350);
	glVertex2i(600,350);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.8,0.2,0.2);
	glVertex2i(600,350);
	glVertex2i(610,350);
	glVertex2i(610,354);
	glVertex2i(600,354);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.1,0.5,0.0);
	glVertex2i(630,350);
	glVertex2i(640,350);
	glVertex2i(640,354);
	glVertex2i(630,354);

	glEnd();

	///ornament5
	glBegin(GL_POLYGON);
    glColor3f(0.4,0.1,0.0);
	glVertex2i(785,330);
	glVertex2i(845,330);
	glVertex2i(845,365);
	glVertex2i(785,365);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.4,0.2,0.0);
	glVertex2i(790,335);
	glVertex2i(840,335);
	glVertex2i(840,360);
	glVertex2i(790,360);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.4,0.3,0.0);
	glVertex2i(800,345);
	glVertex2i(810,345);
	glVertex2i(810,360);
	glVertex2i(800,360);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.4,0.1,0.0);
	glVertex2i(820,340);
	glVertex2i(835,340);
	glVertex2i(835,348);
	glVertex2i(820,348);

	glEnd();
}

void socks(){
    ///sock 1
	glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(565,290);
	glVertex2i(565,280);
	glVertex2i(595,300);
	glVertex2i(595,310);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.1,0.0);
    glVertex2i(565,280);
	glVertex2i(565,250);
	glVertex2i(545,250);
	glVertex2i(545,240);
	glVertex2i(550,235);
	glVertex2i(560,235);
	glVertex2i(580,250);
	glVertex2i(595,260);
	glVertex2i(595,300);

	glEnd();

    ///sock 2
	glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(655,290);
	glVertex2i(655,280);
	glVertex2i(685,300);
	glVertex2i(685,310);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.7,0.0);
    glVertex2i(655,280);
	glVertex2i(655,250);
	glVertex2i(635,250);
	glVertex2i(635,240);
	glVertex2i(640,235);
	glVertex2i(650,235);
	glVertex2i(670,250);
	glVertex2i(685,260);
	glVertex2i(685,300);

	glEnd();

	///sock 3
	glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(745,290);
	glVertex2i(745,280);
	glVertex2i(775,300);
	glVertex2i(775,310);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1,0.6);
    glVertex2i(745,280);
	glVertex2i(745,250);
	glVertex2i(725,250);
	glVertex2i(725,240);
	glVertex2i(730,235);
	glVertex2i(740,235);
	glVertex2i(760,250);
	glVertex2i(775,260);
	glVertex2i(775,300);

	glEnd();
}

void turntable(){
    ///turntable
    glBegin(GL_POLYGON);
    glColor3f(0.498,0.066,0.11);
    glVertex2i(345,215);
    glVertex2i(415,215);
    glVertex2i(415,219);
    glVertex2i(345,219);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.498,0.066,0.11);
    glVertex2i(350,223);
    glVertex2i(410,223);
    glVertex2i(410,219);
    glVertex2i(350,219);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.498,0.066,0.11);
    glVertex2i(353,223);
    glVertex2i(407,223);
    glVertex2i(407,248);
    glVertex2i(353,248);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.498,0.066,0.11);
    glVertex2i(350,252);
    glVertex2i(410,252);
    glVertex2i(410,248);
    glVertex2i(350,248);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(355,252);
    glVertex2i(405,252);
    glVertex2i(405,253);
    glVertex2i(355,253);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49,0.518,0.549);
    glVertex2i(390,260);
    glVertex2i(400,260);
    glVertex2i(400,255);
    glVertex2i(390,255);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.773,0.796,0.78);
    glVertex2i(395,253);
    glVertex2i(397,257);
    glVertex2i(393,257);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.69, 0.443, 0.063);
    glVertex2i(365,253);
    glVertex2i(370,280);
    glVertex2i(385,280);
    glVertex2i(370,253);

    glEnd();

    float radius1;

    glBegin(GL_POLYGON);
    glColor3f(0.69, 0.443, 0.063);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(380 + 13 * cos(radius1), 293 + 13 * sin(radius1));
         }

	glEnd();

    float radius2;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(380 + 9 * cos(radius2), 310 + 9 * sin(radius2));
         }

	glEnd();

	float radius3;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius3 = i * 3.142/18;
             glVertex2f(380 + 9 * cos(radius3), 276 + 9 * sin(radius3));
         }

	glEnd();

	float radius4;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius4 = i * 3.142/18;
             glVertex2f(363 + 9 * cos(radius4), 293 + 9 * sin(radius4));
         }

	glEnd();

	float radius5;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius5 = i * 3.142/18;
             glVertex2f(397 + 9 * cos(radius5), 293 + 9 * sin(radius5));
         }

	glEnd();

	float radius6;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius6 = i * 3.142/18;
             glVertex2f(393 + 9 * cos(radius6), 304 + 9 * sin(radius6));
         }

	glEnd();

	float radius7;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius7 = i * 3.142/18;
             glVertex2f(367 + 9 * cos(radius7), 304 + 9 * sin(radius7));
         }

	glEnd();

	float radius8;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius8 = i * 3.142/18;
             glVertex2f(393 + 9 * cos(radius8), 282 + 9 * sin(radius8));
         }

	glEnd();

	float radius9;

    glBegin(GL_POLYGON);
    glColor3f(0.686,0.525,0.26);
	for(int i=0; i< 360; i++)
         {
             radius9 = i * 3.142/18;
             glVertex2f(367 + 9 * cos(radius9), 282 + 9 * sin(radius9));
         }

	glEnd();
}

void notes(){
    ///note1
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(377,350);
    glVertex2i(375,350);
    glVertex2i(375,370);
    glVertex2i(377,370);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(389,368);
    glVertex2i(377,366);
    glVertex2i(377,370);

    glEnd();

    float radius1;

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(372 + 4 * cos(radius1), 350 + 4 * sin(radius1));
         }

	glEnd();

	///note2
	glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(410,354);
    glVertex2i(390,349);
    glVertex2i(390,344);
    glVertex2i(410,349);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(390,332);
    glVertex2i(392,332);
    glVertex2i(392,344);
    glVertex2i(390,344);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(410,349);
    glVertex2i(408,349);
    glVertex2i(408,335);
    glVertex2i(410,335);

    glEnd();

    float radius2;

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(388 + 4 * cos(radius2), 332 + 4 * sin(radius2));
         }

	glEnd();

	float radius3;

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
	for(int i=0; i< 360; i++)
         {
             radius3 = i * 3.142/18;
             glVertex2f(406 + 4 * cos(radius3), 335 + 4 * sin(radius3));
         }

	glEnd();
}

void table(){
    ///table
    glBegin(GL_POLYGON);
    glColor3f(0.945,0.859,0.788);
    glVertex2i(340,180);
    glVertex2i(420,180);
    glVertex2i(420,210);
    glVertex2i(340,210);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.075,0.075,0.075);
    glVertex2i(335,215);
    glVertex2i(425,215);
    glVertex2i(425,210);
    glVertex2i(335,210);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.945,0.859,0.788);
    glVertex2i(343,180);
    glVertex2i(348,180);
    glVertex2i(348,100);
    glVertex2i(343,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.945,0.859,0.788);
    glVertex2i(417,180);
    glVertex2i(412,180);
    glVertex2i(412,100);
    glVertex2i(417,100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.945,0.859,0.788);
    glVertex2i(348,122);
    glVertex2i(412,122);
    glVertex2i(412,117);
    glVertex2i(348,117);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.894,0.773,0.666);
    glVertex2i(350,207);
    glVertex2i(410,207);
    glVertex2i(410,185);
    glVertex2i(350,185);

    glEnd();

    float radius1;

    glBegin(GL_POLYGON);
    glColor3f(0.988, 0.757, 0.004);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(380 + 5 * cos(radius1), 198 + 5 * sin(radius1));
         }

	glEnd();

	float radius2;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.875, 0.004);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(381 + 2 * cos(radius2), 200 + 2 * sin(radius2));
         }

	glEnd();
}

void dog(){
    ///dog body
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);
	glVertex2i(355,65);
	glVertex2i(440,65);
	glVertex2i(460,50);
	glVertex2i(460,40);
	glVertex2i(450,30);
	glVertex2i(360,30);
	glVertex2i(370,35);
	glVertex2i(370,45);
	glVertex2i(355,55);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);
	glVertex2i(371,60);
	glVertex2i(371,c1);
	glVertex2i(440,c1);
	glVertex2i(440,60);

	glEnd();

    ///dog feet
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.5, 0.0);
    glVertex2i(380,30);
	glVertex2i(390,30);
	glVertex2i(390,36);
	glVertex2i(380,36);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);
    glVertex2i(395,30);
	glVertex2i(405,30);
	glVertex2i(405,36);
	glVertex2i(395,36);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.5, 0.0);
    glVertex2i(420,30);
	glVertex2i(430,30);
	glVertex2i(430,36);
	glVertex2i(420,36);

    glEnd();

    ///hat
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(370,50);
	glVertex2i(370,55);
	glVertex2i(375,55);
	glVertex2i(375,50);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	glVertex2i(325,55);
	glVertex2i(325,60);
	glVertex2i(355,60);
	glVertex2i(355,55);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(330,60);
	glVertex2i(330,65);
	glVertex2i(370,65);
	glVertex2i(370,60);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(340,65);
	glVertex2i(340,70);
	glVertex2i(370,70);
	glVertex2i(370,65);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(375,60);
	glVertex2i(375,55);
	glVertex2i(363,55);
	glVertex2i(363,60);

    glEnd();

    ///dog left ear
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.0);
    glVertex2i(315,30);
	glVertex2i(315,c2);
	glVertex2i(330,55);
	glVertex2i(330,35);
	glVertex2i(325,30);

    glEnd();

    ///dog head
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.0);
	glVertex2i(330,55);
	glVertex2i(355,55);
	glVertex2i(360,50);
	glVertex2i(370,45);
	glVertex2i(370,35);
	glVertex2i(360,30);
	glVertex2i(360,20);
	glVertex2i(345,20);
	glVertex2i(330,35);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.0);
	glVertex2i(330,40);
	glVertex2i(340,40);
	glVertex2i(340,35);
	glVertex2i(345,35);
	glVertex2i(345,30);
	glVertex2i(350,30);
	glVertex2i(350,20);
	glVertex2i(345,20);
	glVertex2i(330,35);

	glEnd();

    ///dog nose
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex2i(350,20);
	glVertex2i(350,30);
	glVertex2i(360,30);
	glVertex2i(360,20);

    glEnd();

    ///dog eyes
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.4, 0.0);
    glVertex2i(330,40);
	glVertex2i(330,50);
	glVertex2i(340,50);
	glVertex2i(340,40);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.4, 0.0);
    glVertex2i(345,40);
	glVertex2i(345,50);
	glVertex2i(355,50);
	glVertex2i(355,40);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex2i(330,40);
	glVertex2i(330,43);
	glVertex2i(340,43);
	glVertex2i(340,40);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.0);
    glVertex2i(345,40);
	glVertex2i(345,43);
	glVertex2i(355,43);
	glVertex2i(355,40);

    glEnd();

    ///ZZZ
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(360,80);
	glVertex2i(370,80);
	glVertex2i(370,82);
	glVertex2i(362,82);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(362,82);
	glVertex2i(360,82);
	glVertex2i(368,88);
	glVertex2i(370,88);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(360,88);
	glVertex2i(360,90);
	glVertex2i(370,90);
	glVertex2i(368,88);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(380,90);
	glVertex2i(395,90);
	glVertex2i(395,92);
	glVertex2i(380,92);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(380,92);
	glVertex2i(382,92);
	glVertex2i(395,103);
	glVertex2i(393,103);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(395,103);
	glVertex2i(395,105);
	glVertex2i(380,105);
	glVertex2i(380,103);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(410,110);
	glVertex2i(430,110);
	glVertex2i(430,112);
	glVertex2i(410,112);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(410,112);
	glVertex2i(412,112);
	glVertex2i(430,128);
	glVertex2i(428,128);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(410,128);
	glVertex2i(430,128);
	glVertex2i(430,130);
	glVertex2i(410,130);

    glEnd();
}

void doghome(){
    ///roof
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.2, 0.0);
    glVertex2i(0, 180);
    glVertex2i(80,220);
    glVertex2i(160,180);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(80,220);
    glVertex2i(120,200);
    glVertex2i(90,190);
    glVertex2i(80,200);
    glVertex2i(70,190);
    glVertex2i(40,200);

    glEnd();

    ///roof shadow
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2i(0, 180);
    glVertex2i(5,175);
    glVertex2i(155,175);
    glVertex2i(160, 180);

    glEnd();

    /// room
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.4,0.0);
    glVertex2i(20,100);
    glVertex2i(20,180);
    glVertex2i(140,180);
    glVertex2i(140,100);

    glEnd();

    float radius;

    glColor3f(0.1,0.1 ,0.1);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(80 + 30 * cos(radius), 130 + 30 * sin(radius));
    }

    glEnd();

    /// room shadow
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2i(140, 100);
    glVertex2i(140,175);
    glVertex2i(145,175);
    glVertex2i(145, 100);

    glEnd();

    ///others
    glColor3f(0.7,0.7 ,0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(80 + 13 * cos(radius), 193 + 10 * sin(radius));
    }

    glEnd();

    glColor3f(0.7,0.7 ,0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(60 + 5 * cos(radius), 200 + 5 * sin(radius));
    }

    glEnd();

    glColor3f(0.7,0.7 ,0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(75 + 5 * cos(radius), 208 + 5 * sin(radius));
    }

    glEnd();

    glColor3f(0.7,0.7 ,0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(90 + 5 * cos(radius), 207 + 5 * sin(radius));
    }

    glEnd();

    glColor3f(0.7,0.7 ,0.7);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(100 + 5 * cos(radius), 200 + 5 * sin(radius));
    }

    glEnd();

    ///print
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(20,140);
    glVertex2i(40,140);
    glVertex2i(40,135);
    glVertex2i(20,135);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(27,180);
    glVertex2i(40,180);
    glVertex2i(40,175);
    glVertex2i(27,175);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(70,172);
    glVertex2i(90,172);
    glVertex2i(90,167);
    glVertex2i(70,167);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(92,166);
    glVertex2i(112,166);
    glVertex2i(112,160);
    glVertex2i(92,160);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(140,180);
    glVertex2i(120,180);
    glVertex2i(120,174);
    glVertex2i(140,174);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(30,150);
    glVertex2i(50,150);
    glVertex2i(50,160);
    glVertex2i(30,160);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(110,100);
    glVertex2i(140,100);
    glVertex2i(140,105);
    glVertex2i(110,105);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(125,106);
    glVertex2i(140,106);
    glVertex2i(140,111);
    glVertex2i(125,111);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(120,130);
    glVertex2i(135,130);
    glVertex2i(135,125);
    glVertex2i(120,125);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(140,130);
    glVertex2i(120,130);
    glVertex2i(120,135);
    glVertex2i(140,135);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(25,110);
    glVertex2i(48,110);
    glVertex2i(48,115);
    glVertex2i(25,115);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.3,0.0);
    glVertex2i(30,120);
    glVertex2i(50,120);
    glVertex2i(50,125);
    glVertex2i(30,125);

    glEnd();
}

void bone(){
    ///bone
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(120,80);
    glVertex2i(160,80);
    glVertex2i(160,70);
    glVertex2i(120,70);

    glEnd();

    float radius1;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(120 + 5 * cos(radius1), 80 + 5 * sin(radius1));
         }

	glEnd();

	float radius2;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius2 = i * 3.142/18;
             glVertex2f(120 + 5 * cos(radius2), 70 + 5 * sin(radius2));
         }

	glEnd();

	float radius3;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius3 = i * 3.142/18;
             glVertex2f(160 + 5 * cos(radius3), 80 + 5 * sin(radius3));
         }

	glEnd();

	float radius4;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0; i< 360; i++)
         {
             radius4 = i * 3.142/18;
             glVertex2f(160 + 5 * cos(radius4), 70 + 5 * sin(radius4));
         }

	glEnd();
}

void ctree(){
    ///shadow
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.05, 0.13);
    glVertex2i(1000, 140);
    glVertex2i(1000, 500);
    glVertex2i(1220, 300);
    glVertex2i(1200, 90);
    glVertex2i(850, 90);
    glVertex2i(850, 140);

    glEnd();

    ///layer 1
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.7, 0.29);
    glVertex2i(1000, 450);
    glVertex2i(1043, 380);
    glVertex2i(957, 380);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.007, 0.24, 0.16);
    glVertex2i(1000, 450);
    glVertex2i(1043, 380);
    glVertex2i(1008, 380);

    glEnd();

    ///layer 2
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.7, 0.29);
    glVertex2i(977, 380);
    glVertex2i(1023, 380);
    glVertex2i(1087, 300);
    glVertex2i(913, 300);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.007, 0.24, 0.16);
    glVertex2i(1008, 380);
    glVertex2i(1023, 380);
    glVertex2i(1087, 300);
    glVertex2i(1018, 300);

    glEnd();

    ///layer 3
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.7, 0.29);
    glVertex2i(943, 300);
    glVertex2i(1057, 300);
    glVertex2i(1131, 220);
    glVertex2i(869, 220);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.007, 0.24, 0.16);
    glVertex2i(1018, 300);
    glVertex2i(1057, 300);
    glVertex2i(1131, 220);
    glVertex2i(1030, 220);

    glEnd();

    ///layer 4
    glBegin(GL_POLYGON);
    glColor3f(0.22, 0.7, 0.29);
    glVertex2i(899, 220);
    glVertex2i(1101, 220);
    glVertex2i(1175, 140);
    glVertex2i(825, 140);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.007, 0.24, 0.16);
    glVertex2i(1030, 220);
    glVertex2i(1101, 220);
    glVertex2i(1175, 140);
    glVertex2i(1050, 140);

    glEnd();

    ///trunk
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.05, 0.13);
    glVertex2i(970, 140);
    glVertex2i(1030, 140);
    glVertex2i(1030, 100);
    glVertex2i(970, 100);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.15, 0.11, 0.23);
    glVertex2i(970, 140);
    glVertex2i(1010, 140);
    glVertex2i(1010, 100);
    glVertex2i(970, 100);

    glEnd();
}

void star(){
    int a = 1000;
    int b = 500;
    int c = 1010;
    int d = 478;
    int e = 1033;
    int f = 473;
    int g = 1015;
    int h = 462;
    int i = 1025;
    int j = 440;
    int k = 1000;
    int l = 450;
    int m = 975;
    int n = 440;
    int o = 985;
    int p = 462;
    int q = 967;
    int r = 473;
    int s = 990;
    int t = 478;
    int u = 1000;
    int v = 465;

    ///1
    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.69, 0.36);
    glVertex2i(a, b);
    glVertex2i(c, d);
    glVertex2i(u, v);

    glEnd();

    ///2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.95, 0.0);
    glVertex2i(c, d);
    glVertex2i(e, f);
    glVertex2i(u, v);

    glEnd();

    ///3
    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.69, 0.36);
    glVertex2i(e, f);
    glVertex2i(g, h);
    glVertex2i(u, v);

    glEnd();

    ///4
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.95, 0.0);
    glVertex2i(g, h);
    glVertex2i(i, j);
    glVertex2i(u, v);

    glEnd();

    ///5
    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.69, 0.36);
    glVertex2i(i, j);
    glVertex2i(k, l);
    glVertex2i(u, v);

    glEnd();

    ///6
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.95, 0.0);
    glVertex2i(k, l);
    glVertex2i(m, n);
    glVertex2i(u, v);

    glEnd();

    ///7
    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.69, 0.36);
    glVertex2i(m, n);
    glVertex2i(o, p);
    glVertex2i(u, v);

    glEnd();

    ///8
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.95, 0.0);
    glVertex2i(o, p);
    glVertex2i(q, r);
    glVertex2i(u, v);

    glEnd();

    ///9
    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.69, 0.36);
    glVertex2i(q, r);
    glVertex2i(s, t);
    glVertex2i(u, v);

    glEnd();

    ///10
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.95, 0.0);
    glVertex2i(s, t);
    glVertex2i(a, b);
    glVertex2i(u, v);

    glEnd();
}

void decoration(){
    ///light 1
    glBegin(GL_POLYGON);
    glColor3f(0.93, 0.11, 0.14);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(985 + 5 * cos(radius), 390 + 5 * sin(radius));
    }

    glEnd();

    ///light 2
    glBegin(GL_POLYGON);
    glColor3f(0.93, 0.11, 0.14);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(959 + 5 * cos(radius), 310 + 5 * sin(radius));
    }

    glEnd();

    ///light 3
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.97, 0.6);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1000 + 5 * cos(radius), 300 + 5 * sin(radius));
    }

    glEnd();

    ///light 4
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1063 + 5 * cos(radius), 310 + 5 * sin(radius));
    }

    glEnd();

    ///light 5
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.97, 0.6);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(895 + 5 * cos(radius), 233 + 5 * sin(radius));
    }

    glEnd();

    ///light 6
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(971 + 5 * cos(radius), 250 + 5 * sin(radius));
    }

    glEnd();

    ///light 7
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(999 + 5 * cos(radius), 220 + 5 * sin(radius));
    }

    glEnd();

    ///light 8
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.2, 0.46);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1105 + 5 * cos(radius), 230 + 5 * sin(radius));
    }

    glEnd();

    ///light 9
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(884 + 5 * cos(radius), 165 + 5 * sin(radius));
    }

    glEnd();

    ///light 10
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1010 + 5 * cos(radius), 146 + 5 * sin(radius));
    }

    glEnd();

    ///light 11
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.97, 0.6);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1100 + 5 * cos(radius), 150 + 5 * sin(radius));
    }

    glEnd();

    ///light 12
    glBegin(GL_POLYGON);
    glColor3f(0.18, 0.19, 0.57);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1035 + 10 * cos(radius), 349 + 10 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.33, 0.65);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1033 + 8 * cos(radius), 350 + 8 * sin(radius));
    }

    glEnd();

    ///light 13
    glBegin(GL_POLYGON);
    glColor3f(0.078, 0.28, 0.24);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(970 + 10 * cos(radius), 324 + 10 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(968 + 8 * cos(radius), 325 + 8 * sin(radius));
    }

    glEnd();

    ///light 14
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.18, 0.57);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1022 + 10 * cos(radius), 258 + 10 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.74, 0.55, 0.75);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1020 + 8 * cos(radius), 259 + 8 * sin(radius));
    }

    glEnd();

    ///light 15
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.067, 0.112);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1043 + 10 * cos(radius), 200 + 10 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.31, 0.0, 0.28);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(1041 + 8 * cos(radius), 200 + 8 * sin(radius));
    }

    glEnd();

    ///light 16
    glBegin(GL_POLYGON);
    glColor3f(0.62, 0.042, 0.059);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(900 + 10 * cos(radius), 168 + 10 * sin(radius));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.93, 0.12, 0.14);
    for(int i=0; i< 360; i++)
    {
        float radius = 0.1;
        radius = i * 3.142/18;
        glVertex2f(898 + 8 * cos(radius), 168 + 8 * sin(radius));
    }

    glEnd();
}

void gifts(){
    ///shadow
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.086, 0.21);
    glVertex2i(1200, 90);
    glVertex2i(1100, 65);
    glVertex2i(1000, 65);
    glVertex2i(900, 90);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.086, 0.21);
    glVertex2i(1050, 70);
    glVertex2i(1000, 50);
    glVertex2i(900, 55);
    glVertex2i(900, 70);

    glEnd();

    ///gift 1(blue)
    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.17, 0.42);
    glVertex2i(1150, 130);
    glVertex2i(1150, 85);
    glVertex2i(1030, 85);
    glVertex2i(1030, 130);

    glEnd();

    ///gift 2(green)
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.8, 0.0);
    glVertex2i(1100, 120);
    glVertex2i(1100, 65);
    glVertex2i(1000, 65);
    glVertex2i(1000, 120);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.6, 0.1);
    glVertex2i(1100, 110);
    glVertex2i(1100, 65);
    glVertex2i(1010, 65);
    glVertex2i(1010, 110);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(1100, 98);
    glVertex2i(1100, 85);
    glVertex2i(1000, 85);
    glVertex2i(1000, 98);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(1055, 120);
    glVertex2i(1055, 65);
    glVertex2i(1040, 65);
    glVertex2i(1040, 120);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(1048, 120);
    glVertex2i(1040, 120);
    glVertex2i(1025, 130);
    glVertex2i(1040, 130);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(1055, 120);
    glVertex2i(1048, 120);
    glVertex2i(1051, 130);
    glVertex2i(1066, 130);

    glEnd();

    ///gift 3(red)
    glBegin(GL_POLYGON);
    glColor3f(0.66, 0.024, 0.16);
    glVertex2i(900, 115);
    glVertex2i(900, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 115);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57, 0.05, 0.33);
    glVertex2i(900, 92);
    glVertex2i(900, 72);
    glVertex2i(1000, 72);
    glVertex2i(1000, 92);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57, 0.05, 0.33);
    glVertex2i(940, 115);
    glVertex2i(940, 50);
    glVertex2i(960, 50);
    glVertex2i(960, 115);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57, 0.05, 0.33);
    glVertex2i(950, 115);
    glVertex2i(940, 115);
    glVertex2i(927, 130);
    glVertex2i(947, 130);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.57, 0.05, 0.33);
    glVertex2i(950, 115);
    glVertex2i(953, 130);
    glVertex2i(973, 130);
    glVertex2i(960, 115);

    glEnd();

    ///gift 4(purple)
    glBegin(GL_POLYGON);
    glColor3f(0.57, 0.15, 0.56);
    glVertex2i(900, 113);
    glVertex2i(900, 70);
    glVertex2i(858, 70);
    glVertex2i(858, 113);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.77, 0.46);
    glVertex2i(900, 94);
    glVertex2i(900, 82);
    glVertex2i(858, 82);
    glVertex2i(858, 94);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.77, 0.46);
    glVertex2i(888, 113);
    glVertex2i(888, 70);
    glVertex2i(873, 70);
    glVertex2i(873, 113);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.77, 0.46);
    glVertex2i(878, 123);
    glVertex2i(880, 113);
    glVertex2i(873, 113);
    glVertex2i(867, 123);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.77, 0.46);
    glVertex2i(888, 113);
    glVertex2i(880, 113);
    glVertex2i(882, 123);
    glVertex2i(893, 123);

    glEnd();

    ///gift 5(white)
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(858, 108);
    glVertex2i(858, 78);
    glVertex2i(798, 78);
    glVertex2i(798, 108);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(858, 98);
    glVertex2i(858, 88);
    glVertex2i(798, 88);
    glVertex2i(798, 98);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(838, 108);
    glVertex2i(838, 78);
    glVertex2i(825, 78);
    glVertex2i(825, 108);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(828, 128);
    glVertex2i(831, 108);
    glVertex2i(825, 108);
    glVertex2i(815, 128);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.1);
    glVertex2i(847, 128);
    glVertex2i(838, 108);
    glVertex2i(831, 108);
    glVertex2i(834, 128);

    glEnd();
}

void light1(){
    ///left outline
    float radius;

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(300 + 402 * cos(radius), 800 + 300 * sin(radius));
    }

    glEnd();

    ///left
    glColor3f(0.5,0.2,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(300 + 398 * cos(radius), 800 + 297 * sin(radius));
    }

    glEnd();

    ///right outline
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
         glVertex2f(900 + 402 * cos(radius), 800 + 300 * sin(radius));
    }

    glEnd();

    ///right
    glColor3f(0.5,0.2,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(900 + 398 * cos(radius), 800 + 297 * sin(radius));
    }

    glEnd();

    ///left light
    ////red
    float r=(rand()%9/2);
    float g=(rand()%9/2);
    float b=(rand()%9/2);
    glutPostRedisplay();

    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(45 + 10 * cos(radius), 568 + 13 * sin(radius));
    }

    glEnd();

    ////green
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(180 + 10 * cos(radius), 508 + 13 * sin(radius));
    }

    glEnd();

    ////red
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(370 + 10 * cos(radius), 500 + 13 * sin(radius));
    }

    glEnd();

    ////green
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(539 + 10 * cos(radius), 557 + 13 * sin(radius));
    }

    glEnd();

    ////yellow
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(702 + 10 * cos(radius), 536 + 13 * sin(radius));
    }

    glEnd();

    ////purple
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(865 + 10 * cos(radius), 497 + 13 * sin(radius));
    }

    glEnd();

    ////yellow
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(1058 + 10 * cos(radius), 520 + 13 * sin(radius));
    }

    glEnd();
}

void light2(){
    float radius;
    float r=(rand()%9/5);
    float g=(rand()%9/5);
    float b=(rand()%9/5);
    glutPostRedisplay();

    ////yellow
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(102 + 10 * cos(radius), 536 + 13 * sin(radius));
    }

    glEnd();

    ////purple
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(265 + 10 * cos(radius), 497 + 13 * sin(radius));
    }

    glEnd();

    ////yellow
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(458 + 10 * cos(radius), 520 + 13 * sin(radius));
    }

    glEnd();

    ////red
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(645 + 10 * cos(radius), 568 + 13 * sin(radius));
    }

    glEnd();

    ////green
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(780 + 10 * cos(radius), 508 + 13 * sin(radius));
    }

    glEnd();

    ////red
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(970 + 10 * cos(radius), 500 + 13 * sin(radius));
    }

    glEnd();

    ////green
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i< 360; i++)
    {
        radius = i * 3.142/18;
        glVertex2f(1139 + 10 * cos(radius), 557 + 13 * sin(radius));
    }

    glEnd();
}

void lighting(){
    ///lighting1
    float radius1;

    glBegin(GL_POLYGON);
    glColor4f(1.0, 1.0, 0.0, 0.01);
	for(int i=0; i< 360; i++)
         {
             radius1 = i * 3.142/18;
             glVertex2f(620 + 520 * cos(radius1), 250 + 320 * sin(radius1));
         }

	glEnd();

    ///lighting2
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.05);
    glVertex2i(0,800);
    glVertex2i(1200,800);
    glVertex2i(1200,0);
    glVertex2i(0,0);

    glEnd();
}

void keyPressed(unsigned char key, int x, int y){
    if (key == 'w')
    {
        if (c1 == 65, c2 == 45)
        c1 = 68, c2 = 48;
        else
        c1 = 65, c2 = 45;
    }
    else if (key == 's')
    {
        if (f1 == 600 && f2 == 650 && f3 == 700)
        f1 = 590, f2 = 640, f3 = 690;
        else
        f1 = 600, f2 = 650, f3 = 700;
    }
    else if (key == 'a')
    {
        if (b1 == 280)
        b1 = 250;
        else
        b1 = 280;
    }
    else if (key == 'd')
    {
        if (b2 == 280)
        b2 = 250;
        else
        b2 = 280;
    }
    glutPostRedisplay();
}

void init(){
	glClearColor(0.50, 0.20, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1200.0, 0.0, 600.0);
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    ///* Object_Layer *///
    glass();
    moon();
    cloud();
    tree();
    snow();
    snowman();
    window();
    floor();
    firewall();
    wood();
    garland();
    carpet();
    ornament();
    socks();
    turntable();
    notes();
    table();
    dog();
    doghome();
    bone();
    ctree();
    star();
    decoration();
    gifts();
    light1();
    light2();
    lighting();

    glFlush();
}

int main(int argc, char** argv){
    char ch;
    cout << ("\n -----------------------------------------------\n");
    cout << ("\t        Merry Christmas!                        \n");
    cout << (" -----------------------------------------------\n\n");
    cout << (" Press 'w' to make the dog breathe.             \n\n");
    cout << (" Press 's' to control the fire.                 \n\n");
	cout << (" Press 'a' or 'd' to move the arms of snowman.  \n\n");
	cout << (" Now press any key and Hit ENTER.               \n\n");
	cout << (" Relax & Enjoy!                               \n\n\n");
	cout << (" P.S. Don't forget to click the new window.     \n\n");
	cout << (" ");
	cin >> ch;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Merry Christmas!");
	PlaySound(TEXT("Last Christmas.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    glutKeyboardFunc(keyPressed);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
