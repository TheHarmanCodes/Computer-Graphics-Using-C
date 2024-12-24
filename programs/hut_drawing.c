#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    rectangle(150, 200, 300, 400);

    arc(225, 200, 0, 180, 75);
    line(200, 300, 200, 400);
    line(250, 300, 250, 400);
    line(200, 400, 250, 400);
    arc(225, 300, 0, 180, 25);
    getch();

    closegraph();
}
