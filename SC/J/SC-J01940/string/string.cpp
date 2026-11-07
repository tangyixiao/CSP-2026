#include<bits/stdc++.h>
using namespace std;
long long a[1000200];
char c[1000200];
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	int n;
	cin>>n;
	long long l=0,r=-1,ans=0;
	for(long long  i=0;i<n;i++){
		cin>>a[i]>>c[i];
		r++;
	}

///	for(int i=0;i<n;i++){
//		cout<<a[i]<<' '<<c[i]<<endl; 
//	}
	while(l<=r){
		if(a[l]>=a[r]){//左边的长度>=右边的长度 
//			cout<<'e'<<' ';
			if(c[l]!=c[r]){//不相等 
				ans+=a[r];
//				cout<<ans;
			}
			a[l]-=a[r];
			r--;
			if(a[l]==0){
				l++;
			}
		}else if(a[l]<a[r]){//左边的长度<右边的长度 
//			cout<<'r'<<' ';
			if(c[l]!=c[r]){//不相等 
				ans+=a[l];
			}
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}



