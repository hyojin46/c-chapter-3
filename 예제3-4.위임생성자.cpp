//#include <iostream> //����3-3�� ���� ( ���ӻ�����& Ÿ�ٻ����� )
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle(); //���ӻ�����
//	Circle(int r); //Ÿ�ٻ�����
//	double getArea();
//};
//Circle::Circle():Circle(1){} //���ӻ����� , ȣ�� r�� 1�� �������� (13��°�� Ÿ�ٻ����ڸ� ȣ��)
//// 1�� �� ���� : �⺻ �������� ���� ( �⺻ �������� 1�� ���� / �ٲ� �� ����)
//
//Circle::Circle(int r) { //Ÿ�ٻ����� ,  r�� 1�� ���޹���
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
//	double area = donut.getArea();
//	cout << "donut ������" << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza ������" << area << endl;
//}