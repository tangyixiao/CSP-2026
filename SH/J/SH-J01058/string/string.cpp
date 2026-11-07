#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
#define ll long long
string s;
ll n,mat[maxn][2],mat2[maxn][2],m=0,m2=0;
ll ans=0;
ll chache[maxn],chache2[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll x; char a; cin>>x>>a; 
		int word=a-'a'+1;
		if(word==mat[m][1]){
			mat[m][0]+=x;
		}else{
			m++;
			mat[m][0]=x;
			mat[m][1]=word;
		}
	}
	for(ll i=1;i<=m;i++) chache[i]=chache[i-1]+mat[i][0];
	ll L=chache[m];
	
	//cout<<L<<endl;
	
	ll sum=0;
	while(chache[sum]<L/2) sum++;
	
	//cout<<sum<<endl;
	
	ll change=mat[sum][0]-(L/2-chache[sum-1]);
	
	//cout<<change<<endl;	
	
	mat[sum][0]=L/2-chache[sum-1];
	
	//cout<<mat[sum][0]<<endl;
	
	chache[sum]=L/2;
	for(int i=m;i>sum;i--){
		m2++;
		mat2[m2][0]=mat[i][0];
		mat2[m2][1]=mat[i][1];
	}
	m=sum; m2++;
	mat2[m2][0]=change; mat2[m2][1]=mat[m][1];
	for(ll i=1;i<=m2;i++) chache2[i]=chache2[i-1]+mat2[i][0];
	if(chache2[m2]>L/2){
		mat2[m2][0]--; chache2[m2]--;
	}
	if(mat[m][0]<=0) m--;
	if(mat2[m2][0]<=0) m2--;
	
	/*for(ll i=1;i<=m;i++) cout<<mat[i][0]<<" "<<mat[i][1]<<" "<<chache[i]<<endl;
	cout<<endl;
	for(ll i=1;i<=m2;i++) cout<<mat2[i][0]<<" "<<mat2[i][1]<<" "<<chache2[i]<<endl;
	cout<<endl;*/
	
	 ll now=1,now2=1,nownum=0,nownxt=0;
	while(now<=m && now2<=m2){
		if(chache[now]<chache2[now2]){
			if(mat[now][1]!=mat2[now2][1]){
				ans+=(chache[now]-nownum);
				//cout<<chache[now]<<" "<<nownum<<endl;
			}
			nownum=chache[now];  //cout<<114<<endl;
			now++;
		}else if(chache[now]>chache2[now2]){
			if(mat[now][1]!=mat2[now2][1]){
				ans+=(chache2[now2]-nownum);
				//cout<<chache2[now2]<<" "<<nownum<<endl;		  
			}
			nownum=chache2[now2];
			now2++; //cout<<51<<endl;
		}else if(chache[now]==chache2[now2]){
			if(mat[now][1]!=mat2[now2][1]){
				ans+=(chache2[now2]-nownum);
				//cout<<chache2[now2]<<" "<<nownum<<endl;
			}
			nownum=chache2[now2]; now2++; 
			now++; //cout<<4<<endl;
		}
		//cout<<chache[now]<<" "<<chache2[now2]<<" "<<ans<<endl;
		
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
