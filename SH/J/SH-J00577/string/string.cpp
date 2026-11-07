#include<bits/stdc++.h>
#define int long long
using namespace std;
struct qu{
	int a;
	char c;
};
int a[200005],ans;
char c[200005];
vector<qu> qul;
vector<qu> qur;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int l = 0;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		l += a[i];
	}
	int sum = 0;
	for(int i = 1;i<=n;i++){
		if(sum+a[i]>l/2){
			qul.push_back({l/2-sum,c[i]});
			break;
		}
		qul.push_back({a[i],c[i]});
		sum += a[i];
		if(sum == l/2)break;
	}
	sum = 0;
	for(int i = n;i>=1;i--){
		if(sum+a[i]>l/2){
			qur.push_back({l/2-sum,c[i]});
			break;
		}
		qur.push_back({a[i],c[i]});
		sum += a[i];
		if(sum == l/2)break;
	}
	int lim = 0;
	int now = 0;
	int j = 0;
	for(int i = 0;i<qul.size();i++){
		lim += qul[i].a;
		int mis = 0;
		while(j<qur.size()&&now<=lim){
			if(now+qur[j].a>lim){
				if(qur[j].c != qul[i].c){
					mis += lim-now;
				}
				qur[j].a -= (lim-now);
				now = lim;
				break;
			}
			now += qur[j].a;
			if(qur[j].c != qul[i].c){
				mis += qur[j].a;
			}
			j++;
			if(now == lim)break;
		}
		ans += mis;
	}
	cout<<ans;
}
