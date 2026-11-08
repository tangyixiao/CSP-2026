#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n, o=0;
	cin >> n;
	vector<pair<long long,char>> v(n+1);
	for(long long i=1;i<=n;i++){
		long long a;
		char b;
		cin >> a>> b;
		o+=a;
		v[i].first=a;
		v[i].second=b;
	}long long ans=0, l=v[1].first, p=v[n].first, k=n, k1=1, w=0;
	char b=v[n].second, a=v[1].second;
	while(w<o/2){
		w+=min(p,l);
		if(a!=b){
			ans+=min(p,l);
			if(p<l){
				k--;
				l=l-p;
				p=v[k].first;
				b=v[k].second;
			}else if(p>l){
				k1++;
				p=p-l;
				l=v[k1].first;
				a=v[k1].second;
			}else{
				k1++;
				k--;
				p=v[k].first;
				b=v[k].second;
				l=v[k1].first;
				a=v[k1].second;
			}
		}else{
			if(p<l){
				k--;
				l=l-p;
				p=v[k].first;
				b=v[k].second;
			}else if(p>l){
				k1++;
				p=p-l;
				l=v[k1].first;
				a=v[k1].second;
			}else{
				k1++;
				k--;
				p=v[k].first;
				b=v[k].second;
				l=v[k1].first;
				a=v[k1].second;
			}
		}
	}cout <<ans;
	return 0;
}
