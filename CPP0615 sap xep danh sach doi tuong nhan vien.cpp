#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class NhanVien{
	private:
		string mnv,ten,gt,ns,dc,mst,hd;
		int static cnt;
	public:
		friend istream& operator >>  (istream& in, NhanVien& x){
			if(cnt==1) in.ignore();
			x.mnv=to_string(cnt);
			++cnt;
			while(x.mnv.size() < 5){
				x.mnv="0"+x.mnv;
			}
			getline(in,x.ten);getline(in,x.gt);
			getline(in,x.ns);
			getline(in,x.dc);getline(in,x.mst);
			getline(in,x.hd);
			return in;
		}
		friend ostream& operator << (ostream& out,NhanVien& x){
			out<< x.mnv <<" "<<x.ten <<" "<<x.gt<<" "<<x.ns <<" "<<x.dc<<" "<<x.mst<<" "<<x.hd<<endl;
			return out;
		}
		string getns(){
			return ns;
		}
};
int NhanVien::cnt=1;
bool cmp(NhanVien a,NhanVien b){
	string s1=a.getns();
	string s2=b.getns();
	for(int i=0 ; i<s1.size() ; i++){
		if(s1[i]=='/') s1[i]=' ';
		if(s2[i]=='/') s2[i]=' ';
	}
	stringstream ss(s1);
	string t1;
	vector<string> v1;
	while(ss >> t1){
		v1.push_back(t1);
	}
	stringstream ss2(s2);
	string t2;
	vector<string> v2;
	while(ss2 >> t2){
		v2.push_back(t2);
	}
	if(v1[2] != v2[2]) return v1[2] < v2[2];
	else if(v1[2]==v2[2]){
		if(v1[0] != v2[0]) return v1[0] < v2[0];
		else return v1[1] < v2[1];
	}
} 
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
