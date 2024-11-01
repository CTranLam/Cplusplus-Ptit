#include <bits/stdc++.h> 
using namespace std; 
struct SinhVien{ 
	string ten, lop; int dd, mm, yy, msv; 	
	double gpa; 
}; 
void chuanhoa(string &s){ 
	s[0] = toupper(s[0]); 	
	for (int i = 1; i < s.length(); i++) s[i] = tolower(s[i]); 
} 
void nhap(SinhVien a[], int n){ 
	for (int i = 0; i < n; i++){ 
		a[i].msv = i + 1; cin.ignore(); 	
		getline(cin, a[i].ten); 
		cin >> a[i].lop; 
		char set; 
		cin >> a[i].dd >> set >> a[i].mm >> set >> a[i].yy; 
		cin >> a[i].gpa; 
	} 
} 
bool cmp(SinhVien a, SinhVien b){ 
	return a.gpa > b.gpa; 
} 
void sapxep(SinhVien a[], int n){ 
	sort(a, a + n, cmp); 
} 
void in(SinhVien a[], int n){ 
	for (int i = 0; i < n; i++){ 	
		vector<string> v; 
		stringstream ss(a[i].ten); 
		string tmp; 
		while (ss >> tmp) v.push_back(tmp); 
		for (int i = 0; i < v.size(); i++) chuanhoa(v[i]); 	
		cout << "B20DCCN" << setw(3) << setfill('0') << a[i].msv << " "; 
		for (int i = 0; i < v.size(); i++) cout << v[i] << " "; 
			cout << a[i].lop << " "; 
			cout << setw(2) << setfill('0') << a[i].dd << "/" << setw(2) << setfill('0') << a[i].mm << "/" << a[i].yy << " "; 
			cout << fixed << setprecision(2) << a[i].gpa << endl; 
		} 
	} 
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

