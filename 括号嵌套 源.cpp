#include <iostream>
#include <vector>
using namespace std;

string match(string a) {
	int length = a.length();
	int leftCount = 0;
	int rightCount = 0;
	for (int i = 1; i < length - 1; i++) {
		if (a[i] == '(') {
			leftCount++;
		}
		else if (a[i] == ')') {
			rightCount++;
		}
	}
	if (leftCount != rightCount)
		return "FALSE";
	else
		return "TRUE";
}


string judge(string a) {
	int length = a.length();
	if (length % 2 != 0) {
		return "FALSE";
	}
	else if(a[0] != '(' || a[length - 1] != ')'){
		return "FALSE";
	}
	else {
		return match(a);
	}
}



int main() {
	int N = 0;
	while (cin >> N) {
		vector<string> charStr(N);
		for (int i = 0; i < N; i++) {
			cin >> charStr[i];
		}
		for (int i = 0; i < N; i++) {
			string result=judge(charStr[i]);
			cout << result << endl;
		}
	}
}