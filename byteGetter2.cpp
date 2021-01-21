#include <iostream>
#include <vector>

using namespace std;
vector<int> hexToBytes(int hex, int numBytes) {
	
	for (int a = 0; a < numBytes; a++) {
		int byteGetter = 0XFF << (a * 8);
		int byte;
		byte = (byteGetter & hex);
		 byte  = byte >> a * 8;
		ans.push_back(byte);
	}
			return (ans);

																//DON'T YOU LOVE CODING?????
}
	

int main() {
	int hex = 0XC9F3, numBytes = 2;
	vector<int> ans = hexToBytes(hex, numBytes);
	for (int a = 0; a <= ans.size(); a++)
		cout << hex << ans[a] << std::endl;
		
	return 1;
}

