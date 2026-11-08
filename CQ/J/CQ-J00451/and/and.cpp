#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[200005],m,mx,w[40],tmp,lb,tmpp,k,cnt,t[200005][30];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		tmpp=pow(2,n+1);
		for(int i=1;i<tmpp;i++){
			tmp=i;
			lb=tmp&(-tmp);
			tmp-=lb;
			k=a[(int)log2(lb)];
			cnt=1;
			while(tmp){
				lb=tmp&(-tmp);
				k&=a[(int)log2(lb)];
				tmp-=lb;
				cnt++;
			}
			if(cnt==m) mx=max(mx,k);
		}
		cout<<mx;
		return 0;
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++) mx=max(mx,a[i]&a[j]);
		cout<<mx;
		return 0;
	}
	if(m==n){
		mx=a[1];
		for(int i=2;i<=n;i++) mx&=a[i];
		cout<<mx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		mx=max(mx,(int)log2(a[i]));
		tmp=a[i];
		while(tmp){
			lb=tmp&(-tmp);
			w[(int)log2(lb)]++;
			t[i][(int)log2(lb)]++;
			tmp-=lb;
		}
	}
	if(m==n-1){
		for(int j=1;j<=n;j++){
			for(int i=1;i<=30;i++)
				if(w[i]-t[j][i]==n-1) cnt+=pow(2,i);
			mx=max(mx,cnt);
		}
		cout<<mx;
		return 0;
	} 
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
//	for(int i=mx;i>=0;i--){
//		if(w[i]>=m) 
//	}
	return 0;
}

