#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
void initializeGraphics()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
}
// Function to draw a line using the equation Y = mX + C
void drawLine(float m, float C)
{
    int x1, y1, x2, y2;
    x1 = 0;
    y1 = (int)(m * x1 + C);
    x2 = getmaxx();
    y2 = (int)(m * x2 + C);
    line(x1, getmaxy() - y1, x2, getmaxy() - y2);
}
void main()
{
    float m, C;
    initializeGraphics();
    printf("Enter the slope (m): ");
    scanf("%f", &m);
    printf("Enter the y-intercept (C): ");
    scanf("%f", &C);
    drawLine(m, C);
    getch();
    closegraph();
}
