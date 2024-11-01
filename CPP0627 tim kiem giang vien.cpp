#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class GiangVien{
	private:
		string mgv,ten,nganh;
		int static cnt;
	public:
		friend istream& operator >> (istream& in,GiangVien& x){
			x.mgv="GV";
			if(cnt <=9){
				x.mgv+="0"+to_string(cnt);
			}
			else{
				x.mgv+=to_string(cnt);
			}
			++cnt;
			getline(in,x.ten);
			getline(in,x.nganh);
			return in;
		}
		friend ostream& operator << (ostream& out, GiangVien& x){
			string tmp=x.nganh;
			for(int i=0 ; i<tmp.size() ; i++){
				if(isalpha(tmp[i])) tmp[i]=toupper(tmp[i]);
			}
			stringstream ss(tmp);
			string s;
			vector<string> v;
			while(ss >> s){
				v.push_back(s);
			}
			string res="";
			for(auto x : v){
				res+=x[0];
			}
			out << x.mgv <<" "<<x.ten<<" "<<res <<endl;
			return out;
		}
		string getten(){
			return ten;
		}
};
int GiangVien::cnt=1;
void lower(string &s){
	for(int i=0 ;i<s.size() ; i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " <<s <<":" <<endl;
		for(int i=0 ; i<n ; i++){
			string tmp=a[i].getten();
			lower(tmp);
			lower(s);
			if(tmp.find(s) != string::npos){
				cout << a[i] <<endl;
			}
		}
	}
}
