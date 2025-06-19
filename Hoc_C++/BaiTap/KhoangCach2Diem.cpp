#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	
	double dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout<<fixed<<setprecision(2)<<dis<<endl;
	
	return 0;
}