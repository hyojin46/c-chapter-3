//#include <iostream> //예제3-3
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle() {
//	radius = 1; //기본생성자 : 기본 반지름을 1로 설정 -> 만약 반지름을 바꾸고 싶다면 3으로 
//	cout << "반지름 " << radius << " 원생성" << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름 " << radius << " 원생성" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	double area = donut.getArea(); // '.'으로 접근
//	cout << "donut 면적은" << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza 면적은" << area << endl;
//}