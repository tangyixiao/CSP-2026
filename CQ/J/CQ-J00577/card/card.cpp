#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	if(m==1){
		cout<<n<<endl;
		return 0;
	}
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>dsb(n);
	if(n==m){
		for(int i=0;i<n;i++){
			dsb[a[i]-1]=i+1;
		}
		for(int i=0;i<n;i++){
			cout<<dsb[i]<<" ";
		}
		return 0;
	}
	for(int i=0;i<n;i++){
		vector<int>b(n);
		map<int,int>c;
		for(int j=i;j<n;j++){
			if(c[a[j]]>=0){
				for(int k=c[a[j]];k<j;k++){
					c[b[k]]=0;
					b[k]=-1;
				}				
			}
			else{
				c[a[j]]=j;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<i+m<<" ";
	}
	cout<<endl;
	return 0;
}
