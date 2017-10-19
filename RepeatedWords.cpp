#include <iostream>

using namespace std;

int main(){
    int number_of_words = 0;
    string previous = "";
    string current;
    while (cin>>current){
        if (previous == current)
            cout << "word's index number " << number_of_words
                << " - word repeated: " << current << "\n";
        previous = current;
        ++number_of_words;
    }
}