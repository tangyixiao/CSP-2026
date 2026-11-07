#include<bits/stdc++.h>
using namespace std;
struct zifuduan{
	int n;
	char s;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	zifuduan duan[n+1];
	for(int i=1;i<=n;i++){
		cin>>duan[i].n>>duan[i].s;
	}bool x=0,y=0;
	for(int i=1;i<n;i++){
		if(duan[i].n!=duan[i+1].n)x=1;
		if(duan[i].s!=duan[i+1].s)y=1;
	}if(!y){
		cout<<0;
		return 0;
	}
	long long l=1,r=n;
	long long ans=0;
	while(l<r){
//		cout<<l<<' '<<r<<' ';
		if(duan[l].n>duan[r].n){
			if(duan[r].s!=duan[l].s)ans+=duan[r].n;
			duan[l].n-=duan[r].n;
			r--;
		}else if(duan[r].n>duan[l].n){
			if(duan[r].s!=duan[l].s)ans+=duan[l].n;
			duan[r].n-=duan[l].n;
			l++;
		}else{
			if(duan[r].s!=duan[l].s)ans+=duan[l].n;
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}
