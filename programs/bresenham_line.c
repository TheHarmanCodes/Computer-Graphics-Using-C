// c program to draw the line using Bresenham’s line drawing algorithm
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
// case 1: when slope value (m < 1)
void drawline1(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;
    // initial polting points-
    x = x1;
    y = y1;
    //
    p = 2 * dy - dx;
    while (x < x2)
    {
        if (p < 0)
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        else
        {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        x = x + 1;
    }
}
// case 2: when slope value (m > 1)
void drawline2(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;
    dx = x2 - x1;
    dy = y2 - y1;
    // initial polting points-
    x = x1;
    y = y1;
    //
    p = 2 * dx - dy;
    while (y < y2)
    {
        if (p < 0)
        {
            putpixel(x, y, 7);
            p = p + 2 * dx;
        }
        else
        {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dx - 2 * dy;
        }
        y = y + 1;
    }
}

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float m;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x2, &y2);
    // Calculate the slope
    if (x2 - x1 != 0)
    { // Avoid division by zero
        m = (float)(y2 - y1) / (x2 - x1);
    }
    else
    {
        m = 10000; // Assign a large value for vertical lines
    }

    // Decide which function to call
    if (m > 1)
    {
        drawline2(x1, y1, x2, y2);
    }
    else
    {
        drawline1(x1, y1, x2, y2);
    }
    getch();
    closegraph();
}
