#include <iostream>;
#include <string>;
#include <vector>;

using namespace std; 

int main() {
	vector <string> words;
	string word;
	int n;
	cin >> n;
	while (n) {
		cin >> word;
		if (word.length() > 10) 
			word = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
		words.push_back(word);
		n--;
	}
	for (int i = 0; i < words.size(); i++) 
		cout << words[i] << endl;
	return 0;
}