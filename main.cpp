#include "SerialUtil.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	SerialUtil* su = new SerialUtil();
	string str;

	while (SerialUtil::SP->IsConnected()) {
		getline(cin, str);

		su->write(str);
	}
	
	return 0;
}
