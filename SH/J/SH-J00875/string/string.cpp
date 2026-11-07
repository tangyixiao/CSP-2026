#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],n,cnt,s[N],e[N],mid,jo,ans;
char c[N]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	e[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
		s[i]=e[i-1]+1;
		e[i]=s[i]+a[i]-1;
		//cout<<"s["<<i<<"]="<<s[i]<<" e["<<i<<"]="<<e[i]<<"\n";
	}
	ans=cnt/2;
	//cout<<"cnt="<<cnt<<"\n";
	if(cnt%2){
		mid=cnt/2+1;
		jo=1;
	}
	else{
		mid=cnt/2;jo=2;
		//cout<<"mid="<<mid<<"\n";
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(c[i]==c[j]){
				//cout<<"i="<<i<<" j="<<j<<"\n";
				if(mid-e[i]>s[j]-mid&&mid-e[i]<=e[j]-mid)ans-=a[i]-((e[j]-mid)-(mid-s[i])-(jo==2));
				//ans-=s[j]+(e[j]-mid)-(mid-s[i])+(jo==2);
			}
		}
	}
	cout<<ans;
	return 0;
}
