#include<bits/stdc++.h>
using namespace std;
//int dx[200000]={};
//int q1[200000]={};
//char q[200000]={};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string q;
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		char a;
		cin>>a;
		for(int i=0;i<x;i++){
			q+=a;
		}
		//cin>>q1[i];
		//dx=dx[i-1]+q1[i];
		//cin>>q[i];
	}
	long long ans=0;
	long long nx=q.size();
	//cout<<nx<<' ';
	for(long long i=0;i<nx/2;i++){
		if(q[i]!=q[q.size()-i-1]){
			ans++;
		}
		//cout<<q[i]<<' '<<q[q.size()-i-1]<<'\n';
	}
	cout<<ans;
	return 0;
}
