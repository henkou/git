// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 대 자동으로 호출되는 함수
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass(){
		cout << "생성자가 호출되었다." << endl;
	}

	~MyClass() {
		cout << "소멸자가 호출되었다." << endl;
	}
};
void testLocalObj() {
	cout << "testLocalObj 함수 시작!!" << endl;
	MyClass localObj;
	cout << "testLocalObj 함수 끝!!" << endl;
}

int main() {
	cout << "main 함수 시작" << endl;
	testLocalObj();
	cout << "main 함수 끝" << endl;
}