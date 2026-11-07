#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	queue <int> q;
	int n,m,cnt=0,ans=0,s;
	cin>>n>>m;
	int z[n+2];
	int sc[m+2];
	q.push(0);
	for(int i=0;i<n;i++){
		cin>>s;
		q.push(s);
	}
	for(int i=0;i<n;i++){
		z[i]=q.front();
		q.push(z[i]);
		q.pop();
   }
	for(int j=0;j<n;j++){
		q.pop();
		cnt++;
		for(int k=0;k<n;k++){
			for(int i=n;i>0;i--){
				if(z[i]==z[cnt]){
					for(int p=cnt;p<i;p++){
						z[p]=0;
					}
				} 
			}
		}
		for(int c=0;c<m;c++){
			for(int o=0;o<n;o++){
				if(z[o]=o+1){
					ans++;
					sc[o]=ans;
				}
				ans=0;	
			}
	}
	}
	for(int i=0;i<m;i++){
		cout<<sc[i]<<" ";
	}
	return 0;
	fclose(stdin);
    fclose(stdout);
}
