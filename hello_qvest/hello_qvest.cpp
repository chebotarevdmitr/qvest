#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int>Sort(vector<int>v){
	sort(begin(v),end(v));
	return v;
}

int main() {
 vector<int>nums = {3,4,1,0,2,5};
 nums= Sort(nums);
 for(auto x :nums){
 	cout<<x<<" ";
 }
   system("pause>0") ;
    return 0;
}



