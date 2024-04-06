#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <process.h>
#include <math.h>

using namespace std;
int main()
{
    int graphdriver = DETECT, graphmode;
    initgraph(&graphdriver, &graphmode, "...\\bgi");
    int x, y, x1, y1, x2, y2, x3, y3;
    cout << "\n Enter Ist coordinates of triangle:";
    cin >> x1 >> y1;
    cout << "\n Enter 2nd coordinates of triangle:";
    cin >> x2 >> y2;
    cout << "\n Enter 3rd coordinates of triangle:";
    cin >> x3 >> y3;
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    getch();
    cleardevice();
    cout << "\n Enter translatio factors :\n";
    cin >> x >> y;
    x1 -= x;
    y1 -= y;
    x2 -= x;
    y2 -= y;
    x3 -= x;
    y3 -= y;
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    getch();
    closegraph();
}

