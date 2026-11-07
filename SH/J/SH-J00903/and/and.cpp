#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	/*
	for(int i=0;i<=30;i++){
		for(int j=0;j<=30;j++){
			cout<<i<<"&"<<j<<"="<<(i&j)<<"\n"; 
			//cout<<j<<"&"<<i<<"="<<(j&i)<<"\n"; 
		}
	}*/
	int n,m;
	long long t=0;
	cin>>n>>m;
	vector<ull> a(n+2);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//cout<<a[i]<<endl;
	}
	if(m==1){
		//sort(a.begin,a.end(),1);
		for(int i=1;i<a.size();i++){
			for(int j=1;j<a.size()-1;j++){
				if(a[j]<a[i])swap(a[j],a[i]);
			}
		}
		cout<<a[1]; 
	}else{
		for(int i=1;i<a.size();i++){
			for(int j=1;j<a.size()-1;j++){
				if(a[j]<a[i])swap(a[j],a[i]);
			}
		}/*
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<endl; 
		}*/
		t=a[1];
		//cout<<t;
		//cout<<a[2];
		for(int i=2;i<=m;i++){
			/*
			if((t&a[i])<t){
				m++;
				continue;
			}
			else{
				t&=a[i];
				//cout<<i<<endl;
			}
			*/
			//cout<<a[i]<<endl; 
			//cout<<(a[1]&a[2]);
			t&=a[i];
		} 
	}
	cout<<t;
	return 0;
}

