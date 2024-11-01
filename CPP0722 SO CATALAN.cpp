#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string cong(string a, string b){
	int len=max(a.size(),b.size());
	while(a.size() < len){
		a="0"+a;
	}
	while(b.size() < len){
		b="0"+b;
	}
	//cout << a <<" "<<b <<endl;
	string ans="";
	int nho=0;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0 ; i<a.size() ; i++){
		int tmp=a[i]-'0'+b[i]-'0' +nho;
		if(tmp >= 9){
			nho+=1;
			tmp-=10;
		}
		else{
			nho=0;
		}
		ans=to_string(tmp)+ans;
	}
	if(nho != 0) ans=to_string(nho)+ans;
	return ans;
}
string nhan(string s1,string s2){
	int len1=s1.size();
	int len2=s2.size();
	int len=len1+len2;
	vector<int> a,b;
	for(int i=0 ; i<len1 ; i++){
		a.push_back(s1[i]-'0');
	}
	for(int i=0 ; i<len2 ; i++){
		b.push_back(s2[i]-'0');
	}
	vector<vector<int>> res(len2);
	int index=0;
	for(int i=len2-1 ; i>=0 ; i--){
		int t=0;
		while(t < index){
			res[index].push_back(0);
			t++;
		}
		int nho=0,so=0;
		for(int j=len1-1 ; j>=0 ; j--){
			so=a[j]*b[i] + nho;
			res[index].push_back(so%10);
			nho=so/10;
		}
		if(nho>0) res[index].push_back(nho);
		while(res[index].size() < len){
			res[index].push_back(0);
		}
		reverse(res[index].begin(),res[index].end());
		index++;
	}
	int nho=0;
	string ans="";
	for(int j=res[0].size()-1 ; j>=0 ; j--){
		int so=nho;
		for(int i=0 ; i<res.size() ; i++){
			so+=res[i][j];
		}
		ans=char(so%10+'0') + ans;
		nho=so/10;
	}
	if(nho > 0) ans=char(nho+'0')+ans;
	while(ans[0]=='0') ans.erase(ans.begin());
	return ans;
}
int main(){
	int n;
	cin >> n;
	string c[5005];
	c[0]="1";
	c[1]="1";
	for(int i=2 ; i<=n+1 ; i++){
		for(int j=0 ; j<i ; j++){
			string tmp="";
			tmp=nhan(c[j],c[i-j-1]);
			cout << c[i] <<" "<<tmp <<endl;
			if(c[i] != " ") c[i]=cong(c[i],tmp);
			else c[i]=tmp;
		}
	}
	for(int i=0 ; i<=n+1 ; i++){
		cout << c[i] <<endl;
	}
}
