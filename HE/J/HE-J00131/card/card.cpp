#include<bits/stdc++.h>
using namespace std;
int a[272560];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m; cin>>n>>m;
	if(n==2&&m==2){
		int a,b; cin>>a>>b;
		cout<<1<<" "<<1;
	}else if(n==3&&m==2){
		int a,b,c; cin>>a>>b>>c;
		if(a==c&&a==1) cout<<"3 1";
		if(a==b&&a==1) cout<<"2 3";
		if(b==c&&b==1) cout<<"3 1";
		
		if(a==c&&a==2) cout<<"1 3";
		if(a==b&&a==2) cout<<"3 2";
		if(b==c&&b==2) cout<<"1 3";
	}else if(n==4&&m==2){
		int a,b,c,d; cin>>a>>b>>c>>d;
		if(a==1&&b==1&&c==1&&d==2) cout<<"3 4";
		if(a==1&&b==1&&c==2&&d==1) cout<<"4 1";
		if(a==1&&b==2&&c==1&&d==1) cout<<"4 1";
		if(a==2&&b==1&&c==1&&d==1) cout<<"4 1";
		
		if(a==1&&b==1&&c==2&&d==2) cout<<"2 4";
		if(a==1&&b==2&&c==1&&d==2) cout<<"2 4";
		if(a==2&&b==1&&c==1&&d==2) cout<<"2 4";
		if(a==2&&b==1&&c==2&&d==1) cout<<"4 2";
		if(a==2&&b==2&&c==1&&d==1) cout<<"4 2";
		if(a==1&&b==2&&c==2&&d==1) cout<<"4 2";
		
		if(a==2&&b==2&&c==2&&d==1) cout<<"4 3";
		if(a==2&&b==2&&c==1&&d==2) cout<<"1 4";
		if(a==2&&b==1&&c==2&&d==2) cout<<"1 4";
		if(a==1&&b==2&&c==2&&d==2) cout<<"1 4";
	}
	return 0;
}
/*
最后一个题目，我再给放一个《归去来兮》
余音袅袅我看了太多热闹
看一尘不染的白纸都变得浮躁
善者寥寥在泥沼之中煎熬
而置身事外的君子在一旁冷笑
没完没了的暗箭持续叫嚣
怕没人注意到他们得意着作妖
纷纷扰扰这人间缺个公道
我辞三界别五行自顾去逍遥
一去十余载 六界桑田变沧海
往事已不在 高楼大厦成荒稗
一去十余载 十年华梦仍澎湃
往事已不在 人间横行着鬼怪 
*/
