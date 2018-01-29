//
// Created by beans_pc on 1/29/2018.
// Time Complexity: O(Min(N,M))
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ifstream txt1_1("C:\\Users\\beans_pc\\Desktop\\KCYB-master\\data\\1_1.txt"), txt1_2(
            "C:\\Users\\beans_pc\\Desktop\\KCYB-master\\data\\1_2.txt");
    vector<int> v1, v2;
    int tmp, cnt = 0;
    if (!txt1_1.is_open() && !txt1_2.is_open()) {
        cout << "fail" << endl;
    }

    while (!txt1_1.eof()) {
        txt1_1 >> tmp;
        v1.push_back(tmp);

        cnt++;
        //cout << v1[cnt++] << endl;
    }

    while (!txt1_2.eof()) {
        txt1_2 >> tmp;
        v2.push_back(tmp);

        cnt++;
        //cout << v1[cnt++] << endl;
    }
    int i = 0, j = 0, res = 0;
    /*
    while(i<v1.size() && j < v2.size()){
        while(v1[i]<v2[j] && i< v1.size())
            i++;
        while(v1[i]>v2[j] && j< v2.size())
            j++;
        if(i<v1.size()&&j<v2.size())
            res++;
        i++;
        j++;

    }
     */
    int M = v1.size(), N = v2.size();
    while (i < M && j < N) {
        if (v1[i] == v2[j]) {

            i++;
            j++;
            res++;
        } else if (v1[i] < v2[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << res << endl;

    /*
    vector<int> tmp_v;
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(tmp_v));
    cout << tmp_v.size();
     */
}