#include<bits/stdc++.h>
#define int long long
using namespace std;
int s[200009];
string a;
bool check(int x,int y){
	int i=1,j=1,sum=0;
	while(sum<x){
		sum+=s[i];
		i++;
	}
	sum=0;
	while(sum<y){
		sum+=s[j];
		j++;
	}
	return a[i-2]==a[j-2];
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	char last;
	int cur=0;
	int sum=0;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		char c;
		cin>>c;
		if(last!=c){
			cur++;
			a+=c;
		}
		last=c;
		s[cur]+=t;
		sum+=t;
	}
//	for(int i=1;i<=cur;i++){
//		cout<<s[i]<<" "<<a[i-1]<<endl; 
//	}
	int l,r;
	int mid=(sum/2)+1;
	if(sum%2==0){
		l=mid-1,r=mid;
	}
	else l=r=mid;
	while(check(l,r)){
		l-=1;
		r+=1;
		if(l<=0||r>sum)  break;
	}
	int tot=r-l-1;
	//cout<<tot<<" "<<l<<" "<<r;
	int ans=0;
	if(sum==tot){
		cout<<0<<endl;
		return 0;
	}	
	else{
		for(int i=1;i<=l;i++){
			//cout<<i<<" "<<sum-i+1<<endl;
			if(!check(i,sum-i+1))ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

