#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

bool comp(int a, int b){
    return a <= b;
}

int main(){
    std::ifstream f("day1-input.txt");

    if (!f.is_open()){
        std::cerr << "Error opening the file!" << std::endl;
        return 1;
    }
    std::vector<int> nums;
    int num;

    while (f >> num){
        nums.push_back(num);
    }
    f.close();

    std::vector<int> arr_1;
    std::vector<int> arr_2;

    for (int i = 0; i < nums.size(); i++){
        if (i % 2 == 1){
            arr_2.push_back(nums[i]);
        }else{
            arr_1.push_back(nums[i]);
        }
    }
    int counter = 0; // counter
    int stop_counter = 0; //multiplicative
    int sum = 0;

    for(int i = 0; i < arr_1.size(); i++){
        counter = std::count(arr_2.begin(), arr_2.end(), arr_1[i]);
        stop_counter = arr_1[i] * counter;
        sum = stop_counter + sum;
    }
    std::cout << sum << std::endl;
    return 0;
}
