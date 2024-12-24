// C program to draw the circle using Mid-Point circle drawing algorithm
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void drawCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int p = 1 - r;
    putpixel(xc + x, yc + y, 7);
    putpixel(xc - x, yc + y, 7);
    putpixel(xc + x, yc - y, 7);
    putpixel(xc - x, yc - y, 7);
    putpixel(xc + y, yc + x, 7);
    putpixel(xc - y, yc + x, 7);
    putpixel(xc + y, yc - x, 7);
    putpixel(xc - y, yc - x, 7);

    while (x < y)
    {
        x++;
        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            y--;
            p = p + 2 * (x - y) + 1;
        }
        // similarly we fill the other octants
        putpixel(xc + x, yc + y, 7);
        putpixel(xc - x, yc + y, 7);
        putpixel(xc + x, yc - y, 7);
        putpixel(xc - x, yc - y, 7);
        putpixel(xc + y, yc + x, 7);
        putpixel(xc - y, yc + x, 7);
        putpixel(xc + y, yc - x, 7);
        putpixel(xc - y, yc - x, 7);
    }
}

void main()
{
    int gd = DETECT, gm;
    int xc, yc, r;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter the center points (xc, yc): ");
    scanf("%d%d", &xc, &yc);

    printf("Enter the radius: ");
    scanf("%d", &r);
    drawCircle(xc, yc, r);

    getch();
    closegraph();
}
