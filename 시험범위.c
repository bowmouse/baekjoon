#include <iostream>
using namespace std;

class A {
public:
	int a;
	int b;
	int hap = 0;
	
	int print_sc_hap() {
		hap = a + b;
		return hap;

	}
	
};

auto print_sc_ave(double c) {
	double ave = 0;
	ave = 1.0 * c / 2;
	return ave;
}

int main(void) {

	A sc1;
	sc1.a = 10;
	sc1.b = 3;
	A sc2;
	sc2.a = 200;
	sc2.b = 10;
	A sc3;
	sc3.a = 10;
	sc3.b = 20;
	
	int Carrier;
	double c1 = sc1.print_sc_hap() * 1.0;
	double c2 = sc2.print_sc_hap() * 1.0;
	double c3 = sc3.print_sc_hap() * 1.0;
	double ar[3] = { print_sc_ave(c1) * sc1.print_sc_hap(), print_sc_ave(c2) * sc2.print_sc_hap(), print_sc_ave(c3) * sc3.print_sc_hap() };
	int tier[3] = { 1, 2, 3 };
	for (int i = 0; i < 2; i++) {
		if (ar[i] < ar[i + 1]) {
			Carrier = tier[i];
			tier[i] = tier[i + 1];
			tier[i + 1] = Carrier;
		}
	}
	
	
	cout << "number\ta\tb\tsum\tave\ttier" << endl;
	cout << "1\t" << sc1.a << "\t" << sc1.b << "\t" << sc1.print_sc_hap() << "\t" << print_sc_ave(c1) << "\t" << tier[0] << endl;
	cout << "2\t" << sc2.a << "\t" << sc2.b << "\t" << sc2.print_sc_hap() << "\t" << print_sc_ave(c2) << "\t" << tier[1] << endl;
	cout << "3\t" << sc3.a << "\t" << sc3.b << "\t" << sc3.print_sc_hap() << "\t" << print_sc_ave(c3) << "\t" << tier[2] << endl;

	
	return 0;
	//1에서 100까지 덧셈, 홀수까지 덧셈, 배열, 3의 배수 개수 구하기, 키보드로 배열 원소 입력, 배열 원소 출력, 배열 합 구하기, 
	// 배열에서 가장 큰 수 구하기, 배열을 함수를 사용해서 출력하기, 배열을 함수를 사용해서 가장 큰 수 구하기, 포인터로 두 수 교환하기
	//함수로 두 수의 사칙연산, 나머지 연산 구하기, 2차원 배열 생성하기, 2차원 배열을 행렬 형태로 출력, 크기가 같은 두 2차원 배열 덧셈
	//행별 열별 합 구하기, 구조체 (struct), 클래스, 생성자, 생성자 사용, 위임 생성자
}
