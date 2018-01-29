//
// Created by beans_pc on 1/29/2018.
// Time Complexity: O(n) ==> Counting Sort
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int maxn = 1e5 +10;
const int maxVal = 1e5+10;
const int k = 10;

int k_th(int *data, int n, int k){
    int mmin = data[0],mmax = data[0];
    int times[maxVal];
    memset(times,0, sizeof(times));
    for(int i = 0;i<n;++i){
        mmin = min(mmin,data[i]);
        mmax = max(mmax,data[i]);
        times[data[i]]++;
    }

    int cnt = 0;
    for(int i = mmax ;i>= mmin;--i){
        cnt += times[i];
        if(cnt >= k){
            return i;
        }
    }
    return -1;//fail
}
bool cmp(const int &lhs,const int &rhs){
    return lhs > rhs;
}
int main(){
    freopen("C:\\Users\\beans_pc\\Desktop\\KCYB-master\\data\\2.txt","r",stdin);
    ios::sync_with_stdio(false);
    vector<int> tmp_data;
    int tmp_cnt = 0,tmp;
    while(!cin.eof()){
        cin >> tmp;
        tmp_data.push_back(tmp);
        //cout << tmp_data[tmp_cnt++]<< endl;
    }
    cout << k_th(&tmp_data[0],tmp_data.size(),k) << endl;

    //sort(tmp_data.begin(),tmp_data.end(),cmp);
    //cout << tmp_data[10];
}