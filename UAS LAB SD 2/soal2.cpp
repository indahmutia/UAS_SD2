#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Customer {
    string name;
    int weight;
    string type;
    int order; 
};

int main() {
    int n;
    cin >> n;

    vector<Customer> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].weight >> arr[i].type;
        arr[i].order = i;
    }

    sort(arr.begin(), arr.end(), [](Customer a, Customer b){
        if (a.type != b.type)
            return a.type == "express";  // express dulu
        return a.order < b.order;        // yang datang dulu
    });

    int total = 0;

    for (auto & c : arr) {
        cout << c.name << endl;
        if (c.type == "express") total += c.weight * 5;
        else total += c.weight * 10;
    }
    cout << total << endl;
   
    return 0;
}

