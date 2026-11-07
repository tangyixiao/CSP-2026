#include <fstream>

using namespace std;

ifstream fin("travel.in");
ofstream fout("travel.out");
#define cin fin
#define cout fout

int main() {
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int l1=0,l2=0;
	for (char ch:s1) {
		if (ch<'0' || ch>'9') break;
		l1 = l1*10+(ch-'0');
	}
	for (char ch:s2) {
		if (ch<'0' || ch>'9') break;
		l2 = l2*10+(ch-'0');
	}
	char a1=s1.back(),a2=s2.back();
	if (c1!=c2) {
		cout<<"0000\n";
		return 0;
	}
	if (l1!=l2) {
		cout<<"1000\n";
		return 0;
	}
	if (a1=='A' || a1=='B' || a1=='C') {
		if (a2!='A' && a2!='B' && a2!='C') {
			cout<<"1100\n";
			return 0;
		}
	} else if (a2!='D' && a2!='F') {
		cout<<"1100\n";
		return 0;
	}
	switch(a1) {
	case 'A':
		if (a2!='B') {
			cout<<"1110\n";
			return 0;
		}
		break;
	case 'B':
		if (a2!='A' && a2!='C'){
			cout<<"1110\n";
			return 0;
		} break;
	case 'C':
		if (a2!='B'){
		 	cout<<"1110\n";
			return 0;
		}break;
	case 'D':
		if (a2!='F') {
			cout<<"1110\n";
			return 0;
		}break;
	case 'F':
		if (a2!='D') {
			cout<<"1110\n";
			return 0;
		}break;
	}
	cout<<"1111\n";
	return 0;
}
