/**
 * Demo program for phonetic search.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2020-03
 */

#include "PhoneticFinder.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	string text = "Dond vorri be haffy";
	cout << phonetic::find(text, "dont") << endl;   // should print "Dond"
	cout << phonetic::find(text, "worry") << endl;   // should print "vorri"
	cout << phonetic::find(text, "Be") << endl;   // should print "be"
	cout << phonetic::find(text, "happy") << endl;   // should print "haffy"
	try {
		cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
	}
}
