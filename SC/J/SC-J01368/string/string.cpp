#include<bits/stdc++.h>
using namespace std;
//struct E{
//	int a;
//	char c;
//};
char a[10000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	//输入
	int n,ans=0;
	cin>>n;
	if(n==1){
		cout<<"0"<<endl;
		return 0;
	}
	int x,cnt=0;
	char m;
	for(int i=1;i<=n;i++){
		//cout<<n<<' '<<114514<<endl;
		cin>>x>>m;
		for(int i=1;i<=x;i++){
			cnt++;
			a[cnt]=m;
		}
	}
	
	int l=1,r=cnt;
//	cout<<cnt<<endl;
	for(int i=cnt;i>cnt/2;i--){
//		cout<<i<<' '<<a[l]<<' '<<a[r]<<' '<<ans<<endl;		
		if(a[l]!=a[r]){
			ans++;
			l++;
			r--;			
		}
		else{
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}