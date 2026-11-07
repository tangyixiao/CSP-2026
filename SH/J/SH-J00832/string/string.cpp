#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long ans=0;
	long long cnt=1,cnt2=n,cnt3=a[1],cnt4=a[n];//cnt代表判断到第i个,cnt2代表对应到第cnt2个 ,cnt3代表a[cnt2]还剩cnt3个 
	while(true){
	//	cout<<cnt<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<endl;
		if(cnt>=cnt2){
			break;
		}
		if(cnt3==cnt4){
			if(b[cnt]==b[cnt2]){
				cnt++;
				cnt2--;
				cnt3=a[cnt];
				cnt4=a[cnt2];
				continue;
			}else{
				ans+=cnt3;
				cnt++;
				cnt2--;
				cnt3=a[cnt];
				cnt4=a[cnt2];
				continue;
			}
		}
		else if(cnt3>cnt4){
			if(b[cnt]==b[cnt2]){
				cnt3-=cnt4;
				cnt2--;
				cnt4=a[cnt2];
				continue;
			}else{
				ans+=cnt4;
				cnt3-=cnt4;
				cnt2--;
				cnt4=a[cnt2];
				continue;
			}
		}else{
			if(b[cnt]==b[cnt2]){
				cnt4-=cnt3;
				cnt++;
				cnt3=a[cnt];
				continue;
			}else{
				ans+=cnt3;
				cnt4-=cnt3;
				cnt++;
				cnt3=a[cnt];
				continue;
			}
		}
	}
	cout<<ans;
	return 0;
}
