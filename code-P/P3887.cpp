#include <bits/stdc++.h>
#define endl '\n'
//#define int long long

using namespace std;
using i64 = long long;
const int inf = 0x3f3f3f3f;

int main(){
	int kn,dn,mn,fn;
	scanf("%d %d %d %d",&kn,&dn,&mn,&fn);

	priority_queue<int> k,d,m,f;
	int x;
	for(int i = 0;i < kn;i++){
		scanf("%d",&x);
		k.push(x);
	}
	for(int i = 0;i < dn;i++){
		scanf("%d",&x);
		d.push(x);
	}
	for(int i = 0;i < mn;i++){
		scanf("%d",&x);
		m.push(x);
	}
	for(int i = 0;i < fn;i++){
		scanf("%d",&x);
		f.push(x);
	}

	int n;
	cin >> n;

	while(n--){
		double valve = 0;
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);

		valve += k.top();
		k.pop();

		for(int i = 0;i < a;i++){
			valve += d.top();
			d.pop();
		}
		for(int i = 0;i < b;i++){
			valve += m.top();
			m.pop();
		}
		for(int i = 0;i < c;i++){
			valve += f.top();
			f.pop();
		}

		valve /= 11;
		printf("%.2lf\n",valve);
	}

	return 0;
}