#include<bits/stdc++.h>
using namespace std;
struct zhi{
	long long l;
	char c;
};
zhi cl[600010],rl[600010];
long long c_n,r_n;
long long n;
long long ln;
long long fg[600010],f_n;
bool ae1(long long a,long long b){
	return a<b;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long l;
		char c;
		cin>>l>>c;
		ln+=l;
		if(c_n>=1&&cl[c_n].c==c){
			cl[c_n].l+=l;
		}else{
			cl[++c_n].c=c;
			cl[c_n].l=l;
		}
	}
	
	if(c_n==1){
		cout<<"0";
		return 0;
	}
	for(long long i=1;i<=c_n;i++){
		cl[i].l+=cl[i-1].l;
		fg[++f_n]=cl[i].l;
		fg[++f_n]=ln-cl[i].l;
	}	
	sort(fg+1,fg+1+f_n,ae1);
	
	long long cnt=1;
	for(long long i=2;i<=f_n;i++){
		r_n++;
		if(cnt<c_n&&cl[cnt].l<fg[i]) cnt++;
		rl[r_n].c=cl[cnt].c;
		rl[r_n].l=fg[i]-fg[i-1];
	}
	long long an=0;
	for(long long i=1;i*2<=r_n;i++){
		if(rl[i].c!=rl[r_n-i+1].c)  an+=rl[i].l;
	}
	cout<<an<<endl;
	return 0;
}
