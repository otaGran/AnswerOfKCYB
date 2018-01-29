//
// Created by beans_pc on 1/29/2018.
// Time Complexity: O(nlgn) ==> Quick Sort
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

const double target_x = 116.42;
const double target_y = 39.84;

typedef struct taxi{
    string taxiNumber;
    double ori_x,ori_y;
    double diff;
};

bool cmp(const taxi &lhs, const taxi &rhs){
    return lhs.diff < rhs.diff;
}


int main(){
    freopen("C:\\Users\\beans_pc\\Desktop\\KCYB-master\\data\\3.txt","r",stdin);
    ios::sync_with_stdio(false);
    vector<taxi> data;
    taxi tmp;
    int cnt = 0;
    while(!cin.eof()){
        cin >> tmp.taxiNumber >> tmp.ori_x >> tmp.ori_y;

        tmp.diff = fabs(tmp.ori_x-target_x)+fabs(tmp.ori_y - target_y);
        printf("%s %lf %lf %lf\n",tmp.taxiNumber.c_str(),tmp.ori_x,tmp.ori_y,tmp.diff);
        data.push_back(tmp);
        //cout << data[cnt++].diff << data[cnt-1].taxiNumber << endl;
    }
    sort(data.begin(),data.end(),cmp);
    printf("\n%s %lf %lf %lf\n",data[0].taxiNumber.c_str(),data[0].diff,data[0].ori_x,data[0].ori_y);
}