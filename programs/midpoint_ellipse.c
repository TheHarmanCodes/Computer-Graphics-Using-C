// c program to draw the ellipse using Mid-Point ellipse drawing algorithm
#include <conio.h>
#include <stdio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    float x, y, xc, yc, rx, ry, pk, pk1;

    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("\n Harman Singh \t 1000017888");
    printf("\nEnter Center for ellipse\nx : ");
    scanf("%f", &xc);
    printf("y : ");
    scanf("%f", &yc);
    printf("Enter x-radius and y-radius\nx-radius : ");
    scanf("%f", &rx);
    printf("y-radius : ");
    scanf("%f", &ry);
    // Initialize starting point
    x = 0;
    y = ry;

    // Region 1
    pk = (ry * ry) - (rx * rx * ry) + ((rx * rx) / 4);
    while ((2 * x * ry * ry) < (2 * y * rx * rx))
    {
        if (pk <= 0)
        {
            x = x + 1;
            pk1 = pk + (2 * ry * ry * x) + (ry * ry);
        }
        else
        {
            x = x + 1;
            y = y - 1;
            pk1 = pk + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
        pk = pk1;

        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
    }

    // Region 2
    pk = ((x + 0.5) * (x + 0.5) * ry * ry) + ((y - 1) * (y - 1) * rx * rx) - (rx * rx * ry * ry);
    while (y > 0)
    {
        if (pk > 0)
        {
            y = y - 1;
            pk1 = pk - (2 * rx * rx * y) + (rx * rx);
        }
        else
        {
            x = x + 1;
            y = y - 1;
            pk1 = pk + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
        pk = pk1;

        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
    }

    getch();
    closegraph();
}
