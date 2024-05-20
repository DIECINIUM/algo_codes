#include<bits/stdc++.h>
using namespace std ;
#define PRIME 101
 double calculateHash(string str) {
        double hash = 0;
        for (int i = 0; i < str.length(); i++) {
            hash += str[i] * pow(PRIME, i);
        }
        return hash;
    }
    double updateHash(double prevHash, char oldChar, char newChar, int patternLength) {
        double newHash = (prevHash - oldChar) / PRIME;
        newHash = newHash + newChar * pow(PRIME, patternLength - 1);
        return newHash;
    }
    void search(string text, string pattern) {
        int patternLength = pattern.length();
        double patternHash = calculateHash(pattern);
        double textHash = calculateHash(text.substr(0, patternLength));

        for (int i = 0; i <= text.length() - patternLength; i++) {
            if (textHash == patternHash) {
                if (text.substr(i, patternLength) == pattern) {
                    cout << "Pattern found at index " << i << endl;
                }
            }

            if (i < text.length() - patternLength) {
                textHash = updateHash(textHash, text[i], text[i + patternLength], patternLength);
            }
        }
    }
int main(){
    string  s,p ;
    cin>>s>>p ;
    search(s,p) ;
    return 0 ;
    
    
}