#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void max_digit(int m,int s){
	string res="";
	while(s>=9){
		res+="9";
		m--;
		s-=9;
	}
	while(m != 0){
		res+=s+'0';
		s=0;
		m--;
	}
	cout << res;
}
void min_digit(int m,int s){
	string res="";
	m--;
	s--;
	while(s>=9){
		res="9"+res;
		s-=9;
		m--;
	}
	while(m != 0){
		res=to_string(s)+res;
		m--;
		s=0;
	}
	s+=1;
	res=to_string(s)+res;
	cout << res<<" " ;
}
int main(){
	int m,s; cin >> m >> s;
	// co m chu so va tong bang s
	if(9*m < s || (m > 1 && s==0)){
		cout << -1 <<" "<<-1<< endl;
		return 0;
	}
	min_digit(m,s);
	max_digit(m,s);
}
