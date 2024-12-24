#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    int x1, x2, y1, y2, dx, dy, step, xinc, yinc, i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("Enter the starting coordinates (x1, y1): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the ending coordinates (x2, y2): ");
    scanf("%d%d", &x2, &y2);

    // calculating dx and dy
    dx = x2 - x1;
    dy = y2 - y1;

    if (abx(dx) > abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }
    // now calculating the increment values
    xinc = dx / step;
    yinc = dy / step;

    for (i = 1; i <= step; i++)
    {
        putpixel(x1, y1, WHITE);
        x1 = x1 + xinc;
        y1 = y1 + yinc;
    }
    getch();
    closegraph();
}
