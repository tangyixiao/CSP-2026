//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//vector <ll> id;
//vector <char> chr;
//ll n,cnt=0;
//ll siz,j;
//
//void trc(ll ida) {
//	if(id[ida]==0) {
//		id[ida] = -1;
//		chr[ida] = '/';
//	}
//}
//
//int main() {
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	cin >> n;
//	for (ll i =1; i<=n; i++) {
//		int a;
//		char c;
//		cin >> a >> c;
//		id.push_back(a);
//		chr.push_back(c); 
//		siz+=a;
//	}
//	ll tp = 1;
//	char achr, bchr;
//	ll t1=0, t2=0;
//	if (siz%2==0) tp=0;
//	for (ll i =0; i<siz/2+tp; i++) {
//		t1=t2=0;
//		if (id[i+t1] ==-1) t1++;
//		if (id[siz-i-1-t2]==-1) t2++;
//		achr = chr[i+t1], bchr = chr[siz-i-1-t2];
//		if (achr != bchr) {
//			j = min(id[i+t1],id[siz-i-1-t2]);
//			//cout << id[i+t1] << " " << id[siz-i-1-t2] << endl; //t
//			cnt +=j*2;
//			id[i+t1]-=j;
//			id[siz-i-1-t2] -=j;
//			trc(i+t1);
//			trc[siz-i-1-t2];
//		}
//	}
//	cout << cnt;
//	return 0;
//
//}
#include <bits/stdc++.h>
using namespace std;

vector <char>str;
int n,cnt;
int siz;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for (int i =1;i<=n;i++){
		int a; 
		char c;
		cin >> a >> c;
		for (int x = 0;x<a;x++) str.push_back(c);
		siz+=a;
	}
	int tp = 1;
	if (siz%2==0) tp=0;
	for (int i =0;i<siz/2+tp;i++){
		if (str[i] != str[siz-i-1]) cnt++;	
	}
	printf("%d",cnt);
}

