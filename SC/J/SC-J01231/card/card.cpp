#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
int a[MAXN];
int jl[MAXM];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t=i+1;
		int k=i;
		int f=0;
		while(k<=n){
			while(t<=n){
				if(a[t]==a[k]){
					jl[a[t]]++;
					t++;
					if(t>n){
						f=1;
						break;
					} 
					break;
				}
				else t++;
			}
			if(f) break;
			if(t==1+n){
				jl[a[k]]++;
				k++;
				t=k+1;
			}
			else{
				k=t;
				t=k+1;	
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<jl[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}