#include<bits/stdc++.h>
using namespace std;

// STL Components - Algorithms, Functions, Containers, Iterators

void explainPair() {
    pair<int, int> p = {1, 3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> pr = {1, {3, 4}};

    cout<<pr.first<<" "<< pr.second.second << " "<< pr.second.first<<endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    cout<<arr[1].first<<" " << arr[1].second<<endl;
}

void explainVector() {
    vector<int> vt;

    vt.push_back(1);
    vt.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v3(5, 100);
    vector<int> v4(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = vt.rend();

    vector<int>::iterator it = vt.rbegin();

    cout << v[0] << " " << vt.at(0);

    cout << v.back() << " ";

    for(vector<int>::iterator it = vt.begin(), it != vt.end(); it++) {
        cout << *(it) <<" ";
    }

    for(auto it = vt.begin(); it != vt.end(); it++) {
        cout << *(it) <<" ";
    }

    for(auto it : vt) {
        cout << it << " "; 
    }

    // {10, 20, 12, 23}
    vt.erase(vt.begin()+1); // {10, 12, 23}

    //{10, 20, 12, 23, 35}
    vt.erase(vt.begin() + 2, vt.begin() + 4); // {12, 23, 35} [start, end)

    // Insert function

    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); //2

    //{10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    v.clear(); // erases the entire vector

    cout << v.empty();
}

void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(6); //{6, 5, 2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, empty, insert, size, swap 
}

void explainDeque() {

    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back(); 

    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, empty, insert, size, swap
}

void explainStack() {
    // LIFO
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // print 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top(); // 3

    cout << st.size(); //4

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);    
}

void explainQueue() {
    // FIFO
    queue<int> q;
    q.push(1); //{1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 9

    // size swap empty same as stack
}

void explainPQ() {
    // Or Maximum Heap
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.push(10); // {10, 8, 5, 2}

    cout << pq.top(); //prints 10

    pq.top(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

void explainSet() {
    // set -> sorted, unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty(), and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); //st.end();

    //{1, 4, 5}
    st.erase(5); // erase 5 // takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    // this is the syntax
    auto it = st.lower_bound(2);
     
    auto it = st.upper_bound(3);
}

void explainMultiSet() {
    // Everything is same as set 
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.erase(1); // all 1's erased
    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
    //rest all function same as well
}

void explainUSet() {
    // Unordered Set -> Unique 
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // paritcular order it has a better complexity
    // than set in most cases, except some when collision happens
}

void explainMap() {
    // map -> {key, value}
    // map stores unique key in sorted order
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10;
    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for(auto it:mp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}

void explainMultiMap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap() {
    // same as set and unordered_Set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second) {
        if(p1.first > p2.second) return true;
    }
    return false;
}

void explainExtra() {
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in decreasing

    sort(a, a+n, comp);
    // {{4, 1}, {2, 1}, {1, 2}}

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 16786578687;
    int cnt = __builtin_popcountll();

    // Print all permutations
    sort(s.begin(), s.end());
    string s = "123"; 
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n);
    
}

int main() {
    cout<<"Hello World";
    return 0;
}