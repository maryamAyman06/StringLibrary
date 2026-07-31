#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
	clsString String1;
	String1.SetValue("Maryam Ayman");

	clsString String2("I love programming");

	clsString String3;
	String3.Value = "Computer science student";

	String3.PrintFirstLetterOfEachWord();

	cout << endl;

	clsString::PrintFirstLetterOfEachWord("Maryam Ayman Sugar forever");

	cout << endl;

	String2.UpperFirstLetterOfEachWord();
	cout << endl;
	cout << clsString::UpperFirstLetterOfEachWord("mohammed ayman") << endl;

	String2.LowerFirstLetterOfEachWord();
	cout << endl;
	cout << clsString::UpperFirstLetterOfEachWord("MOHAMMED AYMAN") << endl;

	String1.UpperAllString();
	cout << endl;
	cout << clsString::UpperAllString("MOHAMMED AYMAN") << endl;

	String1.LowerAllString();
	cout << endl;
	cout << clsString::LowerAllString("MOHAMMED AYMAN") << endl;

	String1.InvertAllStringLetterCase();
	cout << endl;
	cout << clsString::InvertAllStringLetterCase("MoHaMmEd AyMaN") << endl;

	cout << String2.CapitalLetterCount() << endl;
	cout << clsString::CapitalLetterCount("MoHaMmEd AyMaN") << endl;


	cout << String2.CapitalLetterCount() << endl;
	cout << clsString::CapitalLetterCount("MoHaMmEd AyMaN") << endl;

	cout << String2.CountLetters() << endl;
	cout << clsString::CountLetters("MoHaMmEd AyMaN") << endl;

	cout << String2.CountSpecificLetter('M') << endl;
	cout << clsString::CountSpecificLetter("MoHaMmEd AyMaN", 'M') << endl;

	cout << String3.CountVowels() << endl;
	cout << clsString::CountVowels("MoHaMmEd AyMaN") << endl;

	String3.PrintVowel();
	cout << endl;
	clsString::PrintVowel("MoHaMmEd AyMaN");
	cout << endl;

	String3.PrintEachWord();
	cout << endl;
	clsString::PrintEachWord("MoHaMmEd AyMaN");
	cout << endl;

	cout << String3.CountNumberOfWordsInString() << endl;
	cout << clsString::CountNumberOfWordsInString("MoHaMmEd AyMaN") << endl;

	vector <string> Words1 = String3.split(" ");
	vector <string> Words2 = clsString::split("MoHaMmEd AyMaN", " ");

	for (int i = 0; i < Words1.size(); i++) {
		cout << Words1[i] << endl;
	}

	for (int i = 0; i < Words2.size(); i++) {
		cout << Words2[i] << endl;
	}

	cout << String3.TrimRight() << endl;
	cout << clsString::TrimRight("MoHaMmEd AyMaN      ") << endl;

	cout << String3.TrimLeft() << endl;
	cout << clsString::TrimLeft("     MoHaMmEd AyMaN") << endl;

	cout << String3.Trim() << endl;
	cout << clsString::Trim("     MoHaMmEd AyMaN      ") << endl;

	vector <string> vString = { "Mariam", "Mai", "Mayar", "Mohammed" };
	cout << clsString::Join(vString, ":-)");

	cout << endl;

	String3.ReverseWordsInString();
	cout << endl;
	cout << clsString::ReverseWordsInString("MoHaMmEd AyMaN") << endl;

	cout << String3.Replace("student", "software engineer") << endl;
	cout << clsString::Replace("Hi, Maryam Student Mansoura Student Computer Science", "Student", "Programmer") << endl;

	cout << String3.RemovePunc() << endl;
	cout << clsString::RemovePunc("Hi, Maryam_ Student/ Mansoura. Student- Computer< Science") << endl;
	system("pause>0");
	return 0;
}