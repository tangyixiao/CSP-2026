#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int k[200];
int maxk=0;
int v[200010];
int vcnt=0;
int redotimes=0;
void CheckLargestk(int t){
	/*for(int i=0;i<200;i++){
		if(t>=(1<<i)){
			k[i]++;
			maxk=max(maxk,i); 
		}
	}*/
	int i=0;
	while(t>=(1<<i)){
		i++;
	}
	//cout<<t<<" "<<i-1<<endl; 
	k[i-1]++;
	maxk=max(maxk,i-1);
}
void Myredo(int ip2k){
	redotimes++;
	if(redotimes>10) return;
	//cout<<redotimes;
//	memset(v,0,sizeof(v));
	memset(k,0,sizeof(k));
	vcnt=0,maxk=0;
	for(int i=0;i<n;i++){
		cout<<v[i]<<" "<<ip2k<<endl;
		if(v[i]>=(1<<ip2k)){
			v[vcnt]=v[i]-(1<<ip2k);
			CheckLargestk(v[vcnt]);
			vcnt++;
			cout<<v[vcnt-1]<<" ";
		}
	}
	int ans2k=0;
	bool f=false;
	for(int i=maxk;i>=0;i--){
		if(k[i]>=m){
			ans2k=i;
			if(k[i]==m) f=true;
			break;
		}
	}
	cout<<ans2k<<endl;
	int ans=-1;
	if(f||ans2k==1){
		for(int i=0;i<vcnt;i++){
			if(v[i]>=(1<<ans2k)){
				if(ans==-1) ans=v[i]+(1<<redotimes);
				else ans&=v[i]+(1<<redotimes); 
			}
		}
		cout<<ans;
		return;
	}else{
		Myredo(ans2k);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		CheckLargestk(a[i]);
		v[i]=a[i];
	}
	int ans2k=0;
	bool f=false;
	for(int i=maxk;i>=0;i--){
		if(k[i]>=m){
			ans2k=i;
			if(k[i]==m) f=true;
			break;
		}
	}
	//cout<<ans2k<<endl;
	int ans=-1;
//	if(f||ans2k==0){
		for(int i=0;i<n;i++){
			if(a[i]>=(1<<ans2k)){
				if(ans==-1) ans=a[i];
				else ans&=a[i]; 
			}
		}
		cout<<ans;
//	}else{
	//	Myredo(ans2k);
//	}
	return 0;
} 
