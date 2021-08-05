//
//  main.cpp
//  7_C++_Sort()_Function_2
//
//  Created by 세광 on 2021/08/05.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, string>> v;
    v.push_back(pair<int, string>(90, "A"));
    v.push_back(pair<int, string>(85, "B"));
    v.push_back(pair<int, string>(82, "C"));
    v.push_back(pair<int, string>(98, "D"));
    v.push_back(pair<int, string>(79, "E"));
    
    sort(v.begin(), v.end());
    
    for (auto elem : v) cout << elem.first << ", " << elem.second << endl;
}
