//#include <iostream> // ����3-6
//using namespace std;
//
//class Rectangle {
//public:
//	int width, height;
//	Rectangle();
//	Rectangle(int w, int h);
//	Rectangle(int length);
//	bool isSquare(); //���簢���̸� true, �ƴϸ� false
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
// bool Rectangle::isSquare() {  // ���簢������ �Ǻ��ϴ� �Լ�
//	 if (width == height) return true;
//	 else return false;
// }
//
// int main() {
//	 Rectangle rect1;
//	 Rectangle rect2(3, 5);
//	 Rectangle rect3(3);
//
//	 if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
//	 if (rect2.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
//	 if (rect3.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
//
// }