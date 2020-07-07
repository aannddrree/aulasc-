#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int>v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	//A unica coisa q muda é o auto:
	for(auto it=v.begin();it!=v.end();it++){
		cout << *it << endl;
	}
	
	return 0;
}
