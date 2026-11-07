#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	b.resize(m);
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		a.push_back(w);
	}
	int max1=1;
	for(int i=0;i<a.size()-1;i++){
		for(int j=i+1;j<a.size();j++){
			if(a[i]&a[j]>max1){
				max1=(a[i]&a[j]);
				b[0]=i;
				b[1]=j;
			}
		}
	}
	if(m==2){
		cout<<max1;
		return 0;
	}
	int b1=2;
	for(int i=1;i<n;i++){
		for(int j=0;j<b1;j++){
			if(i==b[j]){
				a.erase(a.begin()+i);
			}
		}
	}
	m-=2;
	while(m--){
		int flag=0,flag1=max1;
		flag1=(max1&a[0]);
		for(int i=1;i<a.size();i++){
			for(int j=0;j<b1;j++){
				if(i==b[j]){
					flag=1;
					break;
				}
			}
			if(((max1&a[i])>flag1) &&(flag==0)){
				flag1=max1&a[i];
				b[b1+1]=i;
			}
		}
		max1=flag1;
		for(int i=1;i<a.size();i++){
			if(i==b[b1+1]){
				a.erase(a.begin()+i);
			}
		}
	}
	cout<<max1;
	return 0;

}
