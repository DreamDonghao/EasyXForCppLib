#include "ProgressBar.h"

efc::ProgressBar::ProgressBar(const int _x, const int _y, const int _width, const int _height, 
	const int _r, const int _g, const int _b, 
	const double _maxVal, const double _nowVal)
:x(_x),y(_y),width(_width),height(_height),r(_r),g(_g),b(_b),maxVal(_maxVal),nowVal(_nowVal){
}

double efc::ProgressBar::getNowWidth() const {
	return width*nowVal/maxVal;
}


