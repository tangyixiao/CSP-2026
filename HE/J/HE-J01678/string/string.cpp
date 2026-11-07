#include<bits/stdc++.h>
using namespace std;
struct mp{
	char id;
	long long cou;
}v[200005];
map<char,pair<long long,long long> > m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	bool flag=false;
	long long check=0;
	long long sum=0;
	long long mm;
	if(n&1) mm=n/2+1;
	else mm=n/2;
	for(int i=1;i<=n;i++){
		long long x;
		char c;
		cin>>x>>c;
		sum+=x;
		v[i]={c,x};
		m[c].first++;
		m[c].second+=x;
		if(m[c].first==n) flag=true;
		if(m[c].second>=mm) check=max(check,m[c].second);
	}
	if(flag){
		cout<<0;
	}else if(check){
		cout<<sum-check;
	}else{
		long long i=1,j=n;
		long long ans=0;
		while(i<j){
			if(v[i].id==v[j].id){
				if(i+1!=j){
					if(v[i].cou<v[j].cou){
						long long su_b=v[j].cou-v[i].cou;
						ans+=su_b;
						v[i+1].cou-=su_b;
					}else{
						long long su_b=v[i].cou-v[j].cou;
						ans+=su_b;
						v[j-1].cou-=su_b;
					}
				}
			}else{
				if(i+1!=j){
					if(v[i].cou<v[j].cou){
						ans+=v[j].cou;
						v[i+1].cou-= v[j].cou-v[i].cou;
					}else{
						ans+=v[i].cou;
						v[j-1].cou-=v[i].cou-v[j].cou;
					}
				}else{
					if(v[i].cou<v[j].cou) ans+=v[i].cou;
					else ans+=v[j].cou;
				}
			}
			i++;
			j--;
		}
		cout<<ans;
	}
	return 0;
}

