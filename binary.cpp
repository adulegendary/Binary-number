#include<iostream>
#include<cmath>


#include<vector>
using namespace std;




int main(){
	int sum=0;
	int count = 0;
	int n;
	int result=1,div=0;
	int max = INT_MIN;
	cout << "put your number" << endl;
	cin >> n;
	while (n > 0) {
		div = div + (n % 2) * result;
		n = n / 2;
		result = result * 10;
		if(div==1){
			max = min(max, div);
			sum++;

		}
		else {
			if (sum >0) {
				count = 0;
			}
		}

		//cout << sum; << endl;
	}
	cout << sum<< endl;
	return 0;
}