#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    private:
        vector<int> st;
    public:
        Stack() {}
        void push(int num){
            st.push_back(num);
        }
        int top(){
            return st.back();
        }
        void pop(){
            st.pop_back();
        }
        int size(){
            return st.size();
        }
};
int main()
{
    Stack st;
    st.push(45);
    st.push(-1);
    st.push(34);
    cout<<st.top()<<endl;
    st.pop();

    cout<<"Now Stack size is " << st.size() << endl;

}
