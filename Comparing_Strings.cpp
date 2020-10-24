#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin>>n;
    string s; cin>>s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    array<size_t, (1 << (8 * sizeof(char)))> countChars{};
    countChars.fill(0);
    for (char & i : s)
        countChars[i]++;
    vector<size_t> countLetters;
    for (char & i : alphabet)
        countLetters.push_back(countChars[i]);
    sort(countLetters.begin(),countLetters.end());
    countLetters.pop_back();
    int sum=0;
    for(int i=0; i<countLetters.size();i++){
        sum +=countLetters[i];
    }
    cout<<sum<<endl;
}
/*
You will be given a string sized N. In one operation you can select a character from the string and change it to a different character. What is the minimum number of operations is needed to make the characters in the string all equal?

Input Format

First line contains one integer, N - Number of characters in the string

Next Line contains string sized N

Constraints


All characters in the string are lowercase.

Output Format

Print the answer in one line.

Sample Input 0
5
accca

Sample Output 0
2
--------------------
Sample Input 1
2
dj

Sample Output 1
1
*/
