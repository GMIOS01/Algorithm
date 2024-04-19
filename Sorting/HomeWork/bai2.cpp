#include<iostream>
#include<string>

//y tuong dung mang danh dau

int mark[26];

using namespace std;

int main(){
	string a="zxcvbnmlkjhgfdsapoiuytrewq";

	for(int i=0;i<(int)a.size();i++){
		mark[a[i]-'a']++;
	}
	int temp=a.size()-1;
	for(int j='z';j>='a';j--){
		while(mark[j-'a']>0){
			a[temp--]=j;
			mark[j-'a']--;
		}
	}
	cout <<a<< endl;
	return 0;
}