#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int ma=0;
bool cmp(int n1,int n2){
	return n1>n2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}
	if(m==2){
		int l=1,r=l+1;
		while(l<=n){
			if(r>n){
				l++;
				r=l+1;
			}
			else{
				//ma=max(ma,a[l] and a[r]);
				r++;
			}
		}
		cout<<ma;
		return 0;
	}
	if(m==n){
		int sum=a[1] and a[2];
		for(int i=3;i<=n;i++){
			sum=sum and a[i];
		}
		cout<<sum;
		return 0;
	}
	return 0;
}
