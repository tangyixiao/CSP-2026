#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Part{
	ll a;
	char c;
	Part(ll A,char C){
		a = A;
		c = C;
	}
};
int n,m;
ll a[210000];
char c[210000];
ll p[210000];
vector<Part>bf,nx;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		p[i] = p[i - 1] + a[i];
	}
	ll mid = (p[n] + 1) / 2;
	bool flag = false;
	ll cnt = p[n];
	for(int i = 1;i <= n;i++){
		if(p[i] > mid && p[i - 1] < mid){
			if(cnt % 2 == 0) break;
			a[i]++;
			flag = true;
		}
		if(flag) p[i]++;
	}
	for(int i = 1;i <= n;i++){
		if(p[i] <= mid){
			bf.push_back(Part(a[i],c[i]));
		} else {
			if(p[i - 1] < mid){
				bf.push_back(Part(mid - p[i - 1],c[i]));
			}
			break;
		}
	}
	for(int i = n;i >= 1;i--){
		if(p[i - 1] > mid){
			nx.push_back(Part(a[i],c[i]));
		} else {
			nx.push_back(Part(p[i] - mid,c[i]));
			break;
		}
	}
	/*
	for(Part pt : bf){
		cout << pt.a << ' ' << pt.c << ' ';
	}
	cout << endl;
	for(Part pt : nx){
		cout << pt.a << ' ' << pt.c << ' ';
	}
	cout << endl;
	*/
	m = bf.size();
	ll ans = 0;
	for(int i = 0,j = 0;i < m && j < m;){
		Part l = bf[i],r = nx[j];
		if(l.c != r.c){
//			printf("UNEQ!lc = %c,rc = %c i = %d j = %d\n",l.c,r.c,i,j);
			ans += min(l.a,r.a);
//			printf("NOW: ans = %lld la = %lld ra = %lld\n",ans,l.a,r.a);
		}
		if(l.a > r.a){
			bf[i].a -= nx[j].a;
//			printf("l-r NOW: la = %lld ra = %lld\n",l.a,r.a);
			j++;
		} else if(r.a > l.a){
			nx[j].a -= bf[i].a;
//			printf("r-l NOW: la = %lld ra = %lld\n",l.a,r.a);
			i++;
		} else {
			i++;
			j++;
		}
	}
	printf("%lld\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
