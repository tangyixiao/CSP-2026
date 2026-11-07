#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=200010;
int a[MAXN];
int pre[MAXN],nxt[MAXN];
int pos[MAXN];
bool del[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	 ios::sync_with_stdio(false);
	 int n,m;
	 cin>>n>>m;
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 }
	 for(int i=1;i<=n;i++){
	 	vector<int> desk;
	 	unordered_map<int,int> pos;
	 	for(int j=i;j<=n;j++){
	 		int k=a[j];
	 		if(pos.find(k)==pos.end()){
	 			desk.push_back(k);
	 			pos[k]=desk.size()-1;
			 }
			 else{
			 	int p=pos[k];
			 	desk.resize(p+1);
			 	pos.clear();
			 	for(int t=0;t<desk.size();t++){
			 		pos[desk[t]]=t;
			 		
				 }
				 desk.push_back(k);
				 pos[k]=desk.size()-1;
				 
			 }
		 }
		 long long sum=0;
		 for(int t=0;t<desk.size();t++){
		 	sum+=desk[t];
		 }
		 cout<<sum<<" ";
}
cout<<'/n';
	 return 0;
}
