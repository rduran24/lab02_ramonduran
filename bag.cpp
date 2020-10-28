#include "bag.h"
#include<iostream>

//YOU CAN INCLUDE OTHER HEADER FILES HERE IF NEEDED
// DO NOT ADD THE FOLLOWING HEADERS:
// 1. <vector>, 2. <queue>, 3. <deque>, 4. <stack>,
// 5. <map>, 6. <algorithm>, 7. <set>, 8. <utility>
// In summary do not use any built-in data structures
// other than arrays. Also, do not use any built-in
// algorithms related to sorting and searching

// you are allowed to use the header files: <cstring>, <string>
// you can use the string manipulation functions
// provided by those header files if needed

using namespace std;

// implementation of word constructor; you may modify this if required
Word::Word(std::string name){
	word = name;
	count = 1;
}
void Word::setWord(string a){
	word = a;
	count = 1;

}

int Word::getCount() const{
	return count;

}
string Word::getWord() const{
	return word;


}
void Word::increaseCount(){
	count = count+1;

}
// Implement the print_words function
void Bag::print_words() const {
	for(int i = 0; i < LIMIT; i++){
		if(container[i].getCount() == -1){
			return;
		}
		else{
			cout << container[i].getWord() << "::" << container[i].getCount() << endl;

		}
	}
}

void Bag::addWord(string w){
	
	for(int i = 0; i<LIMIT; i++){
		if(container[i].getCount() == -1){
			container[i].setWord(w);
			break;

		}
		if(container[i].getWord() == w){
			container[i].increaseCount();
			break;
		}
	}

}
// Implement any other memeber functions you may have
// added to the class definitions

