#include<bits/stdc++.h>
using namespace std;
long long nownum1,nownum2,now=1,mid,summ,ans,qzh1[210000],n,num[210000],lett[210000];
char c;
int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>c;
		lett[i]=(c-'a'+1);
		qzh1[i]=qzh1[i-1]+num[i];
		summ+=num[i];
	}
	for(int i=1;i<=n;i++){
		if(qzh1[i]*2>=summ){
			mid=i;
			break;
		}
	}
	for(int i=n;i>=mid;i--){
		nownum1+=num[i];
		long long idk=num[i];//我不知道咋取变量名了
		while(idk>=qzh1[now]-nownum2){
//			cout<<i<<' '<<now<<endl;
			if(i==mid&&now==mid)break;
			if(now>mid)break;
			if(lett[now]!=lett[i]){
				ans+=qzh1[now]-nownum2;
//				cout<<"ans+一长串"<<qzh1[now]-nownum2<<endl;
			}
			idk-=qzh1[now]-nownum2;
			now++;
			nownum2=qzh1[now-1];
		}
		if(i==mid&&now==mid)break;
		if(now>mid)break;
		if(lett[now]!=lett[i]){
			ans+=idk;
//			cout<<"ans+idk"<<idk<<endl;
		}
		nownum2+=idk;
	}
	cout<<ans;
    return 0;
}
/*
    This file is encoded by UTF-8
    用类前缀和?
	定义qzh[i][j]为第i段前有几个不是字符j的(j为a1z26)
	 自定样例:
	 3a 5b 7c 6a;
	 3+5+7+6=21
	 第11个字符是中间的,在第3段 
	qzh 1    2    3
	1	0	 3	  3
	2	5	 3	  8
	3	12	 10   8
	4   12	 16	  14
	第四段：6
	6>3 ans+=qzh[1][a]
	6<8 
	b!=a
	ans+=(6-3);
	第三段:7(13),被截断变成10
	10>8 b!=c ans+=(8-6)
	10<15 都到了第三段 break
	检查: 3+2=5 对
	1a 5e 3b
	 
    9:36 qzh2根本没用！
    10:02做完了，大样例4过了，估计能AC，没有我就要没了
	感谢大样例让我在11:54检查出了要long long
*/
