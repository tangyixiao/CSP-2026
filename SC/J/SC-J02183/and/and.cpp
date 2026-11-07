#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],b[25];
bool vis[200005];
int ans=0;
void f1(int t,int now,int num){
	if(now==m){
		ans=max(ans,num);
		//cout<<num<<endl;
		return;
	}
	if(t>n){
		return;
	}
	f1(t+1,now+1,num&a[t]);
	f1(t+1,now,num);
}
void init(){
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=2*a[i-1];
	}
}
int main(){
	freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	init();
	cin>>n>>m;
	int _max=0;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		_max=max(_max,a[i]);
		if(flag==0)continue;
		bool oo=0;
		for(int j=1;j<=21;j++){
			if(a[i]+1==b[j]){
				oo=1;
				break;
			}
		}
		if(oo==0)flag=0;
	}
	if(m==1){
		cout<<_max;
		return 0;
	}
	if(m==n){
		int sum=1073741823;
		for(int i=1;i<=n;i++)sum=sum&a[i];
		cout<<sum;
		return 0;
	}
	if(_max<=4){
		int cnt4=0,cnt1=0,cnt2=0,cnt3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==4)cnt4++;
			if(a[i]==1)cnt1++;
			if(a[i]==2)cnt2++;
			if(a[i]==3)cnt3++;
		}
		if(m<=cnt4)cout<<4;
		else if(cnt4<m&&m<=cnt3)cout<<3;
		else if(cnt3<m&&m<=cnt2+cnt3)cout<<2;
		else if(cnt2+cnt3<m&&m<=cnt1+cnt3)cout<<1;
		else cout<<0;
		return 0; 
	}
	if(flag==1){
		sort(a+1,a+1+n);
		cout<<a[m];
		return 0;
	}
	if(n<=20||m==2){
		f1(1,0,1048575);
		cout<<ans;
		return 0;
	}
	f1(1,0,1073741823);
	cout<<ans;
	return 0;
}