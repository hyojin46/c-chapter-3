//#include <iostream> //예제3-3을 수정 ( 위임생성자& 타겟생성자 )
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle(); //위임생성자
//	Circle(int r); //타겟생성자
//	double getArea();
//};
//Circle::Circle():Circle(1){} //위임생성자 , 호출 r에 1을 전달해줌 (13번째의 타겟생성자를 호출)
//// 1이 들어간 이유 : 기본 생성자의 숫자 ( 기본 반지름을 1로 정함 / 바꿀 수 있음)
//
//Circle::Circle(int r) { //타겟생성자 ,  r에 1을 전달받음
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
//	double area = donut.getArea();
//	cout << "donut 면적은" << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza 면적은" << area << endl;
//}