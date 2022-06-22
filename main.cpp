#include <fstream>
#include <iostream>
#include <algorithm>
#include "string"
#include "vector"

using namespace std;
//void quickSort(vector<string>str, int left, int right) {
//    int i = left, j = right;
//    string mid = str[(left + right) / 2];
//
//    while (i <= j) {
//        while (str[i] < mid)
//            i++;
//        while (str[j] > mid)
//            j--;
//        if (i <= j) {
//            swap(str[i], str[j]);
//            i++; j--;
//        }
//    };
//
//    if (left < j)
//        quickSort(str, left, j);
//    if (i < right)
//        quickSort(str, i, right);
}
int main(){
    ifstream f1("input.txt");
    ofstream f2("output.txt");
    string word,temp;
    vector <string> masword;

    int n;
    f1>>n;
    for (int i = 0;i<n;i++) {
        f1 >> word;
        masword.push_back(word);
    }
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = 0; j < n - 1 - i; ++j) {
//            if (masword[j] > masword[j + 1]) {
//                temp = masword[j];
//                masword[j] = masword[j + 1];
//                masword[j + 1] = temp;
//            }
//        }
//    }
    
    for(int i = 0;i<n;i++){
        f2<<masword[i]<<"\n";
    }
    return 0;
}

