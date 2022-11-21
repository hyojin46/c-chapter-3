//#include <iostream> //위임생성자를 통해 초기화하는 문제
//using namespace std;
//
//class Point {
//	int x, y; //형태는 private
//public: //형태는 public
//	Point();
//	Point(int a, int b);
//	void show() { cout << "(" << x << "," << y << ")" << endl; }
//};
//
//Point::Point():Point(0,0){}
//Point::Point(int a,int b)
//	:x(a),y(b){}
//
//int main() {
//	Point origin;
//	Point target(10, 20);
//	origin.show(); //origin.x()은 오류남-> 왜? : private이기 때문
//	target.show();
//}