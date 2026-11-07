#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
int n,m,a[N];
int ok[N];
int cnt[100];
vector<int> c;//2h
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i],ok[i]=1;
		//if(a[i]>=262142&&(a[i]>>17)&1==1) cout<<a[i]<<" ";
	}
	int nw=29;
	while(nw>=0){
		//cout<<ok[1624]<<" "<<ok[1215]<<" "<<ok[196]<<" "<<ok[1461]<<" "<<endl;
		int cnt=0; 
		for(int j=1;j<=n;j++){
			if(a[j]&(1<<nw)&&ok[j]) cnt++;
		}
		//cout<<nw<<" "<<cnt<<endl;
		if(cnt<m){
			nw--; 
			continue;
		}
		for(int j=1;j<=n;j++){
			if(!(a[j]&(1<<nw))) ok[j]=0;
			//cout<<ok[j]<<" ";	
		}
		//cout<<endl; 
		nw--;
	}
	long long ans=(1<<30)-1;
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(ok[i]) ans&=a[i];
	}
	//sort(c.begin(),c.end());
	//for(int i=c.size()-1;i>=c.size()-m;i--){
		//ans&=c[i]; 
		//cout<<c[i]<<endl;
	//}
	//cout<<ok[1624]<<" "<<ok[1215]<<" "<<ok[196]<<" "<<ok[1461]<<" "<<endl;
	cout<<ans<<endl;
	return 0;
}
	
