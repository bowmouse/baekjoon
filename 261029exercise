#include<iostream>
#include <string>

using namespace std;
class A {
private:
	string name;
	int sub1;
	int sub2;
public:
	string n = name;
	string setName(string a) {
		string n1 = a;
		return n1;
	}
	int s11 = sub1;
	int s1(int x) {
		int su1 = x;
		return su1;
	}
	int s22 = sub2;
	int s2(int y) {
		int su2 = y;
		return su2;
	}
	int sum(int x, int y) {
		int hap = x + y;
		return hap;
	}
	float ave(int x, int y) {
		float ave = 1.0 * (x + y) / 2;
		return ave;
	}
};

int main(void) {
	A ob;
	cin >> ob.n>>ob.s11>>ob.s22;
	A ob1;
	cin >> ob1.n >> ob1.s11 >> ob1.s22;
	A ob2;
	cin >> ob2.n >> ob2.s11 >> ob2.s22;
	
	int tier[3] = { 1, 2, 3 };
	int Carrier;
	int score[3] = { ob.sum(ob.s11, ob.s22) * ob.ave(ob.s11, ob.s22), ob1.sum(ob1.s11, ob1.s22) * ob1.ave(ob1.s11, ob1.s22), ob2.sum(ob2.s11, ob2.s22) * ob2.ave(ob2.s11, ob2.s22) };
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (score[i] < score[i + 1]) {
				Carrier = tier[i];
				tier[i] = tier[j];
				tier[j] = Carrier;
			}
		}
		
		
	}
	cout << "number\tname\tsub1\tsub2\tsum\tave\trank\t" << endl;
	cout << "1\t" << ob.setName(ob.n) << "\t" << ob.s1(ob.s11) << "\t" << ob.s2(ob.s22) << "\t" << ob.sum(ob.s11, ob.s22) << "\t" << ob.ave(ob.s11, ob.s22) <<"\t"<<tier[0]<< endl;
	cout << "2\t" << ob1.setName(ob1.n) << "\t" << ob1.s1(ob1.s11) << "\t" << ob1.s2(ob1.s22) << "\t" << ob1.sum(ob1.s11, ob1.s22) << "\t" << ob1.ave(ob1.s11, ob1.s22) <<"\t"<<tier[1]<< endl;
	cout << "3\t" << ob2.setName(ob2.n) << "\t" << ob2.s1(ob2.s11) << "\t" << ob2.s2(ob2.s22) << "\t" << ob2.sum(ob2.s11, ob2.s22) << "\t" << ob2.ave(ob2.s11, ob2.s22) <<"\t"<<tier[2]<< endl;

	return 0;
}
