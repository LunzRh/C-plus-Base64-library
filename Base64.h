#include <bitset>
#include <string>

using namespace std;

namespace Base64{
	const char base64_alphabet[64] = {
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
		'R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h',
		'i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y',
		'z','0','1','2','3','4','5','6','7','8','9','+','/'
	};

	string binary {};
	string result {};

	int bin_size {};
	int txt_size {};
	int pad {};
		
	string encode(string text){
		
		txt_size = text.size();
		
		// str to bin
		for (int i = 0; i < txt_size; i++)
			binary += bitset<8>(text[i]).to_string();
		
		// Increment zero in binary
		while (binary.size() % 6){
			binary += "0";
			pad++;
		}
		
		// Calculates array size
		bin_size = binary.size() / 6;
		string binary_array[bin_size];
		
		// Encode
		for (int j = 0; j < bin_size; j++){
			for (int k = 0; k < 6; k++)
				binary_array[j] += binary[k + j * 6];
			result += base64_alphabet[stoi(binary_array[j], nullptr, 2)];
		}
		
		// Add padding
		for (int l = 0; l < pad / 2; l++)
			result += "=";
		
		return result;
	}
	
	string decode(string text){
		
		txt_size = text.size();
		
		// Int to bin
		for (int i = 0; i < txt_size; i++){
			for (int j = 0; j < 64; j++){
				if (text[i] == base64_alphabet[j])
					binary += bitset<6>(j).to_string();
			}
		}
		
		bin_size = binary.size() / 8;
		string binary_array[bin_size];
		
		// Decode
		for (int k = 0; k < bin_size; k++){
			for (int l = 0; l < 8; l++)
				binary_array[k] += binary[l + k * 8];
			result += (char)stoi(binary_array[k], nullptr, 2);
		}
		
		return result;
	}
}
