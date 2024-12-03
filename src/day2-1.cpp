#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

bool cmp(int a, int b){
    return a > b;
}


int main(){
    const int N = 1000;
    int answer = 0;


    for (int i = 0; i < N; i++){
        std::vector<int> nums;
        while (true){
            int x;
            scanf("%d", &x);
            nums.push_back(x);
            char c;
            scanf("%c", &c);
            if (c == '\n'){
                break;
            }
        }
        int k = (int) nums.size();
        bool ok = true;
        bool only_dec = true;
        bool only_inc = true;
        for(int j = 0; j < k - 1; j++){
            int diff = nums[j + 1] - nums[j];
            if (diff > 0){
                only_dec = false;
            }
            if (diff < 0){
                only_inc = false;
            }
            if (!(1 <= abs(diff) && abs(diff) <= 3)){
                ok = false;
            }
        }

        if (ok && (only_inc || only_dec)){
            answer++;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}

// this code comes from Errichto Algorithms, copied to understand the solution
