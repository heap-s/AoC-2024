#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

bool isOk(std::vector<int> nums){
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

    return (ok && (only_inc || only_dec));
}


int main(){
    int N = 1000;
    int answer = 0;


    while(N--){
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
            bool anyOk = false;
            auto consider = [&](int i){
                std::vector<int> b = nums;
                b.erase(b.begin() + i);
                if(isOk(b)){
                    anyOk = true;
                }
            };

            int k = nums.size();
            consider(0);
            for (int i = 0; i < k - 1; i++){
                int diff = nums[i+1] - nums[i];
                if (abs(diff) < 1 || abs(diff) > 3){
                    consider(i);
                    consider(i + 1);
                    break;
                }
                if(i + 2 < k){
                    int diff2 = nums[i + 2] - nums[i + 1];
                    if ((diff > 0) != (diff2 > 0)){
                        consider(i);
                        consider(i + 1);
                        consider(i + 2);
                        break;
                    }
                }
            }
            if(anyOk){
                answer++;
            }

    }
    std::cout << answer << std::endl;
    return 0;
}
