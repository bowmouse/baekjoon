#include <iostream>
using namespace std;

class A {
public:
	string name;
	int c_sc;
	int java_sc;
	int hap=0;
	double ave = 0;
	int Print_sc_hap() {
		hap = c_sc + java_sc;
		return hap;
		
	}
	double Print_sc_ave() {
		ave = Print_sc_hap() / 2;
		return ave;
	}
};

int main(void) {
	
	A sc1;
	sc1.name = "GilDong Hong";
	sc1.c_sc = 10;
	sc1.java_sc = 10;
	A sc2;
	sc2.name = "GilDong Dong";
	sc2.c_sc = 10;
	sc2.java_sc = 10;
	A sc3;
	sc3.name = "GilDong Bong";
	sc3.c_sc = 10;
	sc3.java_sc = 10;
	int tier1 = 1;
	int tier2 = 2;
	int tier3 = 3;
	int Carrier;
	if (sc1.Print_sc_ave() * sc1.Print_sc_hap() < sc2.Print_sc_ave() * sc2.Print_sc_hap()) {
		Carrier = tier2;
		tier2 = tier1;
		tier1 = Carrier;
	}
	else if (sc1.Print_sc_ave() * sc1.Print_sc_hap() == sc2.Print_sc_ave() * sc2.Print_sc_hap()) {
		tier2 = tier1;
		
	}
	if (sc2.Print_sc_ave() * sc2.Print_sc_hap() < sc3.Print_sc_ave() * sc3.Print_sc_hap()) {
		Carrier = tier3;
		tier3 = tier2;
		tier2 = Carrier;
	}
	else if (sc2.Print_sc_ave() * sc2.Print_sc_hap() == sc3.Print_sc_ave() * sc3.Print_sc_hap()) {
		tier3 = tier2;
		
	}
	cout << "number\tname\t\tC_sc\tjv_sc\thap\tave\ttier" << endl;
	cout << "1\t" << sc1.name << "\t" << sc1.c_sc << "\t" << sc1.java_sc << "\t" << sc1.Print_sc_hap() << "\t" << sc1.Print_sc_ave() << "\t" << tier1 << endl;
	cout << "2\t" << sc2.name << "\t" << sc2.c_sc << "\t" << sc2.java_sc << "\t" << sc2.Print_sc_hap() << "\t" << sc2.Print_sc_ave()<<"\t" << tier2 << endl;
	cout << "3\t" << sc3.name << "\t" << sc3.c_sc << "\t" << sc3.java_sc << "\t" << sc3.Print_sc_hap() << "\t" << sc3.Print_sc_ave()<<"\t" << tier3 << endl;
	
	
	return 0;
}
