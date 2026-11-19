#include<iostream>
using namespace std;
class B {
public:
	int data;
	B* next;
	B(int a) {
		data = a;
		next = NULL;
	}
};

int main(void) {
	B ob1(10);
	B ob2(20);
	B ob3(30);
	ob1.next = &ob2;
	ob2.next = &ob3;
	B* pob = &ob1;
	while (pob != NULL) {
		cout << pob->data << endl;
		pob = pob->next;
	}
	cout << endl << endl;
	B* pob1 = new B(100);
	B* pob2 = new B(200);
	pob1->next = pob2;
	cout << "pob2->data " << pob2->data << endl;
	cout << "pob1 ->next->data " << pob1->next->data << endl;
	B* tmp = pob1;
	while (tmp != NULL) {
		cout << tmp->data << endl;
		tmp = tmp->next;
	}
	return 0;
}
