//#include <iostream> //예제3-1
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut; //생성자가 없는경우 -> 컴파일러에 의해 자동으로 삽입됨
//	donut.radius = 1;
//	double area = donut.getArea();
//	cout << "donut 면적은" << area << endl;
//
//	Circle pizza;
//	pizza.radius = 30;
//	area = pizza.getArea();
//	cout << "pizza 면적은" << area << endl;
//
//	
//}