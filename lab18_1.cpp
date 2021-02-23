#include <iostream>
#include <algorithm>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect R1,Rect R2)
{
	double width = min(R1.x + R1.w,R2.x+R2.w) - max(R1.x,R2.x);
	double height = min(R1.y,R2.y) - max(R1.y - R1.h,R2.y - R2.h);
	if(width*height < 0)
	return 0;
	return width * height;
}
