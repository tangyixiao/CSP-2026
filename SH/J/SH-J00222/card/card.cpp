#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[300010];
vector<int> pre={};
int inv(vector<int> vec,int k){
	for(int i=0;i<vec.size();i++){
		if(vec[i]==k){
			return i;
			break;
		}
	}
	return -1;
}
void ju(int k){ 
	vector<int> desk={};
//	if(k==1){
//		cout<<"in ju==1\n";
//	}
	for(int i=k-1;i<n;i++){
		int ttt=inv(desk,a[i]);
		if(ttt==-1){
			desk.push_back(a[i]);
		}
		else{
			for(int i=ttt;i<desk.size();i++){
				desk[i]=-1;
			}
			desk.push_back(a[i]);
		}
//		if(k==1){
//			cout<<"\nin l="<<i<<endl;
//			for(int kkk=0;kkk<desk.size();kkk++){
//				cout<<desk[kkk]<<" ";
//			}
//		}
	}
	for(int i=0;i<desk.size();i++){
		if(desk[i]==-1) continue;
		pre.push_back(desk[i]);
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ju(i);
	}
	for(int i=0;i<pre.size();i++){
		ans[pre[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
