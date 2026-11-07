#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int h[200005];
	int h_m[200005];
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	sort(h+1,h+n+1,cmp);
	long long temp=1;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int a=1;
		for(int j=1;j<=h[i];j++){
			if(h[i]==a-1){
				h_m[temp]=h[i];
				temp++;
				if(h[i]==1) cnt++;
				break;
			}
			a*=2;
		}
	}
	if(cnt>=m||(m-cnt==1&&h_m[1]!=1)){
		cout<<h_m[1];
		return 0;
	}
	else{
		if(cnt>0) m-=cnt;
	}
	for(int i=1;i<=n;i++){
		if(h[i]==h_m[i]){
			cout<<h_m[m];
			return 0;
		}
	}
	int temp_2=0;
	for(int i=1;i<=n;i++){
		if(h[i]==h[i+1]+1) temp_2++;
	}
	temp_2--;
	if(temp_2==n){
		cout<<h[1];
		return 0;
	}
	return 0;
}