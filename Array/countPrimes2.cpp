#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int arr[N];

int main(){
    int n;

    cin>>n;
 //prime no. generation using sieve of eratothons
		vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
                cout<<"mamun"<<endl;
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
				    cout<<"munira"<<j<<endl;
					prime[j] = false;
				}
			}
		}
		//counting prime numbers
		int primeCount = 0;
		for (int i = 2; i < n; i++) {
			if (prime[i]) {
				primeCount++;
			}
		}
		;

    cout<<primeCount<<endl;
}

