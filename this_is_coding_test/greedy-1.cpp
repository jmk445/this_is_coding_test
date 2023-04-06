#include<iostream>

using namespace std;

int N;
int main() {
	cin >> N;
	int coins[] = { 500, 100, 50, 10 };
	int count = 0;
	for (int i = 0; i < 4; i++) {
		count += N / coins[i];
		N = N % coins[i];
	}
	//hello world
	//do you see this?
	cout << count;
}