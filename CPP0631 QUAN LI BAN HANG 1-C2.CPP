#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cntkh=1,cntmh=1,cnthd=1;
class KhachHang;
class MatHang;
class HoaDon;
map<string,KhachHang> KH;
map<string,MatHang> MH;
class KhachHang{
    private:
        string mkh,tkh,gt,ns,dc;
    public:
        friend istream& operator >> (istream& in, KhachHang& a){
            if(cntkh < 10) a.mkh="KH00" + to_string(cntkh++);
            else a.mkh="KH0" + to_string(cntkh++);
            getline(in  >> ws,a.tkh); // in >> ws se bo qua moi khoang trang o dau luong nhap
            getline(in ,a.gt);
            getline(in ,a.ns);
            getline(in ,a.dc);
            KH[a.mkh] = a;
            return in;
        }
        friend class HoaDon;
        string getdc(){
            return dc;
        }
        string getten(){
            return tkh;
        }
};
class MatHang{
    private:
        string mmh,tmh,dv;
        int mua,ban;
    public:
        friend istream& operator >> (istream& in, MatHang& a){
            if(cntmh < 10) a.mmh="MH00" + to_string(cntmh);
            else a.mmh="MH0" + to_string(cntmh);
            ++cntmh;
            getline(in >> ws,a.tmh);
            getline(in,a.dv);
            in >> a.mua >> a.ban;
            MH[a.mmh] = a;
            return in;
        }
        friend class HoaDon;
        string getmh(){
            return tmh;
        }
        string getdv(){
            return dv;
        }
        int getmua(){
            return mua;
        }
        int getban(){
            return ban;
        }

};
class HoaDon{
    private:
        string mhd,mkh,mmh;
        int sl;
    public:
        friend istream& operator >> (istream& in,HoaDon& a){
            if(cnthd < 10) a.mhd="HD00" + to_string(cnthd);
            else a.mhd="HD0" +to_string(cnthd);
            ++cnthd;
            in >>a.mkh >> a.mmh >> a.sl;
            return in;
        }
        friend ostream& operator << (ostream& out , HoaDon a){
            out << a.mhd <<" ";
            out << KH[a.mkh].getten() <<" "<<KH[a.mkh].getdc() <<" ";
            out << MH[a.mmh].getmh() <<" "<< MH[a.mmh].getdv() <<" "<<MH[a.mmh].getmua() <<" "<<MH[a.mmh].getban() <<" ";
            out << a.sl <<" "<< (ll)a.sl *(MH[a.mmh].getban()) <<endl;
            return out;
        }
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}