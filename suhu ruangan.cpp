#include <iostream>
using namespace std;
int main(){
//celcius	
	double a;
	cin>>a;
//celcius to reamur,fahrenheit,kelvin
	double b,c,d;
	b=a*0.8;
	c=a*1.8+32;
	d=a+273.15;
	
//output
	cout<<"Celcius: "<<a<<endl;
	cout<<"Reamur: "<<b<<endl;
	cout<<"Fahrenhait: "<<c<<endl;
	cout<<"Kelvin: "<<d<<endl;
	
return 0;
}
