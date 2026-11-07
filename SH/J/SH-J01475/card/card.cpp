#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a,b;
int c[300011]={0};
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	sort(b.begin()+1,b.begin()+n+1);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(b[j]==b[i]){
				b.erase(b.begin()+j,b.begin()+j+1);
			}
			if(b[j]>b[i])break;
		}
	}
	while(a.size()>0){
		for(int i=0;i<a.size();i++){
			for(int j=0;j<i;j++){
				if(a[j]==a[i]){
					a.erase(a.begin()+j,a.begin()+j+1);
				}
			}
		}
		for(int i=0;i<a.size();i++){
			for(int j=0;j<b.size();j++){
				if(a[i]==b[j]){
					c[a[i]-1]+=1;
					break;
				}
			}
		}
	}
	for(int i=0;i<=b[b.size()-1]-1;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
