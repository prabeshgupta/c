#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int n = 6; // Number of vertices
    int poly[12] = {100,100, 150,150, 200,100, 200,200, 100,200, 100,100};

    setfillstyle(SOLID_FILL, RED); // Set the fill color
    fillpoly(n, poly);

    getch();
    closegraph();
    return 0;
}

