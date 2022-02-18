#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[100],s2[100];
	int x,freqS1[128]={0},freqS2[128]={0};
	cin >> s1 >> s2 >> x;
	for(int i=0; i<strlen(s1); i++)
	freqS1[s1[i]]++;
	for(int i=0; i<strlen(s2); i++)
	freqS2[s2[i]]++;
	
	for(int i=0; i<128; i++){
		if(freqS1[i]*x > freqS2[i]){
		cout << "NO";
		exit(0);
	}
	}
	cout << "YES";
	
}
