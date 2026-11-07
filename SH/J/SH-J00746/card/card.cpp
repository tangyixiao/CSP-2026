#include<bits/stdc++.h>
using namespace std;
const int N=5e5+9;
const int M=3e5+9;
int n,m,a[N];
int link[N];
int ans[M];
int t[N];
void solveBFA(){
	int cnt=0;
	int i=n;
	while(a[i]==a[n]){
		cnt++;
		i--;
	}
	int ans=0;
	for(int i=1;i<=cnt;i++) ans+=i%2;
	for(int i=1;i<m;i++) cout<<0<<" ";
	cout<<ans;
}
void solveBF(){
	for(int f=1;f<=n;f++){
		int cnt=0;
		for(int i=f;i<=n;i++){
			t[++cnt]=a[i];
			bool non=0;
			for(int j=1;j<cnt;j++) 
			    if(t[j]==t[cnt]){
			    	non=1;
			    	break;
				}
			if(non){ 
			    t[1]=a[i];
			    cnt=1;
			}
		}
		bool vst[m];
		for(int i=1;i<=m;i++) vst[i]=0;
		for(int i=1;i<=cnt;i++) {
			if(!vst[t[i]]){
		    	ans[t[i]]++;
		    	vst[t[i]]=1;
		    }
		}
		//for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		//cout<<"\n";
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	bool A=1;
	for(int i=2;i<=n;i++) if(a[i]<a[i-1]){
		A=0;
		break;
	}
	if(A) solveBFA();
	else if(n<=5000) solveBF();
	else {
		srand(time(NULL));
		for(int i=1;i<=m;i++){
			int x=rand();
			cout<<x%(n-m)+1;
		}
	}
	return 0;
}

	/*else if(1){
		for(int i=n;i>=1;i--){
			if(link[i]==0)
				for(int j=i-1;j>=1;j--)
					if(a[i]==a[j]){
					    link[i]=j;
					    link[j]=i;
					    break;
					}
		}
		for(int i=1,j;i<=n;i++){
			j=n;
			while(j>=i){
				if(link[j]>=i) break;
				j--;
			}
			if(j<i) j++;
			bool vst[m];
			for(int i=1;i<=m;i++) vst[i]=0;
			for(int k=j;k<=n;k++) {
				if(!vst[a[k]]){
			    	ans[a[k]]++;
			    	vst[a[k]]=1;
			    }
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	}*/
