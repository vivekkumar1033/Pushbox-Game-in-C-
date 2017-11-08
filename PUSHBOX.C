#include<string.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void game();
void start();
void second();
void third();
void INST()
{
	char ch;
	setbkcolor(BLACK);
	setcolor(BLACK);
	settextstyle(7,0,7);
	outtextxy(170,150,"PUSHBOX");
	setcolor(BLACK);
	circle(250,250,0);
	setfillstyle(1,BLACK);
	floodfill(250,250,BLACK);
	bar(245,245,390,280);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	circle(250,255,0);
	setfillstyle(1,BLACK);
	floodfill(250,255,BLACK);
	bar(245,305,390,335);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	settextstyle(8,0,2);
	outtextxy(292,247,"PLAY");
	settextstyle(8,0,1);
	outtextxy(250,305,"INSTRUCTIONS");
	setcolor(GREEN);
	settextstyle(7,0,5);
	outtextxy(170,30,"Instructions");
	setcolor(RED);
	settextstyle(11,0,8);
	outtextxy(130,100,"This is you");
	setcolor(BLUE);
	circle(100,110,8);
	setfillstyle(1,BLUE);
	floodfill(100,110,BLUE);
	bar(98,93,102,110);
	setfillstyle(1,BLUE);
	setcolor(RED);
	outtextxy(100,150,"Use these keys to move");
	outtextxy(150,200,"A to move LEFT");
	outtextxy(150,250,"D to move RIGHT");
	outtextxy(150,300,"W to move UP");
	outtextxy(150,350,"S to move DOWN");
	outtextxy(100,400,"Push Yellow circles");
	setcolor(YELLOW);
	circle(280,400,12);
	setfillstyle(1,YELLOW);
	floodfill(280,400,YELLOW);
	setcolor(RED);
	outtextxy(300,400,"to red rectangle");
	setcolor(RED);
	circle(470,400,8);
	setfillstyle(1,RED);
	floodfill(470,400,RED);
	bar(460,390,480,410);
	setcolor(YELLOW);
	circle(250,450,8);
	setfillstyle(1,YELLOW);
	floodfill(250,450,YELLOW);
	bar(240,420,390,470);
	setcolor(BLACK);
	settextstyle(8,0,3);
	outtextxy(242,425,"MAIN MENU");
	ch=getch();
	if(ch==13)
	{
	setcolor(BLACK);
	settextstyle(7,0,7);
	outtextxy(170,150,"PUSHBOX");
	setcolor(BLACK);
	circle(250,250,0);
	setfillstyle(1,BLACK);
	floodfill(250,250,BLACK);
	bar(245,245,390,280);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	circle(250,250,0);
	setfillstyle(1,BLACK);
	floodfill(250,250,BLACK);
	bar(245,305,390,335);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	settextstyle(8,0,2);
	outtextxy(292,247,"PLAY");
	settextstyle(8,0,1);
	outtextxy(250,305,"INSTRUCTIONS");
	setcolor(BLACK);
	settextstyle(7,0,5);
	outtextxy(170,30,"Instructions");
	setcolor(BLACK);
	settextstyle(11,0,8);
	outtextxy(130,100,"This is you");
	setcolor(BLACK);
	circle(100,110,8);
	setfillstyle(1,BLACK);
	floodfill(100,110,BLACK);
	bar(98,93,102,110);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	outtextxy(100,150,"Use these keys to move");
	outtextxy(150,200,"A to move LEFT");
	outtextxy(150,250,"D to move RIGHT");
	outtextxy(150,300,"W to move UP");
	outtextxy(150,350,"S to move DOWN");
	outtextxy(100,400,"Push Yellow circles");
	setcolor(BLACK);
	circle(280,400,12);
	setfillstyle(1,BLACK);
	floodfill(280,400,BLACK);
	setcolor(BLACK);
	outtextxy(300,400,"to red rectangle");
	setcolor(BLACK);
	circle(470,400,8);
	setfillstyle(1,BLACK);
	floodfill(470,400,BLACK);
	bar(460,390,480,410);
	setcolor(BLACK);
	circle(250,450,8);
	setfillstyle(1,BLACK);
	floodfill(250,450,BLACK);
	bar(240,420,390,470);
	setcolor(BLACK);
	settextstyle(8,0,3);
	outtextxy(242,425,"MAIN MENU");
	game();}
	else
	INST();

}
void main()
{
	int dr = DETECT, md;
	initgraph(&dr,&md,"c:\\turboc3\\bgi");
	game();
	getch();
	closegraph();
	restorecrtmode();
}
void game()
{
	char ch ,z=YELLOW,x = YELLOW,y = GREEN,c=YELLOW;
	setbkcolor(BLACK);
	A:
	setcolor(RED);
	settextstyle(7,0,7);
	outtextxy(170,150,"PUSHBOX");
	setcolor(x);
	circle(250,250,0);
	setfillstyle(1,x);
	floodfill(250,250,x);
	bar(245,245,390,280);
	setfillstyle(1,x);
	setcolor(y);
	circle(250,310,0);
	setfillstyle(1,y);
	floodfill(250,310l,y);
	bar(245,305,390,335);
	setfillstyle(1,GREEN);
	setcolor(BLACK);
	settextstyle(8,0,2);
	outtextxy(292,247,"PLAY");
	settextstyle(8,0,1);
	outtextxy(250,305,"INSTRUCTIONS");
	setcolor(BLACK);

	ch=getch();
	if(ch=='w' || ch=='s')
	{
		x=y;
		y=c;
		c=x;
		goto A;
	}
	else if(ch==13)
	{
		if(x==z)
		{
			start();
		}
		else if(y==z)
		{
			INST();
		}
	}

}
void start()
{
	int i,j,k,xm=300,ym=195,xb_1=265,xb_2=335,xb_3=300,xb_4=300,yb_1=230,yb_2=195,yb_3=160,yb_4=265;
	char ch;
	setbkcolor(BLACK);
	setcolor(BLACK);
	for(i=0;i<=630;i+=35)
	{
		for(j=0;j<=455;j+=35)
		{
			rectangle(i+5,j+5,i+35,j+35);
		}
	}

	settextstyle(7,0,7);
	outtextxy(230,150,"GAME");
	setcolor(BLACK);
	circle(250,250,10);
	setfillstyle(1,BLACK);
	floodfill(250,250,BLACK);
	bar(0,0,700,700);
	setfillstyle(1,BLACK);
	setcolor(GREEN);
	rectangle(285,40,315,70);
	rectangle(285,75,315,105);
	rectangle(285,110,315,140);
	rectangle(285,145,315,175);
	rectangle(285,180,315,210);
	rectangle(285,215,315,245);
	rectangle(285,250,315,280);
	rectangle(285,285,315,315);
	rectangle(285,320,315,350);
	rectangle(285,355,315,385);
	rectangle(285,390,315,420);
	rectangle(320,180,350,210);
	rectangle(355,180,385,210);
	rectangle(390,180,420,210);
	rectangle(425,180,455,210);
	rectangle(460,180,490,210);
	rectangle(110,215,140,245);
	rectangle(145,215,175,245);
	rectangle(180,215,210,245);
	rectangle(215,215,245,245);
	rectangle(250,215,280,245);


	B:

//BOX
	setcolor(YELLOW);
	circle(xb_1,yb_1,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_1,yb_1,YELLOW);
	circle(xb_2,yb_2,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_2,yb_2,YELLOW);
	circle(xb_3,yb_3,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_3,yb_3,YELLOW);
	circle(xb_4,yb_4,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_4,yb_4,YELLOW);


//DESTINATION
	setcolor(RED);
	circle(125,230,8);
	circle(300,55,8);
	circle(300,405,8);
	circle(475,195,8);
	setfillstyle(1,RED);
	floodfill(125,230,RED);
	floodfill(300,55,RED);
	floodfill(300,405,RED);
	floodfill(475,195,RED);
	setcolor(RED);
	bar(115,220,135,240);
	bar(290,395,310,415);
	bar(290,45,310,65);
	bar(465,185,485,205);
	setfillstyle(SOLID_FILL,RED);


//BOXMAN
	setcolor(BLUE);
	circle(xm,ym,8);
	setfillstyle(1,BLUE);
	floodfill(xm,ym,BLUE);
	bar(xm-2,ym-12,xm+2,ym-5);
	setfillstyle(1,BLUE);



	if(xb_1==125 && yb_1==230 && xb_2==475 && yb_2==195 && xb_3==300 && yb_3==55 && xb_4==300 && yb_4==405)
	{
	delay(1000);
	setcolor(BLACK);
	rectangle(285,40,315,70);
	rectangle(285,75,315,105);
	rectangle(285,110,315,140);
	rectangle(285,145,315,175);
	rectangle(285,180,315,210);
	rectangle(285,215,315,245);
	rectangle(285,250,315,280);
	rectangle(285,285,315,315);
	rectangle(285,320,315,350);
	rectangle(285,355,315,385);
	rectangle(285,390,315,420);
	rectangle(320,180,350,210);
	rectangle(355,180,385,210);
	rectangle(390,180,420,210);
	rectangle(425,180,455,210);
	rectangle(460,180,490,210);
	rectangle(110,215,140,245);
	rectangle(145,215,175,245);
	rectangle(180,215,210,245);
	rectangle(215,215,245,245);
	rectangle(250,215,280,245);

	//BOX
	setcolor(BLACK);
	circle(xb_1,yb_1,12);
	setfillstyle(1,BLACK);
	floodfill(xb_1,yb_1,BLACK);
	circle(xb_2,yb_2,12);
	setfillstyle(1,BLACK);
	floodfill(xb_2,yb_2,BLACK);
	circle(xb_3,yb_3,12);
	setfillstyle(1,BLACK);
	floodfill(xb_3,yb_3,BLACK);
	circle(xb_4,yb_4,12);
	setfillstyle(1,BLACK);
	floodfill(xb_4,yb_4,BLACK);


//DESTINATION
	setcolor(BLACK);
	circle(125,230,8);
	circle(300,55,8);
	circle(300,405,8);
	circle(475,195,8);
	setfillstyle(1,BLACK);
	floodfill(125,230,BLACK);
	floodfill(300,55,BLACK);
	floodfill(300,405,BLACK);
	floodfill(475,195,BLACK);
	setcolor(BLACK);
	bar(115,220,135,240);
	bar(290,395,310,415);
	bar(290,45,310,65);
	bar(465,185,485,205);
	setfillstyle(SOLID_FILL,BLACK);


//BOXMAN
	setcolor(BLACK);
	circle(xm,ym,8);
	setfillstyle(1,BLACK);
	floodfill(xm,ym,BLACK);
	bar(xm-2,ym-12,xm+2,ym-5);
	setfillstyle(1,BLACK);

	second();
	}

	ch=getch();
	if(ch=='a' || ch=='A')
	{
		xm=xm-35;
			{
				if(xm==265)
				{
					if(ym!=230)
					{
						xm=xm+35;
					}
				}
				if(xm==80)
				{
					xm=xm+35;
				}
			}
			if(xm==xb_1 && ym==yb_1)
			{
				xb_1=xb_1-35;
				if(xb_1==265)
				{
					if(yb_1!=230)
					{
						xb_1=xb_1+35;
						xm=xm+35;
					}
				}
				if(xb_1==90)
				{
					xb_1=xb_1+35;
					xm=xm+35;
				}
				setcolor(BLACK);
				circle(xb_1+35,yb_1,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1+35,yb_1,BLACK);
			}
			if(xm==xb_2 && ym==yb_2)
			{
				xb_2=xb_2-35;
				if(xb_2==265)
				{
					if(yb_2!=230)
					{
						xb_2=xb_2+35;
						xm=xm+35;
					}
				}
				if(xb_2==90)
				{
					xb_2=xb_2+35;
					xm=xm+35;
				}
				setcolor(BLACK);
				circle(xb_2+35,yb_2,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2+35,yb_2,BLACK);
			}
			if(xm==xb_3 && ym==yb_3)
			{
				xb_3=xb_3-35;
				if(xb_3==265)
				{
					if(yb_3!=230)
					{
						xb_3=xb_3+35;
						xm=xm+35;
					}
				}
				if(xb_3==90)
				{
					xb_3=xb_3+35;
					xm=xm+35;
				}
				setcolor(BLACK);
				circle(xb_3+35,yb_3,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3+35,yb_3,BLACK);
			}
			if(xm==xb_4 && ym==yb_4)
			{
				xb_4=xb_4-35;
				if(xb_4==265)
				{
					if(yb_4!=230)
					{
						xb_4=xb_4+35;
						xm=xm+35;
					}
				}
				if(xb_4==90)
				{
					xb_4=xb_4+35;
					xm=xm+35;
				}
				setcolor(BLACK);
				circle(xb_4+35,yb_4,12);
				setfillstyle(1,BLACK);
				floodfill(xb_4+35,yb_4,BLACK);
			}
			setcolor(BLACK);
			circle(xm+35,ym,8);
			setfillstyle(1,BLACK);
			floodfill(xm+35,ym,BLACK);
			bar(xm-2+35,ym-12,xm+2+35,ym-5);
			setfillstyle(1,BLACK);
		 goto B;
		}
	if(ch=='d' || ch=='D')
	{
		xm=xm+35;
			{
				if(xm==335)
				{
					if(ym!=195)
					{
						xm=xm-35;
					}
				}
				if(xm==510)
				{
					xm=xm-35;
				}
			}
			if(xm==xb_1 && ym==yb_1)
			{
				xb_1=xb_1+35;
				if(xb_1==335)
				{
					if(yb_1!=195)
					{
						xb_1=xb_1-35;
						xm=xm-35;
					}
				}
				if(xb_1==510)
				{
					xb_1=xb_1-35;
					xm=xm-35;
				}
				setcolor(BLACK);
				circle(xb_1-35,yb_1,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1-35,yb_1,BLACK);
			}
			if(xm==xb_2 && ym==yb_2)
			{
				xb_2=xb_2+35;
				if(xb_2==335)
				{
					if(yb_2!=195)
					{
						xb_2=xb_2-35;
						xm=xm-35;
					}
				}
				if(xb_2==510)
				{
					xb_2=xb_2-35;
					xm=xm-35;
				}
				setcolor(BLACK);
				circle(xb_2-35,yb_2,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2-35,yb_2,BLACK);
			}
			if(xm==xb_3 && ym==yb_3)
			{
				xb_3=xb_3+35;
				if(xb_3==335)
				{
					if(yb_3!=195)
					{
						xb_3=xb_3-35;
						xm=xm-35;
					}
				}
				if(xb_3==510)
				{
					xb_3=xb_3-35;
					xm=xm-35;
				}
				setcolor(BLACK);
				circle(xb_3-35,yb_3,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3-35,yb_3,BLACK);
			}
			if(xm==xb_4 && ym==yb_4)
			{
				xb_4=xb_4+35;
				if(xb_4==335)
				{
					if(yb_4!=195)
					{
						xb_4=xb_4-35;
						xm=xm-35;
					}
				}
				if(xb_4==510)
				{
					xb_4=xb_4-35;
					xm=xm-35;
				}
				setcolor(BLACK);
				circle(xb_4-35,yb_4,12);
				setfillstyle(1,BLACK);
				floodfill(xb_4-35,yb_4,BLACK);
			}
			setcolor(BLACK);
			circle(xm-35,ym,8);
			setfillstyle(1,BLACK);
			floodfill(xm-35,ym,BLACK);
			bar(xm-2-35,ym-12,xm+2-35,ym-5);
			setfillstyle(1,BLACK);
		 goto B;
		}
if(ch=='s' || ch=='S')
	{
		ym=ym+35;
			{
				if(ym==230)
				{
					if(xm!=300)
					{
						ym=ym-35;
					}
				}
				if(ym==265)
				{
					if(xm!=300)
					{
						ym=ym-35;
					}
				}
				if(ym==440)
				{
					ym=ym-35;
				}
			}
			if(ym==yb_1 && xm==xb_1)
			{
				yb_1=yb_1+35;
				if(yb_1==230)
				{
					if(xb_1!=300)
					{
						yb_1=yb_1-35;
						ym=ym-5;
					}
				}
				if(yb_1==265)
				{
					if(xb_1!=300)
					{
						yb_1=yb_1-35;
						ym=ym-5;
					}
				}
				if(yb_1==440)
				{
					yb_1=yb_1-35;
					ym=ym-35;
				}
				setcolor(BLACK);
				circle(xb_1,yb_1-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1,yb_1-35,BLACK);
			}
			if(ym==yb_2 && xm==xb_2)
			{
				yb_2=yb_2+35;
				if(yb_2==230)
				{
					if(xb_2!=300)
					{
						yb_2=yb_2-35;
						ym=ym-5;
					}
				}
				if(yb_2==265)
				{
					if(xb_2!=300)
					{
						yb_2=yb_2-35;
						ym=ym-5;
					}
				}
				if(yb_2==440)
				{
					yb_2=yb_2-35;
					ym=ym-35;
				}
				setcolor(BLACK);
				circle(xb_2,yb_2-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2,yb_2-35,BLACK);
			}
			if(ym==yb_3 && xm==xb_3)
			{
				yb_3=yb_3+35;
				if(yb_3==230)
				{
					if(xb_3!=300)
					{
						yb_3=yb_3-35;
						ym=ym-5;
					}
				}
				if(yb_3==265)
				{
					if(xb_3!=300)
					{
						yb_3=yb_3-35;
						ym=ym-5;
					}
				}
				if(yb_3==440)
				{
					yb_3=yb_3-35;
					ym=ym-35;
				}
				setcolor(BLACK);
				circle(xb_3,yb_3-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3,yb_3-35,BLACK);
			}
			if(xm==xb_4 && ym==yb_4)
			{
				yb_4=yb_4+35;
				if(yb_4==230)
				{
					if(xb_4!=300)
					{
						yb_4=yb_4-35;
						ym=ym-35;
					}
				}
				if(yb_4==265)
				{
					if(xb_4!=300)
					{
						yb_4=yb_4-35;
						ym=ym-5;
					}
				}
				if(yb_4==440)
				{
					yb_4=yb_4-35;
					ym=ym-35;
				}
				setcolor(BLACK);
				circle(xb_4,yb_4-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_4,yb_4-35,BLACK);
			}
			setcolor(BLACK);
			circle(xm,ym-35,8);
			setfillstyle(1,BLACK);
			floodfill(xm,ym-35,BLACK);
			bar(xm-2,ym-12-35,xm+2,ym-5-35);
			setfillstyle(1,BLACK);
		 goto B;
		}
if(ch=='w' || ch=='W')
	{
		ym=ym-35;
			{
				if(ym==195)
				{
					if(xm!=300)
					{
						ym=ym+35;
					}
				}
				if(ym==160)
				{
					if(xm!=300)
					{
						ym=ym+35;
					}
				}
				if(ym==20)
				{
					ym=ym+35;
				}
			}
			if(ym==yb_1 && xm==xb_1)
			{
				yb_1=yb_1-35;
				if(yb_1==195)
				{
					if(xb_1!=300)
					{
						yb_1=yb_1+35;
						ym=ym+5;
					}
				}
				if(yb_1==160)
				{
					if(xb_1!=300)
					{
						yb_1=yb_1+35;
						ym=ym+5;
					}
				}
				if(yb_1==20)
				{
					yb_1=yb_1+35;
					ym=ym+35;
				}
				setcolor(BLACK);
				circle(xb_1,yb_1+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1,yb_1+35,BLACK);
			}
			if(ym==yb_2 && xm==xb_2)
			{
				yb_2=yb_2-35;
				if(yb_2==195)
				{
					if(xb_2!=300)
					{
						yb_2=yb_2+35;
						ym=ym+5;
					}
				}
				if(yb_2==160)
				{
					if(xb_2!=300)
					{
						yb_2=yb_2+35;
						ym=ym+5;
					}
				}
				if(yb_2==20)
				{
					yb_2=yb_2+35;
					ym=ym+35;
				}
				setcolor(BLACK);
				circle(xb_2,yb_2+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2,yb_2+35,BLACK);
			}
			if(ym==yb_3 && xm==xb_3)
			{
				yb_3=yb_3-35;
				if(yb_3==195)
				{
					if(xb_3!=300)
					{
						yb_3=yb_3+35;
						ym=ym+5;
					}
				}
				if(yb_3==160)
				{
					if(xb_3!=300)
					{
						yb_3=yb_3+35;
						ym=ym+5;
					}
				}
				if(yb_3==20)
				{
					yb_3=yb_3+35;
					ym=ym+35;
				}
				setcolor(BLACK);
				circle(xb_3,yb_3+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3,yb_3+35,BLACK);
			}
			if(xm==xb_4 && ym==yb_4)
			{
				yb_4=yb_4-35;
				if(yb_4==195)
				{
					if(xb_4!=300)
					{
						yb_4=yb_4+35;
						ym=ym+35;
					}
				}
				if(yb_4==160)
				{
					if(xb_4!=300)
					{
						yb_4=yb_4+35;
						ym=ym+5;
					}
				}
				if(yb_4==20)
				{
					yb_4=yb_4+35;
					ym=ym+35;
				}
				setcolor(BLACK);
				circle(xb_4,yb_4+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_4,yb_4+35,BLACK);
			}
			setcolor(BLACK);
			circle(xm,ym+35,8);
			setfillstyle(1,BLACK);
			floodfill(xm,ym+35,BLACK);
			bar(xm-2,ym-12+35,xm+2,ym-5+35);
			setfillstyle(1,BLACK);
		 goto B;
		}

}
void second()
{
	char ch;
	int xm=300,ym=90,xb_1=300,yb_1=125,xb_2=265,yb_2=90,xb_3=265,yb_3=125;
	setbkcolor(BLACK);
	setcolor(GREEN);
	rectangle(285,40,315,70);
	rectangle(250,40,280,70);
	rectangle(250,75,280,105);
	rectangle(250,110,280,140);
	rectangle(285,75,315,105);
	rectangle(285,110,315,140);
	rectangle(215,40,245,70);
	rectangle(215,75,245,105);
	rectangle(215,110,245,140);
	rectangle(285,145,315,175);
	rectangle(285,180,315,210);
	rectangle(285,215,315,245);
	rectangle(285,250,315,280);
	rectangle(285,285,315,315);
	rectangle(285,320,315,350);
	rectangle(250,285,280,315);
	rectangle(250,320,280,350);
	rectangle(320,250,350,280);
	rectangle(320,285,350,315);
	rectangle(320,320,350,350);
	rectangle(355,250,385,280);
	rectangle(390,250,420,280);
	rectangle(425,250,455,280);
	rectangle(425,285,455,315);
	rectangle(460,180,490,210);
	rectangle(460,215,490,245);
	rectangle(460,250,490,280);
	rectangle(460,285,490,315);
B:


//BOX
	setcolor(YELLOW);
	circle(xb_1,yb_1,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_1,yb_1,YELLOW);
	circle(xb_2,yb_2,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_2,yb_2,YELLOW);
	circle(xb_3,yb_3,12);
	setfillstyle(1,YELLOW);
	floodfill(xb_3,yb_3,YELLOW);

//DESTINATION
	setcolor(RED);
	circle(475,265,8);
	circle(475,230,8);
	circle(475,195,8);
	setfillstyle(1,RED);
	floodfill(475,265,RED);
	floodfill(475,230,RED);
	floodfill(475,195,RED);
	setcolor(RED);
	bar(465,255,485,275);
	bar(465,220,485,240);
	bar(465,185,485,205);
	setfillstyle(SOLID_FILL,RED);

//BOXMAN
	setcolor(BLUE);
	circle(xm,ym,8);
	setfillstyle(1,BLUE);
	floodfill(xm,ym,BLUE);
	bar(xm-2,ym-12,xm+2,ym);
	setfillstyle(1,BLUE);

	if(xb_1==475 && xb_2==475 && xb_3==475 && ((yb_1==195 && yb_2==230 && yb_3==265) || (yb_1==195 && yb_2==265 && yb_3==230) || (yb_2==195 && yb_1==230 && yb_3==265) || (yb_2==195 && yb_1==265 && yb_3==230) || (yb_3==195 && yb_1==230 && yb_2==265) || (yb_3==195 && yb_1==265 && yb_2==230)))
		goto Z;

	ch=getch();
	if(ch=='a' || ch=='A')
	{
		xm=xm-35;
			{
				if(xm==265)
				{
					switch(ym)
					{
					case 90 :
						{	xm=xm;
							break;
						}
					case 125 :
						{	xm=xm;
							break;
						}
					case 55 :
						{	xm=xm;
							break;
						}
					case 300 :
						{	xm=xm;
							break;
						}
					case 335 :
						{	xm=xm;
							break;
						}
					default :
						{	xm=xm+35;
						}
					}
				}
				if(xm==405)
				{
					if(ym!=265)
					{
						xm=xm+35;
					}
				}
				if(xm==230)
				{
					switch(ym)
					{
					case 55:
						{	xm=xm;
							break;
						}
					case 90 :
						{	xm=xm;
							break;
						}
					case 125 :
						{	xm=xm;
							break;
						}
					default :
						{	xm=xm+35;
							break;
						}
					}
				}
				if(xm==440)
				{
					switch(ym)
					{
					case 265 :
						{	break;
						}
					case 300 :
						{	break;
						}
					default :
						{	xm=xm+35;
							break;
						}
					}
				}
				if(xm==195)
				{
					xm=xm+35;
				}
			}
			if(xm==xb_1 && ym==yb_1)
			{
				xb_1=xb_1-35;
				if(yb_2==yb_1 && xb_2==xb_1)
				{xb_1=xb_1+35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{xb_1=xb_1+35;
				ym=ym-35;}
				if(xb_1==265)
				{
					switch(yb_1)
					{
					case 90 : {break;}
					case 125 : {break;}
					case 55 : {break;}
					case 300 : {break;}
					case 335 : {break;}
					default : {xb_1=xb_1+35;
							xm=xm+35;}
					}
				}
				if(xb_1==405)
				{
					if(yb_1!=300)
					{
						xb_1=xb_1+35;
						xm=xm+35;
					}
				}
				if(xb_1==230)
				{
					switch(yb_1)
					{
					case 55 : {xb_1=xb_1; break;}
					case 90 : {xb_1=xb_1; break;}
					case 125 : {xb_1=xb_1; break;}
					default : {xb_1=xb_1+35;
							xm=xm+35; break;}
					}
				}
				if(xb_1==440)
				{
					switch(yb_1)
					{
					case 265 : {break;}
					case 300 : {break;}
					default : {xb_1=xb_1+35;
							xm=xm+35;break;}
					}
				}
				if(xb_1==195)
				{xb_1=xb_1+35;
				xm=xm+35;}
					setcolor(BLACK);
					circle(xb_1+35,yb_1,12);
					setfillstyle(1,BLACK);
					floodfill(xb_1+35,yb_1,BLACK);
			}
			if(xm==xb_2 && ym==yb_2)
			{
				xb_2=xb_2-35;
				if(yb_2==yb_1 && xb_2==xb_1)
				{xb_2=xb_2+35;
				ym=ym-35;}
				if(yb_2==yb_3 && xb_2==xb_3)
				{xb_2=xb_2+35;
				ym=ym-35;}
				if(xb_2==265)
				{
					switch(yb_2)
					{
					case 90 : {xb_2=xb_2; break;}
					case 125 : {xb_2=xb_2; break;}
					case 55 : {xb_2=xb_2; break;}
					case 300 : {xb_2=xb_2; break;}
					case 335 : {xb_2=xb_2; break;}
					default : {xb_2=xb_2+35;
							xm=xm+35;}
					}
				}
				if(xb_2==405)
				{
					if(yb_2!=300)
					{
						xb_2=xb_2+35;
							xm=xm+35;
					}
				}
				if(xb_2==230)
				{
					switch(yb_2)
					{
					case 55 : {xb_2=xb_2; break;}
					case 90 : {xb_2=xb_2; break;}
					case 125 : {xb_2=xb_2; break;}
					default : {xb_2=xb_2+35;

							xm=xm+35; break;}
					}
				}
				if(xb_2==440)
				{
					switch(yb_1)
					{
					case 265 : {break;}
					case 300 : {break;}
					default : {xb_2=xb_2+35;
							xm=xm+35;break;}
					}
				}
				if(xb_2==195)
				{xb_2=xb_2+35;
							xm=xm+35;}
					setcolor(BLACK);
					circle(xb_2+35,yb_2,12);
					setfillstyle(1,BLACK);
					floodfill(xb_2+35,yb_2,BLACK);
			}
			if(xm==xb_3 && ym==yb_3)
			{
				xb_3=xb_3-35;
				if(yb_3==yb_2 && xb_3==xb_2)
				{xb_3=xb_3+35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{xb_3=xb_3+35;
				ym=ym-35;}
				if(xb_3==265)
				{
					switch(yb_3)
					{
					case 90 : {xb_3=xb_3; break;}
					case 125 : {xb_3=xb_3; break;}
					case 55 : {xb_3=xb_3; break;}
					case 300 : {xb_3=xb_3; break;}
					case 335 : {xb_3=xb_3; break;}
					default : {xb_3=xb_3+35;
							xm=xm+35;}
					}
				}
				if(xb_3==405)
				{
					if(yb_3!=300)
					{
						xb_3=xb_3+35;
							xm=xm+35;
					}
				}
				if(xb_3==230)
				{
					switch(yb_3)
					{
					case 55 : {xb_3=xb_3; break;}
					case 90 : {xb_3=xb_3; break;}
					case 125 : {xb_3=xb_3; break;}
					default : {xb_3=xb_3+35;
							xm=xm+35; break;}
					}
				}
				if(xb_3==440)
				{
					switch(yb_3)
					{
					case 265 : {break;}
					case 300 : {break;}
					default : {xb_3=xb_3+35;
							xm=xm+35;break;}
					}
				}
				if(xb_3==195)
				{xb_3=xb_3+35;
							xm=xm+35;}
					setcolor(BLACK);
					circle(xb_3+35,yb_3,12);
					setfillstyle(1,BLACK);
					floodfill(xb_3+35,yb_3,BLACK);
			}
			setcolor(BLACK);
			circle(xm+35,ym,8);
			setfillstyle(1,BLACK);
			floodfill(xm+35,ym,BLACK);
			bar(xm-2+35,ym-12,xm+2+35,ym-5);
			setfillstyle(1,BLACK);
		 goto B;
		}
	if(ch=='d' || ch=='D')
	{
		xm=xm+35;
			{
				if(xm==370)
				{
					if(ym!=265)
					{xm=xm-35;}
				}
				if(xm==335)
				{
					switch(ym)
					{
					case 265 : {break;}
					case 300 : {break;}
					case 335 : {break;}
					default : {xm=xm-35; break;}
					}
				}
				if(xm==510)
				{
					xm=xm-35;
				}
			}
			if(xm==xb_1 && ym==yb_1)
			{
				xb_1=xb_1+35;

				if(yb_2==yb_1 && xb_2==xb_1)
				{xb_1=xb_1-35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{xb_1=xb_1-35;
				ym=ym-35;}
				if(xb_1==370)
				{
					if(yb_1!=265)
					{xb_1=xb_1-35;
					xm=xm-35;}
				}
				if(xb_1==335)
				{
					switch(yb_1)
					{
					case 265 : {break;}
					case 300 : {break;}
					case 335 : {break;}
					default : {xb_1=xb_1-35;
							xm=xm-35; break;}
					}
				}
				if(xb_1==510)
				{
					xb_1=xb_1-35;
					xm=xm-35;
				}

				setcolor(BLACK);
				circle(xb_1-35,yb_1,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1-35,yb_1,BLACK);
			}
			if(xm==xb_2 && ym==yb_2)
			{
				xb_2=xb_2+35;
				if(yb_2==yb_1 && xb_2==xb_1)
				{xb_2=xb_2-35;
				ym=ym-35;}
				if(yb_2==yb_3 && xb_2==xb_3)
				{xb_2=xb_2-35;
				ym=ym-35;}
				if(xb_2==370)
				{
					if(yb_2!=265)
					{xb_2=xb_2-35;
					xm=xm-35;}
				}
				if(xb_2==335)
				{
					switch(yb_2)
					{
					case 265 : {break;}
					case 300 : {break;}
					case 335 : {break;}
					default : {xb_2=xb_2-35;
						xm=xm-35;break;}
					}
				}
				if(xb_2==510)
				{
					xb_2=xb_2-35;
					xm=xm-35;
				}
				setcolor(BLACK);
				circle(xb_2-35,yb_2,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2-35,yb_2,BLACK);
			}
			if(xm==xb_3 && ym==yb_3)
			{
				xb_3=xb_3+35;
				if(yb_2==yb_3 && xb_2==xb_3)
				{xb_3=xb_3-35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{xb_3=xb_3-35;
				ym=ym-35;}
				if(xb_3==370)
				{
					if(yb_3!=265)
					{xb_3=xb_3-35;
					xm=xm-35;}
				}
				if(xb_3==335)
				{
					switch(yb_3)
					{
					case 265 : {break;}
					case 300 : {break;}
					case 335 : {break;}
					default : {xb_3=xb_3-35;
						xm=xm-35; break;}
					}
				}
				if(xb_3==510)
				{
					xb_3=xb_3-35;
					xm=xm-35;
				}

				setcolor(BLACK);
				circle(xb_3-35,yb_3,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3-35,yb_3,BLACK);
			}
			setcolor(BLACK);
			circle(xm-35,ym,8);
			setfillstyle(1,BLACK);
			floodfill(xm-35,ym,BLACK);
			bar(xm-2-35,ym-12,xm+2-35,ym-5);
			setfillstyle(1,BLACK);
		 goto B;
		}
if(ch=='s' || ch=='S')
	{
		ym=ym+35;
			{
				if(ym==160)
				{
					if(xm!=300)
					{
						ym=ym-35;
					}
				}
				if(ym==300)
				{
					switch(xm)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 440 :{break;}
						case 475 :{break;}
						default :{ym=ym-35;break;}
					}
				}
				if(ym==335)
				{
					switch(xm)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 265 :{break;}
						default :{ym=ym-35;break;}
					}
				}
				if(ym==230)
				{
					switch(xm)
					{
					case 475 :{break;}
					case 300 :{break;}
					default :{ym=ym-35;break;}
					}
				}
				if(ym==370)
				{
					ym=ym-35;
				}
				if(ym==265)
				{
					switch(xm)
					{
						if(xm==390 || xm==355)
							ym=ym-35;
					}
				}
			}
			if(ym==yb_1 && xm==xb_1)
			{
				yb_1=yb_1+35;
				if(yb_2==yb_1 && xb_2==xb_1)
				{yb_1=yb_1-35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{yb_1=yb_1-35;
				ym=ym-35;}
				if(yb_1==160)
				{
					if(xb_1!=300)
					{
						ym=ym-35;
						yb_1=yb_1-35;
					}
				}
				if(yb_1==300)
				{
					switch(xb_1)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 440 :{break;}
						case 475 :{break;}
						default :{ym=ym-35;
							yb_1=yb_1-35;break;}
					}
				}
				if(yb_1==335)
				{
					switch(xb_1)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 265:{break;}
						default :{ym=ym-35;
							yb_1=yb_1-35;break;}
					}
				}
				if(yb_1==230 || yb_1==265)
				{
					switch(xb_1)
					{
					case 475 :{break;}
					case 300 :{break;}
					default :{ym=ym-35;
						yb_1=yb_1-35;break;}
					}
				}
				if(yb_1==370)
				{
					ym=ym-35;
					yb_1=yb_1-35;
				}
				setcolor(BLACK);
				circle(xb_1,yb_1-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1,yb_1-35,BLACK);
			}
			if(ym==yb_2 && xm==xb_2)
			{
				yb_2=yb_2+35;
				if(yb_2==yb_3 && xb_2==xb_3)
				{yb_2=yb_2-35;
				ym=ym-35;}
				if(yb_2==yb_1 && xb_2==xb_1)
				{yb_2=yb_2-35;
				ym=ym-35;}
				if(yb_2==160)
				{
					if(xb_2!=300)
					{
						ym=ym-35;
						yb_2=yb_2-35;
					}
				}
				if(yb_2==300)
				{
					switch(xb_2)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 440 :{break;}
						case 475 :{break;}
						default :{ym=ym-35;
							yb_2=yb_2-35;break;}
					}
				}
				if(yb_2==335)
				{
					switch(xb_2)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 265:{break;}
						default :{ym=ym-35;
							yb_2=yb_2-35;break;}
					}
				}
				if(yb_2==230 || yb_2==265)
				{
					switch(xb_2)
					{
					case 475 :{break;}
					case 300 :{break;}
					default :{ym=ym-35;
						yb_2=yb_2-35;break;}
					}
				}
				if(yb_2==370)
				{
					ym=ym-35;
					yb_2=yb_2-35;
				}
				setcolor(BLACK);
				circle(xb_2,yb_2-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2,yb_2-35,BLACK);
			}
			if(ym==yb_3 && xm==xb_3)
			{
				yb_3=yb_3+35;
				if(yb_2==yb_3 && xb_2==xb_3)
				{yb_3=yb_3-35;
				ym=ym-35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{yb_3=yb_3-35;
				ym=ym-35;}
				if(yb_3==160)
				{
					if(xb_3!=300)
					{
						ym=ym-35;
						yb_3=yb_3-35;
					}
				}
				if(yb_3==300)
				{
					switch(xb_3)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 440 :{break;}
						case 475 :{break;}
						default :{ym=ym-35;
							yb_3=yb_3-35;break;}
					}
				}
				if(yb_3==335)
				{
					switch(xb_3)
					{
						case 300 :{break;}
						case 335 :{break;}
						case 265:{break;}
						default :{ym=ym-35;
							yb_3=yb_3-35;break;}
					}
				}
				if(yb_3==230 || yb_3==265)
				{
					switch(xb_3)
					{
					case 475 :{break;}
					case 300 :{break;}
					default :{ym=ym-35;
						yb_3=yb_3-35;break;}
					}
				}
				if(yb_3==370)
				{
					ym=ym-35;
					yb_3=yb_3-35;
				}
				setcolor(BLACK);
				circle(xb_3,yb_3-35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3,yb_3-35,BLACK);
			}
			setcolor(BLACK);
			circle(xm,ym-35,8);
			setfillstyle(1,BLACK);
			floodfill(xm,ym-35,BLACK);
			bar(xm-2,ym-12-35,xm+2,ym-5-35);
			setfillstyle(1,BLACK);
		 goto B;
		}
if(ch=='w' || ch=='W')
	{
		ym=ym-35;
			{
				if(ym==20)
				{
					ym=ym+35;
				}
				if(ym==265)
				{
					switch(xm)
					{
					case 300 :{break;}
					case 335 :{break;}
					case 440 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;}
					}
				}
				if(ym==230)
				{

					switch(xm)
					{
					case 300 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;}
					}
				}
				if(ym==160)
				{
					if(xm!=300)
						ym=ym+35;
				}
			}
			if(ym==yb_1 && xm==xb_1)
			{
				yb_1=yb_1-35;
				if(yb_1==yb_2 && xb_2==xb_1)
				{yb_1=yb_1+35;
				ym=ym+35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{yb_1=yb_1+35;
				ym=ym+35;}
				if(yb_1==20)
				{
					ym=ym+35;
					yb_1=yb_1+35;
				}
				if(yb_1==265)
				{
					switch(xb_1)
					{
					case 300 :{break;}
					case 335 :{break;}
					case 440 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_1=yb_1+35;}
					}
				}
				if(yb_1==230)
				{

					switch(xb_1)
					{
					case 300 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_1=yb_1+35;}
					}
				}
				if(yb_1==160)
				{
					if(xb_1!=265)
					{
						ym=ym+35;
						yb_1=yb_1+35;
					}
				}
				setcolor(BLACK);
				circle(xb_1,yb_1+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_1,yb_1+35,BLACK);
			}
			if(ym==yb_2 && xm==xb_2)
			{
				yb_2=yb_2-35;
				if(yb_2==yb_1 && xb_2==xb_1)
				{yb_2=yb_2+35;
				ym=ym+35;}
				if(yb_2==yb_3 && xb_2==xb_3)
				{yb_2=yb_2+35;
				ym=ym+35;}
				if(yb_2==20)
				{
					ym=ym+35;
					yb_2=yb_2+35;
				}
				if(yb_2==265)
				{
					switch(xb_2)
					{
					case 300 :{break;}
					case 335 :{break;}
					case 440 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_2=yb_2+35;}
					}
				}
				if(yb_2==230)
				{
					switch(xb_2)
					{
					case 300 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_2=yb_2+35;}
					}
				}
				if(yb_2==160)
				{
					if(yb_2!=265)
					{
						yb_2=yb_2+35;
						ym=ym+35;
					}
				}
				setcolor(BLACK);
				circle(xb_2,yb_2+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_2,yb_2+35,BLACK);
			}
			if(ym==yb_3 && xm==xb_3)
			{
				yb_3=yb_3-35;
				if(yb_2==yb_3 && xb_2==xb_3)
				{yb_3=yb_3+35;
				ym=ym+35;}
				if(yb_1==yb_3 && xb_1==xb_3)
				{yb_3=yb_3+35;
				ym=ym+35;}
				if(yb_3==20)
				{
					ym=ym+35;
					yb_3=yb_3+35;
				}
				if(yb_3==265)
				{
					switch(xb_3)
					{
					case 300 :{break;}
					case 335 :{break;}
					case 440 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_3=yb_3+35;}
					}
				}
				if(yb_3==230)
				{
					switch(xb_3)
					{
					case 300 :{break;}
					case 475 :{break;}
					default :{ym=ym+35;
						yb_3=yb_3+35;}
					}
				}
				if(yb_3==160)
				{
					if(xb_3!=265)
					{
						yb_3=yb_3+35;
						ym=ym+35;
					}
				}
				setcolor(BLACK);
				circle(xb_3,yb_3+35,12);
				setfillstyle(1,BLACK);
				floodfill(xb_3,yb_3+35,BLACK);
			}
			setcolor(BLACK);
			circle(xm,ym+35,8);
			setfillstyle(1,BLACK);
			floodfill(xm,ym+35,BLACK);
			bar(xm-2,ym-12+35,xm+2,ym-5+35);
			setfillstyle(1,BLACK);
		 goto B;
		}


Z:
	delay(500);
	setbkcolor(BLACK);
	setcolor(BLACK);
	rectangle(285,40,315,70);
	rectangle(250,40,280,70);
	rectangle(250,75,280,105);
	rectangle(250,110,280,140);
	rectangle(285,75,315,105);
	rectangle(285,110,315,140);
	rectangle(215,40,245,70);
	rectangle(215,75,245,105);
	rectangle(215,110,245,140);
	rectangle(285,145,315,175);
	rectangle(285,180,315,210);
	rectangle(285,215,315,245);
	rectangle(285,250,315,280);
	rectangle(285,285,315,315);
	rectangle(285,320,315,350);
	rectangle(250,285,280,315);
	rectangle(250,320,280,350);
	rectangle(320,250,350,280);
	rectangle(320,285,350,315);
	rectangle(320,320,350,350);
	rectangle(355,250,385,280);
	rectangle(390,250,420,280);
	rectangle(425,250,455,280);
	rectangle(425,285,455,315);
	rectangle(460,180,490,210);
	rectangle(460,215,490,245);
	rectangle(460,250,490,280);
	rectangle(460,285,490,315);

//BOX
	setcolor(BLACK);
	circle(xb_1,yb_1,12);
	setfillstyle(1,BLACK);
	floodfill(xb_1,yb_1,BLACK);
	circle(xb_2,yb_2,12);
	setfillstyle(1,BLACK);
	floodfill(xb_2,yb_2,BLACK);
	circle(xb_3,yb_3,12);
	setfillstyle(1,BLACK);
	floodfill(xb_3,yb_3,BLACK);

//DESTINATION
	setcolor(BLACK);
	circle(475,265,8);
	circle(475,230,8);
	circle(475,195,8);
	setfillstyle(1,BLACK);
	floodfill(475,265,BLACK);
	floodfill(475,230,BLACK);
	floodfill(475,195,BLACK);
	setcolor(BLACK);
	bar(465,255,485,275);
	bar(465,220,485,240);
	bar(465,185,485,205);
	setfillstyle(SOLID_FILL,RED);

//BOXMAN
	setcolor(BLACK);
	circle(xm,ym,8);
	setfillstyle(1,BLACK);
	floodfill(xm,ym,BLACK);
	bar(xm-2,ym-12,xm+2,ym);
	setfillstyle(1,BLACK);


	third();

}


void third()
{
   setcolor(GREEN);
   rectangle(285,145,315,175);
   rectangle(285,180,315,210);


   rectangle(250,145,280,175);
   rectangle(250,180,280,210);
   rectangle(250,215,280,245);
   rectangle(250,250,280,280);


   rectangle(215,145,245,175);
   rectangle(215,180,245,210);
   rectangle(215,215,245,245);
   rectangle(215,250,245,280);

   rectangle(320,180,350,210); 
   rectangle(320,75,350,105);
   rectangle(320,110,350,140);
   rectangle(320,145,350,175);
   rectangle(320,215,350,245);
   rectangle(320,250,350,280);
   rectangle(320,285,350,315);
   rectangle(320,320,350,350);

   rectangle(355,75,385,105);
   rectangle(355,110,385,140);
   rectangle(355,145,385,175);
   rectangle(355,180,385,210);
   rectangle(355,215,385,245);
   rectangle(355,250,385,280);
   rectangle(355,285,385,315);
   rectangle(355,320,385,350);



   rectangle(390,145,420,175);
   rectangle(390,180,420,210);
   rectangle(390,215,420,245);


T:


//BOX
	setfillstyle(1,YELLOW);
	setcolor(YELLOW);
	circle(300,160,12);
	floodfill(300,160,YELLOW);
	circle(300,195,12);
	floodfill(300,195,YELLOW);
	circle(335,125,12);
	floodfill(335,125,YELLOW);
	circle(335,265,12);
	floodfill(335,265,YELLOW);
	circle(370,265,12);
	floodfill(370,265,YELLOW);
	circle(370,195,12);
	floodfill(370,195,YELLOW);

//DESTINATION

	setcolor(RED);
	setfillstyle(1,RED);
	circle(230,160,8);
	floodfill(230,160,RED);
	bar(220,150,240,170);
	bar(220,185,240,205);
	bar(220,220,240,240);
	bar(220,255,240,275);
	bar(255,220,275,240);
	bar(255,255,275,275);

//BOXMAN

	setcolor(BLUE);
	setfillstyle(1,BLUE);
	circle(335,335,8);
   	setfillstyle(1,BLUE);
   	floodfill(335,335,BLUE);
   	bar(335-2,335-12,335+2,335);
   	setfillstyle(1,BLUE);
}