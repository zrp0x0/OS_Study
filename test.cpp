#include <bits/stdc++.h>
using namespace std;

int N, K, tmp;
deque<int> DQ;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    
    for (int i = 0; i < N; i++) {
        DQ.push_back(i+1);
    }
    
    cout << "<";
    while (!DQ.empty()) {
        for (int i = 0; i < K - 1; i++) {
            int ex = DQ.front();
            DQ.pop_front();
            DQ.push_back(ex);
        }
        
        int ex = DQ.front();
        DQ.pop_front();
        if (DQ.size() == 0) {
            cout << ex;
        } else {
            cout << ex << ", ";
        }
    }
    cout << ">" << '\n';
    
    return 0;
}