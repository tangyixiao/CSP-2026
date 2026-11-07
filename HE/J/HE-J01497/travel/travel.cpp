#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin >> r1 >> r2 >> x1 >> x2;
	if(r1 == x1){
		cout << 1;
		if((r2=="01A" && x2=="01B") || (r2=="01B" && (x2=="01A" || x2=="01C"))) cout << 111;
		else if((r2=="01C" && x2=="01B")) cout << 111;
		else if((r2=="01D" && x2=="01F")) cout << 111;
		else if((r2=="01F" && x2=="01D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ1ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="02A" && x2=="02B") || (r2=="02B" && (x2=="02A" || x2=="02C"))) cout << 111;
		else if((r2=="02C" && x2=="02B")) cout << 111;
		else if((r2=="02D" && x2=="02F")) cout << 111;
		else if((r2=="02F" && x2=="02D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ2ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="03A" && x2=="03B") || (r2=="03B" && (x2=="03A" || x2=="03C"))) cout << 111;
		else if((r2=="03C" && x2=="03B")) cout << 111;
		else if((r2=="03D" && x2=="03F")) cout << 111;
		else if((r2=="03F" && x2=="03D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ3ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="04A" && x2=="04B") || (r2=="04B" && (x2=="04A" || x2=="04C"))) cout << 111;
		else if((r2=="04C" && x2=="04B")) cout << 111;
		else if((r2=="04D" && x2=="04F")) cout << 111;
		else if((r2=="04F" && x2=="04D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ4ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="05A" && x2=="02B") || (r2=="05B" && (x2=="05A" || x2=="025"))) cout << 111; 
		else if((r2=="05C" && x2=="05B")) cout << 111;
		else if((r2=="05D" && x2=="05F")) cout << 111;
		else if((r2=="05F" && x2=="05D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ5ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="06A" && x2=="06B") || (r2=="06B" && (x2=="06A" || x2=="06C"))) cout << 111;
		else if((r2=="06C" && x2=="06B")) cout << 111;
		else if((r2=="06D" && x2=="06F")) cout << 111;
		else if((r2=="06F" && x2=="06D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ6ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="07A" && x2=="07B") || (r2=="07B" && (x2=="07A" || x2=="07C"))) cout << 111;
		else if((r2=="07C" && x2=="07B")) cout << 111;
		else if((r2=="07D" && x2=="07F")) cout << 111;
		else if((r2=="07F" && x2=="07D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ7ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="08A" && x2=="08B") || (r2=="08B" && (x2=="08A" || x2=="08C"))) cout << 111;
		else if((r2=="08C" && x2=="08B")) cout << 111;
		else if((r2=="08D" && x2=="08F")) cout << 111;
		else if((r2=="08F" && x2=="08D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ8ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="09A" && x2=="09B") || (r2=="09B" && (x2=="09A" || x2=="09C"))) cout << 111;
		else if((r2=="09C" && x2=="09B")) cout << 111;
		else if((r2=="09D" && x2=="09F")) cout << 111;
		else if((r2=="09F" && x2=="09D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ9ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="10A" && x2=="10B") || (r2=="10B" && (x2=="10A" || x2=="10C"))) cout << 111;
		else if((r2=="10C" && x2=="10B")) cout << 111;
		else if((r2=="10D" && x2=="10F")) cout << 111;
		else if((r2=="10F" && x2=="10D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ10ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="11A" && x2=="11B") || (r2=="11B" && (x2=="11A" || x2=="11C"))) cout << 111;
		else if((r2=="11C" && x2=="11B")) cout << 111;
		else if((r2=="11D" && x2=="11F")) cout << 111;
		else if((r2=="11F" && x2=="11D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ11ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="12A" && x2=="12B") || (r2=="12B" && (x2=="12A" || x2=="12C"))) cout << 111;
		else if((r2=="12C" && x2=="12B")) cout << 111;
		else if((r2=="12D" && x2=="12F")) cout << 111;
		else if((r2=="12F" && x2=="12D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ12ÅÅÊÇ·ñÏàÁÚ 
		if((r2=="13A" && x2=="13B") || (r2=="13B" && (x2=="13A" || x2=="13C"))) cout << 111;
		else if((r2=="13C" && x2=="13B")) cout << 111;
		else if((r2=="13D" && x2=="13F")) cout << 111;
		else if((r2=="13F" && x2=="13D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ13ÅÅÊÇ·ñÏàÁÚ
		if((r2=="14A" && x2=="14B") || (r2=="14B" && (x2=="14A" || x2=="14C"))) cout << 111;
		else if((r2=="14C" && x2=="14B")) cout << 111;
		else if((r2=="14D" && x2=="14F")) cout << 111;
		else if((r2=="14F" && x2=="14D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ14ÅÅÊÇ·ñÏàÁÚ
		if((r2=="15A" && x2=="15B") || (r2=="15B" && (x2=="15A" || x2=="15C"))) cout << 111;
		else if((r2=="15C" && x2=="15B")) cout << 111;
		else if((r2=="15D" && x2=="15F")) cout << 111;
		else if((r2=="15F" && x2=="15D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ15ÅÅÊÇ·ñÏàÁÚ
		if((r2=="16A" && x2=="16B") || (r2=="16B" && (x2=="16A" || x2=="16C"))) cout << 111;
		else if((r2=="16C" && x2=="16B")) cout << 111;
		else if((r2=="16D" && x2=="16F")) cout << 111;
		else if((r2=="16F" && x2=="16D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ16ÅÅÊÇ·ñÏàÁÚ
		if((r2=="17A" && x2=="17B") || (r2=="17B" && (x2=="17A" || x2=="17C"))) cout << 111;
		else if((r2=="17C" && x2=="17B")) cout << 111;
		else if((r2=="17D" && x2=="17F")) cout << 111;
		else if((r2=="17F" && x2=="17D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ17ÅÅÊÇ·ñÏàÁÚ
		if((r2=="18A" && x2=="18B") || (r2=="18B" && (x2=="18A" || x2=="18C"))) cout << 111;
		else if((r2=="18C" && x2=="18B")) cout << 111;
		else if((r2=="18D" && x2=="18F")) cout << 111;
		else if((r2=="18F" && x2=="18D")) cout << 111;
		else cout << 000;
		return 0;
		//ÅÐ¶ÏµÚ18ÅÅÊÇ·ñÏàÁÚ
		
	}
	return 0;
} 
