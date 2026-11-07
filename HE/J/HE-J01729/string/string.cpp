#include<bits/stdc++.h>
using namespace std;
long long n,m[200005],sum,cnt,h=1,t,sumn,sum2,mid,sum1,lastt=2;
string s;
char l[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;t=n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>l[i];
		sum+=m[i];
	}
	while(sum/2>cnt){
		if(cnt+m[h]>sum/2)
			break;
		if(cnt+m[t]>sum/2)
			break;
		cnt+=min(m[h],m[t]);
		if(l[h]!=l[t]) sumn+=min(m[h],m[t]);
		if(m[h]<m[t]){
			m[t]-=m[h];h++;
			lastt=1;
		}
		else if(m[h]>m[t]){
			m[h]-=m[t];t--;
			lastt=0;
		}
		else{
			h++;t--;
			lastt=1;
		}
	}
	for(int i=h;i<=t;i++)
		for(int j=1;j<=m[i];j++)
			s+=l[i];
	for(int i=0;i<s.length()/2;i++)
		if(s[i]!=s[s.length()-i-1]) sumn++;
	cout<<sumn;	
	return 0;
}
