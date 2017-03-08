#include <iostream>
using namespace std;
double y(double x1, double y1, double x2, double y2, double x3, double y3,double x){
	double y,a,b,c;
	a = ((y1 - y2) * (x1 - x3) - (y1 - y3) * (x1 - x2)) / (((x1*x1) - (x2*x2)) * (x1 - x3) - ((x1*x1) - (x3*x3)) * (x1 - x2));
    b = ((y1 - y3) - a * ((x1*x1) - (x3*x3))) / (x1 - x3); 
	c = y1 - a * (x1*x1) - b * x1;
	y = a*(x*x) + b*x + c;
	return y;
}

double interpolate(double x1, double y1, double x2, double y2, double x3, double y3, double x){
	return y1*(((x-x2)*(x-x3))/((x1-x2)*(x1-x3))) + y2*(((x-x1)*(x-x3))/((x2-x1)*(x2-x3))) + y3*(((x-x1)*(x-x2))/((x3-x1)*(x3-x2)));
	
}

int main(){
	double x1, y1, x2, y2, x3, y3, p;
	
    cout <<"Enter x1, y1, x2, y2, x3, y3: ";
    cin >> x1 >> y1 >> x2 >>y2 >> x3 >> y3;
    double delta = (x3-x1)/40;
    for(double i = x1; i < x3; i += delta)
	{
	p =  interpolate(x1, y1, x2, y2, x3, y3, i);
	if(i == x1) cout << "X______________f(X)____" << endl;
	printf("%.3f  ||  %.4f \n",i, p);
	}
	return 0;
}
