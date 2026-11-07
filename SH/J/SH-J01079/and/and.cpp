#include<bits/stdc++.h>
using namespace std;
long long n,m;
bool cmp(long long a,long long b){
	return a>b;
}
vector<long long> v;
vector<long long> jh[200005];
vector<long long> to(long long n){
	vector<long long> rtn;
	while(n>0){
		rtn.push_back(n%2);
		n/=2;
	} 
	vector<long long> neww;
	for(long long i=rtn.size()-1;i>=0;i--){
		neww.push_back(rtn[i]);
	}
	return rtn;
}
int cntttt=0;
bool pd(long long mm,long long maxww){
	long long cnt=0;
	for(long long i=0;i<n;i++){
		if(jh[i][maxww]==1){
			cnt++;
		}
	}
	return cnt>=mm; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	for(long long i=0;i<n;i++){
		long long tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),cmp);
	for(long long i=0;i<v.size();i++){
		long long hhh=v[i];
		jh[i]=to(hhh);
//		for(int q=0;q<jh[i].size();q++){
//			cout<<jh[i][q];
//		}
//		cout<<endl;
	}
	
	long long maxw=jh[0].size()-1;
	cout<<maxw<<endl; 
	while(pd(m,maxw)!=1){
		maxw--;
		
	}
	long long ands=0;
	for(long long i=0;i<=maxw;i++){
		ands+=pow(2,i);
	} 
	for(long long i=0;i<n;i++){
		v[i]&=ands;
	}
	sort(v.begin(),v.end(),cmp);
//	for(long long i=0;i<v.size();i++){
//		long long hhh=v[i];
//		jh[i]=to(hhh);
//	}
//	for(long long i=0;i<n;i++){
//		vector<long long> sc=jh[i];
//		for(long long i=0;i<sc.size();i++){
//			cout<<sc[i];
//		}
//		cout<<endl;
//	}
	long long ansss=v[0];
	for(long long i=1;i<m;i++){
		ansss&=v[i];
	}
	cout<<ansss; 
}
