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
};
int NhanVien::cnt=1; 
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

