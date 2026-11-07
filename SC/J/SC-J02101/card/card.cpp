#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
long long n,m,a[N],ans[N],cnt,x,b[N],c[N],sum;
stack<long long> s;
int main(){
	//目标72pts 
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x!=a[cnt])a[++cnt]=x;
		c[cnt]++;
	}
	
	n=cnt;
	if(n<=5000){
		//暴力+特殊性质B 
		for(int k=1;k<=n;k++){
			for(int i=k;i<=n;i++){
				if(b[a[i]]){
					while(s.top()!=a[i]){
						b[s.top()]--;
						s.pop();
					}
				}
				else{
					s.push(a[i]);
					b[a[i]]++;
				}
			}
			
			while(!s.empty()){
				ans[s.top()]+=c[k];
				b[s.top()]--;
				s.pop();
			}
		}
	}
	else if(m==2){
		//特判 
		for(int i=1;i<=n;i++){
			if((n-i+1)%2){
				ans[a[n]]+=c[i];
			}
			else{
				ans[a[n]]+=c[i];
				ans[a[n-1]]+=c[i];
			}
		}
	}
	else{
		//特殊性质A
		for(int i=1;i<=n;i++){
			b[i]+=c[i];
		}
		for(int i=1;i<=n;i++){
			sum+=b[i];
			ans[a[i]]=sum;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}