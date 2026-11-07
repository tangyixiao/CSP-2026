#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1) cout<<n<<'\n';
	else{
		int count = n;
		int start = 1;
		while(count--){
			int pos1,pos2,pos3,pos4;
			int flag1=1,flag2=1;
			for(int i=n;i>=start;i--){
				if(a[i]==1 && flag1) pos2=i,flag1=0;
				if(a[i]==2 && flag2) pos4=i,flag2=0;
				if(a[i]==1 && !flag1) pos1 = i;
				if(a[i]==2 && !flag2) pos3 = i;
			}
			cout<<pos1<<" "<<pos2<<" "<<pos3<<" "<<pos4<<'\n';
			for(int i=start;i<=n;i++){
				if((i>=pos1 && i<=pos2-1) || (i>=pos3 && i<=pos4-1)) continue;
				cnt[a[i]]++;
			}
			start++;
		}
		cout<<cnt[1]<<" "<<cnt[2]<<'\n';
	}
	return 0;
} 
