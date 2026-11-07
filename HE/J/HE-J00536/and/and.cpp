#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
typedef unsigned long long ull;
ull a[maxn];
string b[maxn];
int n,m;
ull ans;
const ull base=12;
string f[maxn][3]; //2E5开不了二维qwq，不太会滚动数组 
int pre[maxn][32];
ull anss=0;
ull ansss=0;
bool boss[40];
ull unnn[35][maxn],unnnn[maxn][3];
ull cnt=0;
ull ejz[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};//不是我算的，拿程序写的 
bool cmp(int x,int y){
	return x>=y;
}
void init(int x){
	memset(unnnn,0,x+2);
}
string awy(int x,int y){
	string s="";
	for(int i=0;i<=30;i++){
		if(b[x][i]==b[y][i]) s+=b[y][i];
		else s+='0';
	}
	return s;
}
void zejz(int x,int abcd){
	string s;
	for(int i=30;i>=0;i--){
		if(x>=ejz[i]){
			s+='1';
			x-=ejz[i];
		} 
		else s+='0';
	}
	b[abcd]=s;
	f[abcd][1]=s;
	return ; //保持良好代码习惯（虽然不多） 
}
int ef(int x,int y){
	int l=1,r=unnn[y][0];
	while(l+1<r){
		int mid=(l+r)>>1;
		if(unnn[y][mid]==x) return mid;
		else if(unnn[y][mid]>x) r=mid;
		else l=mid;
	}
	return unnn[y][l]==x?l:-1;
}
//void hy(string s){
//	for(int i=0;i<=30;i++){
//		if(s[i]=='1') anss+=ejz[i];
//	}
//	cout<<anss;
//	return ;
//}
//去年按位异或忘了异或符号qwq，按位与应该会了 
//其实也不会 
//好像又会了，试试  10：50 
//打个广告，steam上冰与火之舞特别好玩 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 	
	 }
	 sort(a+1,a+n+1,cmp);
	 if(a[m]==a[1]){
	 	cout<<a[1];
	 	return 0;
	 }
	 for(int i=1;i<=n;i++){
	 	zejz(a[i],i);
	 	for(int j=0;j<=30;j++){
	 		pre[i][j]=pre[i-1][j]+(b[i][j]=='1');
	 		if(b[i][j]=='1') unnn[j][++unnn[j][0]]=i;
	 		
		 }
	 }
	 for(int i=30;i>=0;i--){
	 	if(pre[m][i]==m){
	 		ans=ans+ejz[30-i];
	 		boss[i]=true;
//	 		cout<<i<<endl;
		 }
	 }
	 for(int i=0;i<=30;i++){
	 	if(unnn[i][0]>=m){
	 		ansss=ejz[30-i];
	 		cnt=i;
	 		break;
		 }
	 }
//	 for(int i=cnt+1;i<=30;i++){
//	 	if(unnn[i][0]>=m){
//	 		ull rp=0;
//	 		for(int j=1;j<=unnn[i][0];j++){
//	 			if(ef(unnn[cnt][j],i)!=-1){
//	 				unnnn[++unnnn[0]]=unnn[cnt][i];
//	 				rp++;
//				 }
//			 }
//			 if(rp>=m){
//			 	ansss+=ejz[30-i];
//			 	cnt=i;
//			 } 
//		 }
//	 }
//	 for(int i=2;i<=n-m;i++){
//	 	for(int i=30;i>=1;i--){
//	 		if(pre[i+m][i]-pre[i-1][i]==m){
//	 			ansss+=ejz[30-i];
//			 }
//			 else{
//			 	if(boss[i]){
//			 		cout<<ans;
//			 		return 0;
//				 }
//			 }
//		 }
//		 ans=max(ans,ansss);
//	 }
	 cout<<ans<<endl;
//	 cout<<awy(1,5);
//	 for(int i=1;i<=m;i++){
//	 	ans=
//	 }
//	 for(int i=1,i<=m;i++){
//	 	int idx=i%2;
//	 	for(int i=1;i<=n;i++){
//	 		f[i][idx]=max()
//		 }
//	 } 
	return 0;
} 
