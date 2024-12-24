// c program using Polygon Filling: Flood Fill Algorithm
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

// function for 8-connected flood fill algorithm
void flood4(int x, int y, int new_col, int old_col)
{
    if (getpixel(x, y) == old_col)
    {
        putpixel(x, y, new_col);
        flood4(x + 1, y, new_col, old_col);
        flood4(x - 1, y, new_col, old_col);
        flood4(x, y + 1, new_col, old_col);
        flood4(x, y - 1, new_col, old_col);
    }
}
// function for 8-connected flood fill algorithm
void flood8(int x, int y, int new_col, int old_col)
{
    putpixel(x, y, new_col);
    flood8(x + 1, y, new_col, old_col);
    flood8(x - 1, y, new_col, old_col);
    flood8(x, y + 1, new_col, old_col);
    flood8(x, y - 1, new_col, old_col);
    flood8(x - 1, y + 1, new_col, old_col);
    flood8(x + 1, y + 1, new_col, old_col);
    flood8(x - 1, y - 1, new_col, old_col);
    flood8(x + 1, y - 1, new_col, old_col);
}

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int top, left, bottom, right;
    top = left = 50;
    bottom = right = 100;
    rectangle(left, top, right, bottom);
    int x = 51;
    int y = 51;
    int newcolor = 12;
    int oldcolor = 0;

    flood(x, y, newcolor, oldcolor);

    outtextxy(10, 10, "Press any key to exit...");

    getch();
    closegraph();
}
