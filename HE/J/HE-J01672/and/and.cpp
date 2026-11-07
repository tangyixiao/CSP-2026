#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,m,a,ans;
int ss[32];
int s[N][32],jl[N],lll[N],num,nm,w,ww;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a;
		int j=1;
		while(a){
			s[i][j++]=a%2;
			a/=2;
		}
		//for(int l=1;l<j;l++) cout << s[i][l];
		//cout <<'\n';
	}
	ww=30,nm=n;
	for(int i=1;i<=n;i++) lll[i]=i;
	while(1){
		bool k=0;
		if(ww==1) k=1;
		for(int j=ww;j>=1;j--){
			num=0;w=j;
			memset(jl,0,N);
			for(int i=1;i<=nm;i++){
				if(s[lll[i]][j]){
					jl[++num]=lll[i];
				}
			}
			if(num>=m){
				nm=num;ww=w;
				for(int i=1;i<=nm;i++){
					lll[i]=jl[i];
				}
				//break;
			}
			//for(int i=1;i<=nm;i++) cout << lll[i] <<" ";
			//cout <<'\n';
			//for(int i=1;i<=nm;i++) cout << jl[i] <<" ";
			//cout <<'\n'<< nm <<" "<< num <<" "<< ww <<" "<< w <<'\n'<<'\n';
		}
		if(k) break;
		if(num<m) break;
	}
	//cout <<"***"<<'\n';
	memset(ss,1,30);
	for(int i=1;i<=nm;i++){
		for(int j=1;j<=30;j++){
			ss[j]&=s[lll[i]][j];
		}
	}
	for(int i=1;i<=30;i++){
		ans+=ss[i]*pow(2,i-1);
	}
	cout << ans;
	return 0;
}
