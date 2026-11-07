#include<bits/stdc++.h>
using namespace std;
int er[35]={0,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a,b,c;
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		int l=0;
		while(er[l]<=z) l++;
		if(er[l-1]==z) b.push_back(z);
		else a.push_back(z);
	}
	sort(a.begin(),a.end(),greater<int>());
	sort(b.begin(),b.end());
	if(a.size()>=m){
		int ans=a[0];
		for(int i=1;i<m;i++) ans=(ans&a[i]);
	    cout<<ans;
	}
	else{
	    int r=a[a.size()-1],js=0;
		for(int i=b.size()-1;i>=0;i--){
			if(b[i]<r){
				c.push_back(b[i]);
				js++;
			}
			if(js==(m-a.size())) break;
		}
		int ans=a[0];
		for(int i=1;i<a.size();i++) ans=(ans&a[i]);
		for(int i=0;i<c.size();i++) ans=(ans&c[i]);
		cout<<ans;
	}
	return 0;
} 