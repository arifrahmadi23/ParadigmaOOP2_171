#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSakalarNo(int i) {
		return saklarNo[i];
	}
};