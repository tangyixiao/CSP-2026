#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200050],len=0;
char c[200050];
int l[200050],r[200050],ans=0;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//feropen("srting.in
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		l[i]=len-a[i]+1;
		r[i]=len;
	}
	//list range index
	//posÎ»ÖÃ ²»¸Ä 
	int pos=len,idx=n;
	int i;
	for(i=1;i<=n&&r[i]<=len/2;i++){
		while(r[idx-1]>=len-r[i]+1&&idx>1){
			if(c[i]!=c[idx])ans+=pos-r[idx-1];
			idx--;
			pos=r[idx];
		}
		if(c[i]!=c[idx])ans+=pos-len+r[i];
		pos=len-r[i];
		//cout<<pos<<" "<<r[i]<<'\n';  
	}
	while(r[idx-1]>=len-len/2+1&&idx>1){
			if(c[i]!=c[idx])ans+=pos-r[idx-1];
			idx--;
			pos=r[idx];
		}
	if(c[i]!=c[idx])ans+=pos-len+len/2;
	cout<<ans;         
	return 0;
}

/*
	Mario&Luigi Yes Yes Yes
	Mini World Die Die Die    
	luogu uid:1612389
	Mario&Luigi:Superstar Saga(2003)GBA
	Mario&Luigi:Partners in Time(2005)DS
	Mario&Luigi:Bowser's Inside Story(2009)DS
	Mario&Luigi:Dream Team(2013)3DS
	Mario&Luigi:Paper Jam(2015)3DS
	Mario&Luigi:Superstar Saga+Bowser's Minion(2017)3DS
	Mario&Luigi:Bowser's Inside Story+Bowser Jr.'s Journey(2019)3DS
	Mario&Luigi:Brothership(2024)Switch

*/
