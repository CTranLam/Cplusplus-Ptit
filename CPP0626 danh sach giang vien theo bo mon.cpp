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
		string getnganh(){
			return nganh;
		}
};
string rg(string tmp){
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
	return res;
}
int GiangVien::cnt=1;
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
		cout << "DANH SACH GIANG VIEN BO MON " <<rg(s) <<":" <<endl;
		for(int i=0 ; i<n ; i++){
			if(rg(a[i].getnganh())==rg(s)){
				cout << a[i] <<endl;
			}
		}
	}
}
