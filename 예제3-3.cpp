//#include <iostream> //����3-3
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
//	radius = 1; //�⺻������ : �⺻ �������� 1�� ���� -> ���� �������� �ٲٰ� �ʹٸ� 3���� 
//	cout << "������ " << radius << " ������" << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������ " << radius << " ������" << endl;
//}
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	double area = donut.getArea(); // '.'���� ����
//	cout << "donut ������" << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza ������" << area << endl;
//}