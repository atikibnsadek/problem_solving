#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int value, inputSize;
    vector <int> myVector;
    cin >> inputSize;
    if(myVector.empty()) cout << "Vector is empty." << endl;
    cout << "Size before insertion: " << myVector.size() << endl;
    for(int i = 0; i < inputSize; i++)
    {
        cin >> value;
        myVector.push_back(value);  // Inserts the value
    }
    cout << "Insertion complete." << endl;
    if(!myVector.empty()) cout << "Vector is not empty." << endl;
    cout << "Size after insertion: " << myVector.size() << endl;
    for(int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << ' ';
    }
    cout << endl;
    sort(myVector.begin(), myVector.end());
    for(int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << ' ';
    }
    cout << endl;
    return 0;
}

