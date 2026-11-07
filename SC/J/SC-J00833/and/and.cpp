#include <bits/stdc++.h>
using namespace std;

struct str{
	int num;
	int And;
};
bool cmp(str a,str b){
	if(a.And==b.And) return a.num>b.num;
	return a.And>b.And;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	int n,m;
	cin>>n>>m;
	str a[n+10],temp[n+10];
	for(int i=0;i<n;i++){
		cin>>a[i].num;
	}
	int t=1073741824;
	for(int i=0;i<30;i++){
		for(int j=0;j<n;j++){
			a[j].And=max(a[j].And,a[j].num&t);
		}
		t/=2;
	}
	sort(a,a+n,cmp);
	
	
	
	/*for(int i=0;i<n;i++){
		cout<<a[i].And<<" ";
	}cout<<endl;	
	for(int i=0;i<n;i++){
		cout<<a[i].num<<" ";
	}cout<<endl;*/
	int ans=a[0].num;
	for(int i=0;i<m;i++){
		ans=ans&a[i].num;
	}
	cout<<ans;
	
	return 0;
}