#include <graphics.h>

// driver code
int main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");
	int i,j,k,t;
	for(t=0;t<=2000;t++){
	putpixel(rand()%500,rand()%500,rand()%15);
	delay(99);
	}

	getch();
    closegraph();
}
