#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);
#include <string>
#include <fstream>
#include < stdio.h.>
#include <cstring>

//Task 2
std::string isPalidrome(std::string S) {
	for (int i = 0; i < S.size() / 2; i++) {
		if (S[i] != S[S.size() - i - 1]) {
			return "False";
		}		
	}
	return "True";
}
//Task 3
int isThinks(std::string str) {
		int count = 0;
		for (int i = 0; i < str.size(); i++)
			if(str[i] ==' '|| str[i] == '.'|| str[i] == ','|| str[i] == '!'|| str[i] == '?')
			count++;
		return count;	
	}
//Task 4
std::string Substr(std::string &Str,char sym) {
	//std::string ret_Str;	
	//if (Str.rfind(sym))
		return	Str.substr(sym);
}




int main() {
	setlocale(LC_ALL, "Rus");

	int n = 0;

	////Task 1
	//std::string str = "Hello world!";
	//char sym ='o';	
	//std::string res;
	//for (int i = 0; i < str.length(); i++)
	//	if (str[i] == sym)
	//		res += sym;
	//std::cout << res << std::endl;

	//Task 2	
	/*std::string word_str = std::to_string(n);
	std::cout << "Enter the word->";
	std::getline(std::cin, word_str);
	for (int i = 0; i < word_str.length(); i++)
		word_str[i] = std::tolower(word_str[i]);
	std::cout << isPalidrome(word_str);
	std::cout << std::endl;*/

	//Task 3
	/*std::string w_str = std::to_string(n);
	std::cout << "Enter the word->";
	std::getline(std::cin, w_str);	
	std::cout << isThinks(w_str);*/

	//Task 4
	std::string text_str = std::to_string(n);
	std::cout << "Enter the text-> ";
	std::getline(std::cin, text_str);
	char sym;
	std::cout << "Enter the symbol-> ";
	std::cin >> sym;
	std::cout << Substr(text_str,sym);

	return 0;
}