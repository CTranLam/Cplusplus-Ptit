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
		string getma(){
			return mgv;
		}
};
int GiangVien::cnt=1;
bool cmp(GiangVien a,GiangVien b){
	string s1=a.getten(),s2=b.getten();
	stringstream ss1(s1),ss2(s2);
	string t;
	vector<string> v1,v2;
	while(ss1 >> t){
		v1.push_back(t);
	}
	while(ss2 >> t){
		v2.push_back(t);
	}
	if(v1.back() != v2.back()) return v1.back() < v2.back();
	else{
		return a.getma() < b.getma();
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
	sort(a,a+n,cmp);
	for(int i=0 ; i<n ; i++){
		cout << a[i] <<endl;
	}
}
