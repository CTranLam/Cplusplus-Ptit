#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct NhanVien{
	string mnv,ten,gt,ns,dc,mst,hd;
};
int stt=1;
void nhap(NhanVien &a){
	cin.ignore();
	string tmp=to_string(stt);
	++stt;
	while(tmp.size() < 5){
		tmp="0"+tmp;
	}
	a.mnv=tmp;
	getline(cin,a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.mst >> a.hd;
}
bool cmp(NhanVien a,NhanVien b){
	string s1=a.ns,s2=b.ns;
	for(int i=0 ; i<s1.size() ; i++){
		if(s1[i]=='/') s1[i]=' ';
		if(s2[i]=='/') s2[i]=' ';
	}
	stringstream ss1(s1);
	string t1;
	vector<string> v1;
	while(ss1 >> t1){
		v1.push_back(t1);
	}
	stringstream ss2(s2);
	string t2;
	vector<string> v2;
	while(ss2 >> t2){
		v2.push_back(t2);
	}
	reverse(v1.begin(),v1.end());
	reverse(v2.begin(),v2.end());
	if(v1[0] != v2[0]) return v1[0] < v2[0];
	else if(v1[0]== v2[0]){
		if(v1[2] != v2[2]) return v1[2] < v2[2];
		else return v1[1] < v2[1];
	}
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}
void inds(NhanVien a[],int n){
	for(int i=0 ; i<n ; i++){
		cout << a[i].mnv <<" "<<a[i].ten <<" "<< a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc <<" "<<a[i].mst<<" "<<a[i].hd <<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
