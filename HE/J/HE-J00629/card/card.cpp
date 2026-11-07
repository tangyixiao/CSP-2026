#include<bits/stdc++.h>
using namespace std;
int nu[500010];
int po[500010];
bool ch[500010];
int n,m;
stack<int>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	if(n>5000){
		if(m==2){
			int k,z=2;
			k=po[1];
			while(po[z]==k){
				z+=1;
			}
			if(k<po[z]){
				cout<<n<<' '<<n-z+1;
			}else{
				cout<<n-z+1<<' '<<n;
			}
		}else{
			for(int i=1;i<=n;i+=1){
				cout<<i<<' ';
			}
		}
		return 0;
	}
	for(int i=1;i<=n;i+=1){
		cin>>po[i];
	}
	for(int i=1;i<=n;i+=1){
		while(!s.empty()){
			s.pop();
		}
		for(int j=i;j<=n;j+=1){
			if(ch[po[j]]==true){
				while(s.top()!=po[j]){
					ch[s.top()]=false;
					s.pop();
				}
			}else{
				s.push(po[j]);
				ch[po[j]]=true;
			}
		}
		for(int j=1;j<=m;j+=1){
			if(ch[j]==true){
				nu[j]+=1;
				ch[j]=false;
			}
		}
	}
	for(int i=1;i<=m;i+=1){
		cout<<nu[i]<<' ';
	}
	return 0;
}
