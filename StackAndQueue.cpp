#include<iostream>
using namespace std;

#define max 100

//class stack{
//    private:
//        int top;
//        int arr[max];
//    public:
//        stack(){
//            top=-1;
//        }
//        bool is_empty(){
//            return top==-1;
//        }
//        bool is_full(){
//            return top==max-1;
//        }
//        void push(int tambah){
//            if(is_full()){
//                cout<<"Stack penuh"<<endl;
//            }else{
//                arr[++top]=tambah;
//            }
//        }
//        void pop(){
//            if(is_empty()){
//                cout<<"Stack kosong"<<endl;
//            }else{
//                top--;
//            }
//        }
//        void clear(){
//            top = -1;
//        }
//        void display(){
//            if(is_empty()){
//                cout<<"Stack kosong"<<endl;
//            }else{
//                for(int i=top;i>=0;i--){
//                    cout<<arr[i]<<endl;
//                }
//                cout<<endl;
//            }
//        }
//};
//
//int main(){
//    stack s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    s.display();
//
//    return 0;
//}
class queue{
	private:
		int front;
		int rear;
		int arr[max];
	public:
		queue(){
			front=-1;
			rear=-1;
		}
		bool is_empty(){
			return front==-1;
		}
		bool is_full(){
			return rear==max-1;
		}
		void enqueue(int tambah){
			if(is_full()){
				cout<<"Queue penuh"<<endl;
			}else{
				if(is_empty()){
					front = 0;
				}
				rear++;
				arr[rear]=tambah;
			
			}
		}
		void dequeue(){
			if(is_empty()){
				cout<<"Queue kosong"<<endl;
			}else{
				int item = arr[front];
				if(front == rear){
					front = -1;
					rear = -1;
				}else{
					front++;
				}
			
			}
		}
		int get_front(){
			if(is_empty()){
				cout<<"Queue kosong"<<endl;
				return -1;
			}else{
				return arr[front];
			}
		}
		void display(){
			if(is_empty()){
				cout<<"Queue kosong."<<endl;
			}else{
				cout<<"Isi queue: ";
				for(int i=front;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.display();

	cout<<"Elemen paling depan: "<<q.get_front()<<endl;

	q.dequeue();
	q.display();

	return 0;
}

