#include <bits/stdc++.h> 
using namespace std; 
int IDKH = 1, IDMH = 1, IDHD = 1; 
class KhachHang; 
class MatHang; 
class HoaDon; 
// lam cach truy van thong thuong
map<string, KhachHang>KH; 
map<string, MatHang>MH; 
class KhachHang{ 
    private: 
        string id, ten, gt, ns, dc; 
    public: 
        // lop ban cho phep truy cap private cua class
        friend class HoaDon;
        friend istream& operator >> (istream&in, KhachHang &a){ 
            if (IDKH < 10) a.id = "KH00" + to_string(IDKH++); 
            else a.id = "KH0" + to_string(IDKH++); 
            getline(in >> ws, a.ten); 
            getline(in, a.gt); getline(in, a.ns); 
            getline(in, a.dc); 
            KH[a.id] = a; 
            return in; 
        } 
        string getTenKH(){ 
            return ten; 
        } 
        string getDiaChi(){ 
            return dc; 
        } 
}; 
class MatHang{ 
    private:    
        string id, ten, donvi; 
        int giaban, giamua; 
        public: 
            friend class HoaDon;
            friend istream& operator >> (istream&in, MatHang &a){ 
                if (IDMH < 10) a.id = "MH00" + to_string(IDMH++); 
                else a.id = "MH0" + to_string(IDMH++); 
                getline(in >> ws, a.ten); 
                getline(in, a.donvi); 
                in >> a.giamua >> a.giaban; 
                MH[a.id] = a; 
                return in; 
            } 
            int getGiaBan(){ 
                return giaban; 
            } 
            int getGiaMua(){    
                return giamua; 
            } 
            string getTenMH(){ 
                return ten; 
            } 
            string getDonVi(){ 
                return donvi; 
            } 
}; 
class HoaDon{ 
    private: 
        string makh, mamh, id; 
        int soluong; 
    public: 
        friend istream& operator >> (istream&in, HoaDon &a){ 
            if (IDHD < 10) a.id = "HD00" + to_string(IDHD++); 
            else a.id = "HD0" + to_string(IDHD++); 
            in >> a.makh >> a.mamh >> a.soluong; 
            return in; 
        } 
        friend ostream& operator << (ostream&out, HoaDon a){ 
            out << a.id << " "; 
            out << KH[a.makh].getTenKH() << " " << KH[a.makh].getDiaChi() << " "; 
            out << MH[a.mamh].getTenMH() << " " << MH[a.mamh].getDonVi() << " " ;
            out<< MH[a.mamh].getGiaMua() << " " << MH[a.mamh].getGiaBan() << " "; 
            out << a.soluong << " " << 1ll * MH[a.mamh].getGiaBan() * a.soluong << endl; 
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