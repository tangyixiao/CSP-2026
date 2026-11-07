#include <bits/stdc++.h>
using namespace std;


const int N=200005;
int ch[N][32],a[N];
int t[32];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i],cnt=0;
		while(x!=0){
			ch[i][cnt]=x&1;
			x>>=1;
			cnt++;
//			cout<<"x="<<x<<endl;
		}
	}

	for(int i=0;i<=31;i++){
		int tal=0;
		for(int j=1;j<=n;j++){
			tal+=ch[j][i];
		}
		t[i]=tal;
	}
//	cout<<"T:"<<endl;
//	for(int i=0;i<=6;i++){
//		cout<<t[i]<<endl;
//	}
	for(int i=31;i>=0;i--){
		if(t[i]<m){

			for(int j=1;j<=n;j++){
				ch[j][i]=0;
			}
		}
	}
//	cout<<"--"<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<6;j++){
//			cout<<ch[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<"--"<<endl;
	for(int i=1;i<=n;i++){
		int idx=0;
		for(int j=0;j<=31;j++){
			if(ch[i][j]){
				idx+=1<<j;
			}
		}
		a[i]=idx;
//		cout<<"idx["<<i<<"]="<<idx<<endl; 
	}
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	sort(a+1,a+n+1,cmp);
	unsigned long long ans=2147483647;
	for(int i=1;i<=m;i++){
		ans=ans&a[i];
	}
	cout<<ans<<endl;
	return 0; 
}
