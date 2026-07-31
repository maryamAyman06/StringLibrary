#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cctype> 
using namespace std;

class clsString
{
private:
	string  _Value;
public:
	clsString() {
		_Value = "";
	}

	clsString(string Value) {
		_Value = Value;
	}

	void SetValue(string Value) {
		_Value = Value;
	}

	string GetValue() {
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	static short Length(string S1) {
		return S1.length();
	}

	short Length() {
		return Length(_Value);
	}

	static void PrintFirstLetterOfEachWord(string S1) {

		bool isFirstLetter = true;
		for (int i = 0; i < S1.length(); i++) {

			if (S1[i] != ' ' && isFirstLetter)
				cout << S1[i] << " - ";

			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		cout << endl;
	}

	void PrintFirstLetterOfEachWord() {
		PrintFirstLetterOfEachWord(_Value);
	}

	static string UpperFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		for (int i = 0; i < S1.length(); i++) {
			if (S1[i] != ' ' && isFirstLetter)
				S1[i] = toupper(S1[i]);
			isFirstLetter = (S1[i] == ' ') ? true : false;
		}
		return S1;
	}

	void UpperFirstLetterOfEachWord() {
		_Value = UpperFirstLetterOfEachWord(_Value);
	}

	static string LowerFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		for (int i = 0; i < S1.length(); i++) {
			if (S1[i] != ' ' && isFirstLetter)
				S1[i] = tolower(S1[i]);
			isFirstLetter = (S1[i] == ' ') ? true : false;
		}
		return S1;
	}

	void LowerFirstLetterOfEachWord() {
		_Value =  LowerFirstLetterOfEachWord(_Value);
	}

	static string UpperAllString(string S1) {
		for (int i = 0; i < S1.length(); i++) {
			S1[i] = toupper(S1[i]);
		}
		return S1;
	}

	void UpperAllString() {
		_Value =  UpperAllString(_Value);
	}

	static string LowerAllString(string S1) {
		for (int i = 0; i < S1.length(); i++) {
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}

	void LowerAllString() {
		_Value =  LowerAllString(_Value);
	}

	static char InvertLetterCase(char C) {
		return isupper(C) ? tolower(C) : toupper(C);
	}

	static string InvertAllStringLetterCase(string S) {
		for (int i = 0; i < S.length(); i++) {
			S[i] = InvertLetterCase(S[i]);
		}
		return S;
	}

	void InvertAllStringLetterCase() {
		_Value = InvertAllStringLetterCase(_Value);
	}

	static int CapitalLetterCount(string S) {
		int CapitalCounter = 0;
		for (int i = 0; i < S.length(); i++) {
			if (isupper(S[i]))
				CapitalCounter++;
		}
		return CapitalCounter;
	}

	int CapitalLetterCount() {
		return CapitalLetterCount(_Value);
	}

	static int SmallLetterCount(string S) {
		int SmallCounter = 0;
		for (int i = 0; i < S.length(); i++)
			if (islower(S[i]))
				SmallCounter++;
		return SmallCounter;
	}

	int SmallLetterCount() {
		return SmallLetterCount(_Value);
	}

	enum enCharType { SmallLetter = 0, CapitalLetter = 1, All = 2 };

	static int CountLetters(string S, enCharType cType = enCharType::All) {
		int Counter = 0;

		if (cType == enCharType::All)
			return S.length();

		for (int i = 0; i < S.length(); i++) {
			if (cType == enCharType::CapitalLetter && isupper(S[i]))
				Counter++;
		}

		for (int i = 0; i < S.length(); i++) {
			if (cType == enCharType::SmallLetter && islower(S[i]))
				Counter++;
		}

		return Counter;
	}

	int CountLetters(enCharType cType = enCharType::All) {
		return CountLetters(_Value, cType);
	}

	static int CountSpecificLetter(string s, char c, bool isMatchy = true) {
		int Counter = 0;
		for (int i = 0; i < s.length(); i++) {
			if (isMatchy) {
				if (tolower(s[i]) == tolower(c))
					Counter++;
			}
			else {
				if (s[i] == c)
					Counter++;
			}
		}
		return Counter;
	}

	int CountSpecificLetter(char c, bool isMatchy = true) {
		return CountSpecificLetter(_Value, c, isMatchy);
	}

	static bool isVowel(char c) {
		c = tolower(c);
		return (c == 'a' || c == 'u' || c == 'o' || c == 'e' || c == 'i');
	}

	static int CountVowels(string s) {
		int Counter = 0;
		for (int i = 0; i < s.length(); i++) {
			if (isVowel(s[i]))
				Counter++;
		}
		return Counter;
	}

	int CountVowels() {
		return CountVowels(_Value);
	}

	static void PrintVowel(string s) {
		for (int i = 0; i < s.length(); i++) {
			if (isVowel(s[i]))
				cout << s[i] << "  ";
		}
	}

	void PrintVowel() {
		PrintVowel(_Value);
	}

	static void PrintEachWord(string s) {
		int pos = 0;
		string delim = " ";
		string sstring;
		while ((pos = s.find(delim)) != std::string::npos) {
			sstring = s.substr(0, pos);
			if (sstring != "")
				cout << sstring << endl;
			s.erase(0, pos + delim.length());
		}
		if (s != " ") {
			cout << s << endl;
		}
	}

	void PrintEachWord() {
		PrintEachWord(_Value);
	}

	static int CountNumberOfWordsInString(string s) {
		int Counter = 0;
		int pos = 0;
		string delim = " ";
		string sWord;
		while ((pos = s.find(delim)) != std::string::npos) {
			sWord = s.substr(0, pos);
			if (sWord != "")
				Counter++;
			s.erase(0, (pos + delim.length()));
		}
		if (s != "")
			Counter++;
		return Counter;
	}

	int CountNumberOfWordsInString() {
		return CountNumberOfWordsInString(_Value);
	}

	static vector <string> split(string s, string delimiter) {
		vector <string> splitString;
		int pos = 0;
		string sWord;
		while ((pos = s.find(delimiter)) != std::string::npos) {
			sWord = s.substr(0, pos);
			if (sWord != "") {
				splitString.push_back(sWord);
			}
			s.erase(0, (pos + delimiter.length()));
		}
		if (s != "") {
			splitString.push_back(s);
		}
		return splitString;
	}

	vector <string> split(string delimiter) {
		return split(_Value, delimiter);
	}

	static string TrimLeft(string s) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != ' ') {
				return s.substr(i, (s.length() - i));
			}
		}
		return "";
	}

	string TrimLeft() {
		return TrimLeft(_Value);
	}

	static string TrimRight(string s) {
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] != ' ') {
				return s.substr(0, i + 1);
			}
		}
		return "";
	}

	string TrimRight() {
		return TrimRight(_Value);
	}

	static string Trim(string s) {
		return TrimLeft(TrimRight(s));
	}

	string Trim() {
		return Trim(_Value);
	}

	static string Join(vector <string> vJoin, string Separator) {
		if (vJoin.empty())
			return "";

		string sWord = vJoin[0];
		for (int i = 1; i < vJoin.size(); i++) {
			sWord += Separator + vJoin[i];
		}
		return sWord;
	}

	static string join(string array[], int Length, string separator) {
		string sWord = array[0];
		for (int i = 1; i < Length; i++) {
			sWord = sWord + separator + array[i];
		}
		return sWord;
	}

	static string ReverseWordsInString(string S1) {
		string S2 = "";

		vector <string> vString = split(S1, " ");

		vector <string>::iterator iter = vString.end();

		while (iter != vString.begin()) {
			--iter;
			S2 = S2 + *iter + " ";
		}

		S2 = S2.substr(0, S2.length() - 1);
		return S2;
	}

	void ReverseWordsInString() {
		_Value =  ReverseWordsInString(_Value);
	}

	static string Replace(string s, string From, string To) {
		int pos = s.find(From);
		while (pos != std::string::npos) {
			s.replace(pos, From.length(), To);
			pos = s.find(From);
		}
		return s;
	}

	string Replace(string From, string To) {
		return Replace(_Value, From, To);
	}

	static string RemovePunc(string s) {
		string st = "";

		for (int i = 0; i < s.length(); i++) {
			if (ispunct(s[i]) == false) {
				st = st + s[i];
			}
		}
		return st;
	}

	string RemovePunc() {
		return RemovePunc(_Value);
	}
};