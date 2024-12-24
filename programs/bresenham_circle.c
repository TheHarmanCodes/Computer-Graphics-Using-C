// c program to draw the circle using Bresenham’s circle drawing algorithm
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int xc, yc, r, x, y, p;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    printf("Enter the coordinates of center : ");
    scanf("%d %d", &xc, &yc);
    printf("\nEnter the radius: ");
    scanf("%d", &r);

    // starting coordinates --
    x = 0;
    y = r;
    p = 3 - 2 * r;

    while (x <= y)
    {
        if (p < 0)
        {
            p = p + (4 * x) + 6;
        }
        else
        {
            y--;
            p = p + 4 * (x - y) + 10;
        }
        x++;
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
    }

    printf("\n\nHarman Singh \t 1000017888");
    getch();

    closegraph();
}
