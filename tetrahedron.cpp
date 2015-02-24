#include <iostream>
using namespace std;
double fill_tetrahedron(double &num){
	double V;
	V = (sqrt(2)*pow(num, 3))/12;
	return V/1000;
}
int main()
{
	double edge;
	cout << "Enter the edge of the tetrahedron ";
	cin >> edge;
	cout<<"Amount of water= "<<fill_tetrahedron(edge)<<" Litres"<<endl;
	system("pause");
	return 0;
}