#include<bits/stdc++.h>
using namespace std;
string p[100005],o;
long long n,m,q[100005],v[1005],ans,sum=0,k=0,w[10005];
void ejz(int a){
	w[a]=1;
	if(a==1){
		p[a]=p[a]+'1';
		return ;
	}
	if(w[a/2]==1){
		p[a]=p[a]+p[a/2];
	}
	else{
		if(a%2==1){
			p[a]=p[a]+'1';
			ejz((a-1)/2);
			p[a]=p[a]+p[(a-1)/2];
		}
		else{
			p[a]=p[a]+'0';
			ejz(a/2);
			p[a]=p[a]+p[a/2];
		}
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>q[i];
		k=max(k,q[i]);
	}
	if(m==1){
		cout<<k;
		return 0;
	}
	for(int l=1;l<=n-1;l++){
		v[1]=q[l];
		if(w[v[1]]==0){
			ejz(v[1]);
		}
		for(int r=l;r<=n;r++){
			ans=0;
			v[2]=q[r];
			if(w[v[2]]==0){
				ejz(v[2]);
			}
			o=p[v[1]];
			if(o.size()<p[v[2]].size()){
				while(o.size()<p[v[2]].size()){
					o+='0';
				}
			}
			else{
				while(o.size()>p[v[2]].size()){
					p[v[2]]+='0';
				}
			}
			for(int j=o.size()-1;j>=0;j--){
				o[j]=o[j]&p[v[2]][j];
			}
			for(int i=o.size()-1;i>=0;i--){
				ans*=2;
				if(o[i]=='1'){
					ans+=1;
				}
			}
			sum=max(ans,sum);
		}
	}
	cout<<sum;
	return 0;
}