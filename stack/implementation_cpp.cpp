#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Stack{
	
	int top;
	vector<int> vt;
	
	public:
		
	Stack(){
	this->top = -1;
	}	
	void push(int x){
		this->vt.push_back(x);
		this->top++;
	}
	void pop(){
		if(this->top==-1){
			cout<<"Underflow"<<endl;
		}
		else{
		this->vt.pop_back(),this->top--;	
		} 	
	}
	int peek(){
		if(this->top==-1){
			cout<<"Empty Stack"<<endl;
			return 0;
		}
		else{
			return this->vt[top];
		}
		 
	}
	int size(){
		return this->vt.size();
	}
	int empty(){
		return this->vt.size() == 0 ? 1 : 0;
	}
};

int main(){
	
	Stack st ;
	st.push(5);
	cout<<st.peek()<<endl;
	
	st.push(6);
	cout<<st.peek()<<endl;
	
	st.push(7);
	cout<<st.peek()<<endl;
	st.push(8);
	cout<<st.peek()<<endl;
	
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	
	cout<<st.peek()<<endl;
	
	
	
	
}
