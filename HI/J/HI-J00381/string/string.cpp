#include<bits/stdc++.h>
using namespace std;
struct s{
	long long x;
	char y;
}ss [200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b = 0,c = 0;
	cin>>a;
	for(long long i = 1;i <= a;i++){
		long long m;
		char n;
		cin>>m>>n;
		ss[i].x = m;ss[i].y = n;
		b += m;
	}
	long long m = 0,n = 0,m1 = 0,n1 = 0,m2 = 0,n2 = 0,t = 0,l,r;
	char mc,nc;
	while(1){
		int ok = 0;
		
		if(t == 0){
			if(m + ss[m1+1].x <= b / 2){
				m1++;
				m += ss[m1].x;
				m2 += ss[m1].x;
				mc = ss[m1].y;
			}else ok = 1;
			
			if(n + ss[a - n1].x <= b / 2&& ok == 0){
				n1++;
				n += ss[a+1-n1].x;
				n2 += ss[a+1-n1].x;
				nc = ss[a+1-n1].y;
			}else ok = 1;
			
		}if(t == 1){
			if(m + ss[m1+1].x <= b / 2){
				m1++;
				m += ss[m1].x;
				m2 += ss[m1].x;
				mc = ss[m1].y;
			}else ok = 1;
			
		}if(t == 2){
			if(n + ss[a - n1].x <= b / 2){
				n1++;
				n += ss[a+1-n1].x;
				n2 += ss[a+1-n1].x;
				nc = ss[a+1-n1].y;
			}else {
				ok = 1;
				
			}
			
		}
		if(ok){
			l = m1;
			ss[m1].x = m2;
			r = a + 1-n1;
			ss[r].x = n2;
			break;
		}
		int min1;
		if(m2 > n2) {
			min1 = n2;
			t = 2;
		}
		else{
			min1 = m2;
			t = 1;
			if(m2 == n2) t = 0;
		}
		if(mc != nc) c += min1;
		m2 -= min1;
		n2 -= min1;
	}
	string s1 = "";
	long long d = 0;
	for(int i = l;i <= r;i++){
		for(int j = 1;j <= ss[i].x;j++){
			s1 += ss[i].y;
			d++;
		}
	}long long e = d;
	d /= 2;
	for(int i = 0;i <= d;i++){
		if(s1[i] != s1[e - i - 1]){
			c++;
		}
	}
	printf("%lld",c);
	return 0;
}
