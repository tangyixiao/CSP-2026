#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+500;
//struct Node{
//	int x;char y;
//}a[MAXN];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,sum=0;cin >> n;
	string s;
	for(int i=1;i<=n;i++){
		int a;char b;
		cin >> a >> b;
		sum+=a;
		for(int i=1;i<=a;i++){
			s+=b;
		}
	}
//	int h=0, mm=0;
//	while(mm<=sum/2){
//		h++;
//		mm += a[h].x;
//	}h --,mm-=a[h].x;
//	int ans=0;
////	cout << h << '\n';
////	for(int i=1,j=n;i<=h,j>=h+1;){
////		cout << i  << " " << j <<" "<< a[i].x<<" "<<a[j].x<<'\n';
////		if(a[i].y==a[j].y){
////			a[i].x-=min(a[i].x,a[j].x);
////			a[j].x-=min(a[i].x,a[j].x);
////			cout << "O11K" << a[i].x<<" "<< a[j].x<<'\n';
////		}else{
////			ans+=min(a[i].x,a[j].x);
////			a[i].x-=min(a[i].x,a[j].x);
////			a[j].x-=min(a[i].x,a[j].x);
////			cout << "NO" << a[i].x<<" "<< a[j].x<<'\n';
////		}
////		if(a[i].x==0) i++;
////		if(a[j].x==0) j--;
////		
////	}
//	int l=0,r=n;
//	while(a[h+1].x>0){
//		if(l>h){
//			break;
//		}
//		if(r<h+1){
//			break;
//		}
//		if(a[l].y!=a[r].y){
//			ans+=min(a[l].x,a[r].x);
//		}
//		a[l].x-=min(a[l].x,a[r].x);
//		a[r].x-=min(a[l].x,a[r].x);
//		if(a[l].x==0)l++;
//		if(a[r].x==0)r--;
//	}
//	cout << ans;
	int ans=0;
	for(int i=0,j=sum-1;i<=sum/2-1,j>=sum-1-sum/2;i++,j--){
		if(s[i]!=s[j]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
/*
3
2 a
2 b
1 c

6
2 a
2 b
5 c
1 a
1 c
2 a

*/