#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(int n, vector<int>& nums) {
    if (n <= 0) {
        return vector<int>(); // Base case: return an empty vector when n is 0 or less
    }
    vector<int> temp = reverseArray(n - 1, nums); // Recursively reverse the array
    temp.insert(temp.begin(), nums[n - 1]);
    //temp.push_back(nums[n - 1]); // Add the last element of the current array to the end of the reversed array
    return temp;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n); // Create a vector of size n
    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Read each element of the array
    }
    vector<int> rev = reverseArray(n, arr); // Reverse the array
    for(int i = 0; i < rev.size(); i++){
        cout << rev[i] << " "; // Print each element of the reversed array
    }
    cout << endl;
    return 0;
}
