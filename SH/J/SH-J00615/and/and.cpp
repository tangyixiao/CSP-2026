#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int zyxissb_n,zyxissb_m;
	int zyxissb_a[200001]={}; 
	//I LOVE EATING STEAMED FISH 
	//I LOVE EATING STEAMED MAGIKARP 
	//I LOVE EATING STEAMED POKEMON
	cin>>zyxissb_n>>zyxissb_m;
	for(int i=1;i<=zyxissb_n;i++){		
		cin>>zyxissb_a[i];
	}
	if(zyxissb_n<=20){
		int zyxissb_f[21][21]={};
		for(int i=1;i<=zyxissb_n;i++){
			zyxissb_f[i][1]=zyxissb_a[i];
		}
		for(int i=2;i<=zyxissb_m;i++){
			for(int j=i;j<=zyxissb_n;j++){
				zyxissb_f[j][i]=0;
				for(int k=1;k<=j-1;k++){
					zyxissb_f[j][i]=max(zyxissb_f[j][i],zyxissb_f[k][i-1]&zyxissb_a[j]);
				}
			}
		}
		int ans=0;
		for(int i=zyxissb_m;i<=zyxissb_n;i++){
			ans=max(ans,zyxissb_f[i][zyxissb_m]);
		}
		cout<<ans<<endl;
	}
	else if(zyxissb_m==1){
		sort(zyxissb_a+1,zyxissb_a+1+zyxissb_n);
		cout<<zyxissb_a[zyxissb_n]<<endl;
	}
	//let ME SEE...WHAT ARE MY FAVORITE POKEMON....
	//GARDEVOIR IS THE FIFTH(IS IT GARDEVOIR OR GARDEVIOR?)
	//GLITCHES ARE THE FORTH
	//THE THIRD IS SANDSHREW
	//THE SECOND IS MEWTWO
	//THE FIRST IS MAGIKARP
	//I CAN GO THROUGH VIRDRIAN CITY'S GYM USING 4 LV.100 MAGIKARP,1 lv.7 BULDASAUR,1 LV.97 DITTO
	//That badge is easy
	else if(zyxissb_m==2){
		int ans=0;
		for(int i=1;i<=zyxissb_n;i++){
			for(int j=i+1;j<=zyxissb_n;j++){
				ans=max(ans,zyxissb_a[i]&zyxissb_a[j]);
			}
		} 
		cout<<ans;
	}//PIKACHU IS DELICIOUS
	//ROASTED BULDASAUR TOO
	//STIR-FRIED BLASTOISE
	else if(zyxissb_m==zyxissb_n){
		int k=2147483647;
		for(int i=1;i<=zyxissb_n;i++)k&=zyxissb_a[i];
		cout<<k<<endl;
	}
	//-ZYX-is-eating-a-chewing-gum--------
	//EKANS,ARBOK,COFFING,WEEZING,PERSIAN,MEOWTH ARE DELICIOUS
	//DONT KNOW WHAT MEW,ARCEUS AND ESPEON TASTE LIKE
	//I THINK EVERY POKEMON IN HEARTGOLD/SOULSILVER IS DELICIOUS 
	//FIRERED/LEAFGREEN TOO
	//TOO MAKE SURE YOUR POKEMON IS YUMMY,USE A HYPER POTION(RECOVER 200 HP)WHEN IT LOST 2HP
	//USING PKHeX TO GET A MEWTWO IN AN EGG IN FIRERED/LEAFGREEN,YOU WILL GOT.....
	//AN EGG,AND.....
	//A ????????(NOT MEWTWO)WHEN IT HATCHED!
	else{
		int maxa=0;
		for(int i=1;i<=zyxissb_n;i++){
			maxa=max(maxa,zyxissb_a[i]);
		}
		if(maxa<4){
			int cnt1=0,cnt2=0,cnt3=0;
			for(int i=1;i<=zyxissb_n;i++){
				if(zyxissb_a[i]==1)cnt1++;
				if(zyxissb_a[i]==2)cnt2++;
				if(zyxissb_a[i]==3)cnt3++;
			}
			if(cnt3>=zyxissb_m)cout<<3<<endl;
			else if(cnt3+cnt2>=zyxissb_m)cout<<2<<endl;
			else cout<<0<<endl;
		}
		else{
			sort(zyxissb_a+1,zyxissb_a+1+zyxissb_n);
			cout<<zyxissb_a[zyxissb_n-zyxissb_m+1]<<endl;
		}
	}
	return 0;
}
