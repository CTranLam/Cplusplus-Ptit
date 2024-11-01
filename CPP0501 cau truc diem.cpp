#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct point{
	double x,y;
};
void input(point &a){
	cin>> a.x >> a.y;
}
double distance(point a,point b){
	double ans=sqrt(pow(abs(a.x-b.x),2) + pow(abs(a.y-b.y),2));
	//cout << ans << endl;
	return ans;
}
int main(){
    struct point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
