#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct jc{
	long long num;
	char cha;
	long long l,r;
}a[200010],b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].cha;
		b[n-i+1].num=a[i].num;
		b[n-i+1].cha=a[i].cha;
	}
	for(int i=1;i<=n;i++){
		a[i].l=a[i-1].r+1;
		a[i].r=a[i-1].r+a[i].num;
		b[i].l=b[i-1].r+1;
		b[i].r=b[i-1].r+b[i].num;
//		cout<<a[i].num<<' '<<a[i].cha<<' '<<a[i].l<<' '<<a[i].r<<endl;
//		cout<<b[i].num<<' '<<b[i].cha<<' '<<b[i].l<<' '<<b[i].r<<endl<<endl;
	}
	long long siz=a[n].r/2;
	long long ai=1,bi=1;
	while(ai<=n&&bi<=n){
		if(a[ai].cha!=b[bi].cha){
			if(a[ai].l<=b[bi].l&&a[ai].r>=b[bi].r){
				ans+=b[bi].num;
			}
			else if(a[ai].l>=b[bi].l&&a[ai].r<=b[bi].r){
				ans+=a[ai].num;
			}
			else if(a[ai].l>=b[bi].l&&a[ai].r>=b[bi].r){
				ans+=b[bi].r-a[ai].l+1;
			}
			else if(a[ai].l<=b[bi].l&&a[ai].r<=b[bi].r){
				ans+=a[ai].r-b[bi].l+1;
			}
		}
		if(a[ai].r<b[bi].r){
			ai++;
		} 
		else if(a[ai].r==b[bi].r){
			ai++;
			bi++;
		}
		else{
			bi++;
		}
	}
	cout<<ans/2;
	return 0;
}
//【茈】发动的41秒前 
//新宿再次响起了五条悟的吟唱 
//【九纲】【偏光】【乌与声明】【表里之间】
//当【苍】和【赫】在空中交汇的那一刻 
//宿傩知道自己再也无力阻止【茈】的诞生了 
//也就是说 
//是五条悟赢了 