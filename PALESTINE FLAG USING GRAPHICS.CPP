
#include<conio.h>
#include<graphics.h>
#include<stdio.h>

void main(){

int gd=DETECT,gm;
initgraph(&gd,&gm, "C:/tc/bgi");

setfillstyle(SOLID_FILL,BLACK);
rectangle(150,150,475,200);
floodfill(151,155,WHITE);

setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(150,226,475,200);
floodfill(201,205,WHITE);

setfillstyle(SOLID_FILL,LIGHTGRAY);
rectangle(150,252,475,200);
floodfill(227,230,WHITE);


setfillstyle(SOLID_FILL,RED);
rectangle(150,302,475,200);
floodfill(270,275,WHITE);

setfillstyle(SOLID_FILL,RED);
line(150,150,226,200);
floodfill(151,155,WHITE);

setfillstyle(SOLID_FILL,RED);
line(226,200,265,226);
floodfill(201,201,WHITE);

setfillstyle(SOLID_FILL,RED);
line(226,252,265,226);
floodfill(227,230,WHITE);

setfillstyle(SOLID_FILL,GREEN);
line(226,252,150,302);
floodfill(260,264,WHITE);
setcolor(RED);
line(151,226,261,226);
line(151,252,225,252);
line(151,200,225,200);

setcolor(LIGHTGRAY);
line(264,226,474,226);
settextstyle(10, HORIZ_DIR, 4);
setcolor(12);
outtextxy(50,50, "STATE OF PALESTINE");
getch();

}


