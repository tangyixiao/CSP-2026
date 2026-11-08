#include<bits/stdc++.h>
using namespace std;
struct ui{
	int gs,sc;
}t[300300];
int n,m,a[500500],s[300300];
bool f=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
	}
	if(f==1){
		for(int i=1;i<=m-1;i++){
			cout<<0<<" ";
		} 
		cout<<n;
		return 0;
	}
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=m;j++){
			t[j].gs=t[j].sc=0;
		}
		for(int j=n-i;j<=n;j++){
			t[a[j]].gs++;
			if(t[a[j]].gs==1) t[a[j]].sc=j;
			if(t[a[j]].gs>1){
				for(int k=t[a[j]].sc;k<j;k++){
					if(t[a[k]].gs>0) t[a[k]].gs--;
				}
				t[a[j]].sc=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(t[j].gs==1) s[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
