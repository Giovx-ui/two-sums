#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> hashv;

    for (auto i=0; i < nums.size();++i){

     int res = target - nums[i];
     if (hashv.find(res) != hashv.end()){

        return {hashv[res],i};


     }

     hashv[nums[i]] = i;


    }
    return {};
     
    
        
}

};

    
int main(){

       vector<int> x1;

       int input;
       int num23;


       cout << "inserisci i numeri: (scrivi 1234 quando hai finito)" << endl;

       while ((cin >> input) && input != 1234)
           x1.push_back(input);

        cout << "inserisci target" << endl;

        cin >> num23; 

        Solution s;

        vector<int> result = s.twoSum(x1, num23);

        if (!result.empty()){

            cout << x1[result[0]] << " e " << x1[result[1]] << endl;
        }
        else {
         cout << "nulla" << endl;
            }

        return 0;




         
        






       











        
}




    
