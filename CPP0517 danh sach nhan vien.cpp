#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct NhanVien{
	string mnv;
	string ten,gt,ns,dc,mst,hd;
};
int cnt=1;
int ok=1;
void nhap(NhanVien &a){
	a.mnv=to_string(cnt);
	while(a.mnv.size() < 5){
		a.mnv="0"+a.mnv;
	}
	++cnt;
	if(ok){
		cin.ignore();
		ok=0;
	}
	getline(cin,a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>> a.mst >> a.hd;
	cin.ignore();
}
void inds(NhanVien a[],int n){
	for(int i=0 ; i<n ; i++){
		cout << a[i].mnv <<" "<<a[i].ten <<" "<<a[i].gt <<" "<<a[i].ns<<" "<<a[i].dc <<" "<<a[i].mst<<" "<<a[i].hd<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
