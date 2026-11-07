#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;;
int a[N],ne[M],book[M],no[M],f[N],num[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		book[a[i]]++;
		ne[no[a[i]]]=i;
		no[a[i]]=i;
	}
	vector<int> v;
	for(int i=1;i<=n;i++){
		no[i]=i;
		if(book[a[i]]>=2){
			v.push_back(i);
//			cout<<i<<" ";
			book[a[i]]--;
		}
//		else cout<<"  ";
	}
	int l=0;
//	cout<<"\n";
	for(int i=1;i<=n;i++){
		int o=i;
		f[o]+=1;
		for(int x=l;x<v.size();x++){
			int g=v[x];
			if(g>=o){
				f[g]-=1;
				f[ne[g]]+=1;
				o=ne[g];
			}
		}
		while(v[l]<=i)l++;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
//		cout<<f[i]<<" ";
		cnt+=f[i];
		num[a[i]]+=cnt;
	}
//	cout<<"\n";
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1



4 3
1 2 1 3
*/
