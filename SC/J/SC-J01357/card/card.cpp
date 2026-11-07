#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int b[300010];
int n,m;
int find(vector<int>c,int r){
	for(int i=0;i<r;i++){
		if(c[i]==c[r]){
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int gg;
		cin>>gg;
		a.push_back(gg);
	}
	int start=0;
	while(start<n){
		vector<int>c;
		for(int i=start;i<n;i++){
			c.push_back(a[i]);
		}
//		cout<<endl<<"c:";
//		for(int i=0;i<c.size();i++){
//			cout<<c[i]<<" ";
//		}
		for(int i=0;i<c.size();i++){
			int post=find(c,i);
			if(post!=-1){
//				cout<<endl<<endl<<start<<" "<<post<<" "<<i<<endl;
//				cout<<"fwe";
				for(;post<i;){
					c.erase(c.begin()+post);
					i--;
				}
			}
		}
//		cout<<endl<<"c:";
		for(int i=0;i<c.size();i++){
//			cout<<c[i]<<" ";
			b[c[i]]++;
		}
		start++;
	}
//	cout<<endl<<"gg:";
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}