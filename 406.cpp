#include<iostream>
using namespace std;
#include<string>
void count(string s, int counts[]={0}) {
	int len = s.size();
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == j + 65 || s[i] == j + 97)
				counts[j]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if(counts[i]!=0){
			cout << char(i + 97) << ":" << counts[i] << " times" << endl;
		}
		
	}
}
int main(){
	int counts[26] = {0};
	string s; 
	getline(cin, s);
	count(s, counts);
	return 0;
}