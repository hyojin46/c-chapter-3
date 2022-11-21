//#include <iostream> // 예제3-6
//using namespace std;
//
//class Rectangle {
//public:
//	int width, height;
//	Rectangle();
//	Rectangle(int w, int h);
//	Rectangle(int length);
//	bool isSquare(); //정사각형이면 true, 아니면 false
//};
//
//Rectangle::Rectangle() {
//	width = height = 1;
//}
//
//Rectangle::Rectangle(int w, int h) {
//	width = w, height = h;
//}
//
// Rectangle::Rectangle(int length) {
//	 width = length;
//}
//
// bool Rectangle::isSquare() {  // 정사각형인지 판별하는 함수
//	 if (width == height) return true;
//	 else return false;
// }
//
// int main() {
//	 Rectangle rect1;
//	 Rectangle rect2(3, 5);
//	 Rectangle rect3(3);
//
//	 if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
//	 if (rect2.isSquare()) cout << "rect1은 정사각형이다." << endl;
//	 if (rect3.isSquare()) cout << "rect1은 정사각형이다." << endl;
//
// }