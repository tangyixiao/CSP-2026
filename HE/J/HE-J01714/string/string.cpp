#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
unsigned long long l,ans;
int zzz=0,yzz;
string s;
char c;
long long m[26]={0};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);


	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		m[c-'a']+=a;
		l+=a;
}
	
	yzz=25;

		while(zzz!=yzz){
		
		

	if(m[zzz]>0&&m[yzz]>0&&(zzz!=yzz)){
			ans++;
			m[zzz]--;
			m[yzz]--;
//			cout<<ans<<' '<<zzz<<' '<<yzz;
		
	}
	else if(m[zzz]<=0){
			zzz++;
		}
	else if(m[yzz]<=0){
			yzz--;
		}
	}
	cout<<ans;
//}
	return 0;
} 
