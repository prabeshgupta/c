#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    cleardevice();
    
    int x1, y1, x2, y2, x3, y3;
    float sx, sy;
    
    cout << "Enter the first coordinates of triangle\n";
    cin >> x1 >> y1;
    cout << "Enter the second coordinates of triangle\n";
    cin >> x2 >> y2;
    cout << "Enter the third coordinates of triangle\n";
    cin >> x3 >> y3;
    
    int poly[8] = {x1, y1, x2, y2, x3, y3, x1, y1};
    cleardevice();
    drawpoly(4, poly);
    getch();
    
    cout << "Enter the scaling factors\n";
    cin >> sx >> sy;
    
    // Calculate the reference point for scaling
    int x_ref = x1, y_ref = y1;
    
    // Apply scaling to each vertex
    x1 = (int)(sx * (x1 - x_ref)) + x_ref;
    y1 = (int)(sy * (y1 - y_ref)) + y_ref;
    
    x2 = (int)(sx * (x2 - x_ref)) + x_ref;
    y2 = (int)(sy * (y2 - y_ref)) + y_ref;
    
    x3 = (int)(sx * (x3 - x_ref)) + x_ref;
    y3 = (int)(sy * (y3 - y_ref)) + y_ref;
    
    // Update the polygon coordinates
    poly[0] = x1;
    poly[1] = y1;
    poly[2] = x2;
    poly[3] = y2;
    poly[4] = x3;
    poly[5] = y3;
    poly[6] = x1;
    poly[7] = y1;
    
    cleardevice();
    drawpoly(4, poly);
    getch();
    
    closegraph();
    return 0;
}

