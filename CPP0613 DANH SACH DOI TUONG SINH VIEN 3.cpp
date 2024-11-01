#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		double gpa;
		int static cnt;
	public:
		void chuanhoa(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
		}
		void fix_ten(){
			for(int i=0 ; i<ten.size() ; i++){
				if(isalpha(ten[i])){
					ten[i]=tolower(ten[i]);
				}
			}
			stringstream ss(ten);
			string s;
			vector<string> v;
			while(ss >> s){
				v.push_back(s);
			}
			string res="";
			for(string x : v){
				x[0]=toupper(x[0]);
				res+=x+" ";
			}
			ten=res;
		}
		friend istream& operator >> (istream& in ,SinhVien& x){
			scanf("\n");
			string tmp=to_string(cnt);
			if(cnt <= 9){
				tmp="B20DCCN00"+tmp;
			}
			else{
				tmp="B20DCCN0"+tmp;
			}
			++cnt;
			x.msv=tmp;
			getline(in,x.ten);
			getline(in,x.lop);
			getline(in,x.ns);
			in >> x.gpa;
			x.chuanhoa();
			x.fix_ten();
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien &x){
			out << x.msv<<" "<<x.ten <<" "<<x.lop <<" "<<x.ns<<" "<<fixed <<setprecision(2) << x.gpa <<endl;
			return out;
		}
		double getgpa(){
			return gpa;
		}
};
int SinhVien::cnt=1;// khoi tao gia tri cho bien static
bool cmp(SinhVien a,SinhVien b){
	return a.getgpa() > b.getgpa();
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
