#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Time{
	int gio,phut,giay;
};
void nhap(Time &a){
	cin >> a.gio >> a.phut >> a.giay;
}
bool cmp(Time a, Time b){
	if(a.gio != b.gio) return a.gio < b.gio;
	else if(a.gio==b.gio){
		if(a.phut != b.phut) return a.phut < b.phut;
		else return a.giay < b.giay;
	}
}
int main(){
	int n;
	cin >> n;
	Time a[n+1];
	for(int i=0 ; i<n ; i++){
		nhap(a[i]);
	}
	sort(a,a+n,cmp);
	for(int i=0 ; i<n ; i++){
		cout << a[i].gio <<" "<<a[i].phut<<" "<<a[i].giay<<endl;
	}
}
