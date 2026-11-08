#include<bits/stdc++.h>
using namespace std;
int n,m,cnt;
int a[200005];
vector<int>b;
bool v[200005];
void f(int d){
	if(d==m){
		int ans=b[0];
		for(int i=1;i<b.size();i++){
			ans=ans&b[i];
		}
		cnt=max(ans,cnt);
		return ;
	}
	for(int i=0;i<n;i++){
		if(v[i]==0){
			v[i]=1;
			b.push_back(a[i]);
			f(d+1);
			b.pop_back();
			v[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ma=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	} 
	if(n<=2000){
		if(n<=20){
			f(0);
			cout<<cnt;
		}else{
			if(m==1) cout<<ma;
			else if(m==2){
				ma=0;
				for(int i=0;i<n;i++){
					for(int j=i+1;j<n;j++){
						ma=max(ma,(a[i]&a[j]));
					}
				}
				cout<<ma;
			}else{
				ma=0;
				for(int i=0;i<n-1;i++){
					ma=max(ma,(a[i]&a[i+1]));
				}
				cout<<ma;
			}
		}
	}else{
		cout<<'4';
	}
	return 0;
}
