#include<bits/stdc++.h>
using namespace std;
int n,m,ma;
long long a[200005];
string t[200005];
string to(long long x){
	string new_x;
	while(x){
		new_x=char((x%2)+'0')+new_x;
		x/=2;
	}
	return new_x;
}
long long an(string x,string y){
	long long l1=x.size()-1,l2=y.size()-1,cnt=0,i=0;
	while(l1>=0 && l2>=0){
		if(x[l1]=='1' && y[l2]=='1'){
			long long ans=1;
			for(int j=0;j<i;j++) ans*=2;
			cnt+=ans;
		}
		i++,l1--,l2--;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		t[i]=to(a[i]);
	}
	for(long long i=0;i<n-1;i++){
		for(long long j=i+1;j<n-1;j++){
			if(an(t[i],t[j])>ma){
				ma=an(t[i],t[j]);
			}
		}
	}
	cout<<ma;
	return 0;
}
