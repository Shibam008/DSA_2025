#include <iostream>
#include <set>  //! inser -> t.c -> O(log n) && stores sorted values
#include <unordered_set>  //! t.c -> O(1)
using namespace std;

int main() {
    
    //* Stores all the unique elements

    set<int> st;


    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(10);
    st.insert(40);
    st.insert(10);
    
    set<int>::iterator it = st.begin();

    while(it != st.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;


    //^ find() -
    if(st.find(10) != st.end())
    {
        cout << "value found" << endl;
    }
    else 
    {
        cout << "value not found" << endl;
    }

    //^ count() -
    if(st.count(30) != 0) {
        cout << "element found" << endl;
    } else {
        cout << "element not found\n";
    }

    return 0;
}