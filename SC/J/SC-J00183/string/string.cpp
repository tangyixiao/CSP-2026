#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+1];
	char b[n+1];
	vector<char> v;
	v.push_back('0');
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			v.push_back(b[i]);
			v.push_back('0');
		}
	}
//	for(int i=0;i<v.size();i++) cout<<v[i];
	int cnt[v.size()];
	memset(cnt,0,sizeof(cnt));
	for(int mid=1;mid<v.size()-1;mid++){
		int l=mid,r=mid;
//		cout<<"A "; 
		while(true){
			l-=1;r+=1;
			if(l<0 && r<v.size()){
//				cout<<"LB ";
				cnt[mid]=1000000000;
				break;
			}else if(l>=0 && r>=v.size()){
//				cout<<"RB ";
				cnt[mid]=1000000000;
				break;
			}else if(l<0 && r>=v.size()){
				break;
			}
			if(v[l]!=v[r]){
				cnt[mid]++;
			}
		}
	}
	int ans=1000000000;
	for(int i=1;i<v.size()-1;i++){
		ans=min(ans,cnt[i]);
	}
//	for(int i=1;i<v.size()-1;i++){
//		cout<<v[i]<<" ";
//	}cout<<endl;
//	for(int i=1;i<v.size()-1;i++){
//		cout<<cnt[i]<<" ";
//	}cout<<endl;
	cout<<ans;
	return 0;
}