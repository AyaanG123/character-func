//Ayaan Gill
//12-6-2024
//Character Function Practice Program
using namespace std;
#include <cctype>
#include <string>
#include <iostream>

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    for(char c: name){
        if(isdigit(c)){
        return 0;
        }
        if(ispunct(c)){
        return 0;
        }
    }
    
    for(char c: name){
        char f = toupper(c);
        cout<<f;
    }



    
