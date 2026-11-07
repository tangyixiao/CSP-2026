#include <bits/stdc++.h>
using namespace std;

freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
long long a,b=0;
long long times = 0;
long long end_num = 0;
long long use[300000+1] = {0};
char card[500000];
bool situation[300000+1] = {false};
long long search(long long num) {
	for (int i=0;i<500000;i++) {
		if (card[i] == num) return i;
	}
}
int main() {
	cin >> a >> b;
	for (int i=0;i<a;i++) {
		cin >> card[i];
		
	}
	for (int i=0;i<a;i++) {
		for (int i2= times;i2<a;i2++) {
			if (situation[static_cast<int>(card[i2])]==true) {
				
				for (int i1=search(static_cast<int>(card[i2]));i1<i2;i1++) situation[i2] = false;
			}
			situation[static_cast<int>(card[i])] = true;
			for (int i1=1;i1<=b;i1++) {
				if (situation[static_cast<int>(card[i2])] == true) use[static_cast<int>(card[i2])] += 1;
			}
		}
		times++;
	}
	for (int i=1;i<=b+1;i++) cout << use[i];
}