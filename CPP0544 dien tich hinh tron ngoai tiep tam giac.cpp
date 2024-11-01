
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI 3.141592653589793238
struct Data{
	double x,y;
};
double kc(Data a,Data b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}
int main(){
	int n;
	cin >> n;
	while(n--){
		Data a,b,c;
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		double ab,ac,bc;
		ab=kc(a,b);
		ac=kc(a,c);
		bc=kc(b,c);
		//cout << ab <<" "<<ac <<" "<<bc<<endl;
		if(ac+ab > bc && ab+bc > ac && ac+bc > ab){
			double p=(ab + ac + bc)/2;
			double s=sqrt(p*(p-ab)*(p-ac)*(p-bc));
			double r=(ab*ac*bc)/(4*s);
			cout << fixed << setprecision(3) << PI*r*r <<endl;
		}
		else{
			cout << "INVALID\n";
		}
	}
}