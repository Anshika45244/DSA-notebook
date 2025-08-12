// array
#include<iostream>
#include<array>
using namespace std;

int main() {

    int basic[3] = {1,2,3};
    array<int, 5> arr = {1,2,3,4,5};

    int size = arr.size();
    cout<<"The size of the array is : "<<size<<endl;

    cout<<"The array elements are : ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd index is : "<<arr.at(2)<<endl;

    cout<<"Arrays is empty or not : "<<arr.empty()<<endl;

    cout<<"First Element : "<<arr.front()<<endl;

    cout<<"Last Element : "<<arr.back()<<endl;

    arr.fill(4);
    cout<<"The array elements are : ";
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}





//vector
#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> a(5, 1);    //this will create a vector of size 5 and intialize all elements with 1

    vector<int> n(a);   // this will copy the all elements of vector a into n

    vector<int> v;  // we create vector like this if we don't know the size
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<endl;  
    cout<<"size : "<<v.size()<<endl;   
    
    cout<<"Element at index 2 : "<<v.at(2)<<endl;

    cout<<"First Element : "<<v.front()<<endl;

    cout<<"Last Element : "<<v.back()<<endl;

    cout<<"Before pop elements are : ";
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop elements are : ";
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size and capacity of vector are : "<<v.size()<<" and "<<v.capacity()<<endl;
    v.clear();  // the capacity will remain 4
    cout<<"After clear size and capacity of vector are : "<<v.size()<<" and "<<v.capacity()<<endl;
    return 0;
}



//stack 
#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;

    s.push("Anshika");
    s.push("verma");
    
    cout<<"Top element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top element : "<<s.top()<<endl;

    cout<<"Size of stack : "<<s.size()<<endl;
    return 0;
}


//queue
#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"First Element : "<<q.front()<<endl;

    cout<<"Last Element : "<<q.back()<<endl;

    cout<<"Queue is empty or not : "<<q.empty()<<endl;

    q.pop();
    cout<<"Front Element : "<<q.front()<<endl;

    return 0;
}


//priority queue
#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int> maxi;    // by default it create max heap

    priority_queue<int, vector<int>, greater<int> > mini;    // this will create a min heap
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    maxi.push(0);
    cout<<"size of priority queue (maxi) is : "<<maxi.size()<<endl;

    int n1 = maxi.size();
    for (int i=0; i<n1; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    mini.push(0);
    cout<<"size of priority queue (mini) is : "<<mini.size()<<endl;

    int n2 = mini.size();
    for (int i=0; i<n2; i++) {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}


// map

#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = " kuch";
    m[2] = "bhi";
    

    cout<<"map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"before erase map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(3);     // in erase we just need to give key
    cout<<"after erase map elements are : "<<endl;
    for (auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}


//list
#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);

    cout<<"The list elements are : ";
    for (int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"First Element : "<<l.front()<<endl;

    cout<<"Last Element : "<<l.back()<<endl;

    cout<<"Deque is empty or not : "<<l.empty()<<endl;

    l.pop_back();
    cout<<"After pop back elements are : ";
    for (int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.pop_front();
    cout<<"After pop front elements are : ";
    for (int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before erase size of list is : "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"After erase size of list is : "<<l.size()<<endl;
  
    return 0;
}




//set
#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(2);

    cout<<"set elements are : ";
    for (auto i : s) {
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    cout<<"after erasing, set elements are : ";
    for (auto i : s) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"3 is present in set or not : ";
    cout<<s.count(3)<<endl;

    cout<<"10 is present in set or not : ";
    cout<<s.count(10)<<endl;

    return 0;
}

//algorithm
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    cout<<"finding 6 --> "<<binary_search(v.begin(), v.end(), 6)<<endl;
    cout<<"finding 1 --> "<<binary_search(v.begin(), v.end(), 1)<<endl;

    cout<<"lower bound : "<<lower_bound(v.begin(), v.end(), 3) - v.begin()<<endl; 

    cout<<"upper bound : "<<upper_bound(v.begin(), v.end(), 3) - v.begin()<<endl; 

    int a = 30;
    int b = 50;

    cout<<"maxi : "<<max(a, b)<<endl;
    cout<<"mini : "<<min(a, b)<<endl;

    cout<<"before swapping --> ";
    cout<<"a : "<<a<<" b : "<<b<<endl;

    swap(a, b);

    cout<<"after swapping --> ";
    cout<<"a : "<<a<<" b : "<<b<<endl;

    string s = "abcdefgh";
    cout<<"before reverse string s : ";
    cout<<s<<endl;
    reverse(s.begin(), s.end());

    cout<<"after reverse string s : ";
    cout<<s<<endl;

    cout<<"before rotate vector v elements are : ";
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(), v.begin()+1, v.end());

    cout<<"after rotate vector v elements are : ";
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
































