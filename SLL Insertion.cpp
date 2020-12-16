#include <iostream>

using namespace std;



class Node

{

    public:

    int data;

    Node *next;

    friend class list;

    public:

    Node(int d){

              data=d;

              next = NULL;

    }

};

class list{

              Node *head;

              int d;

public:

              void create();

              void insert(int pos, int val);

              void delete1(int val);

              void delete2(int pos);

              void display();

              list(){

                           head= NULL;

              }

};



void list::create(){
int y;
              do
              {cout<<"Enter new data";

              cin>>d;

              Node *t= new Node(d);

              if(head==NULL){

                           head=t;

              }

              else{

                           Node *p=head;

                           while(p->next!= NULL)

                            { p=p->next;

                            }

                             p->next=t;

                    }
                    cout<<"do u want to add more 1.yes 2.no";
                    cin>>y;
              }while(y==1);

}

void list::display(){

              if(head==NULL){

                           cout<<"List is empty";

              }

              else{

                           Node *p=head;

                           while(p->next!= NULL){

                                         cout<<p->data<<"  ";

                                         p=p->next;

                           }

                           cout<<p->data;

              }

};

void list::insert(int pos, int val){

              Node  *p,*head,*t;

              if(pos==1){

                           t= new Node(d);

                           t->data= val;

                           t->next= head;

                           head= t;

              }

              else if(pos>1){

                           p=head;

                           int i=1;

                           while(i<pos-1){

                                         p=p->next;

                                         i++;

                           }

                           if(p){

                                         t= new Node(d);

                                         t->data= val;

                                         t->next= p->next;

                                         p->next=t;

                           }

              }

}

 void list::delete1(int val){
	 Node *p, *q;
	 p=head;
	 q=head;

	 while(p->data != val){
		 q=p;
		 p=p->next;
	 }
	 if(p)
	 q->next= p->next;
	 delete p;
 }
 void list::delete2(int pos){
	 Node *p, *q;

	 if(pos==1){
		 d=head->data;
		 p=head;
		 head=head->next;
		 delete p;

	 }
	 else{
		 p=head;
		 q=head;
		 for(int i=0; i<pos-1; i++){
			 q=p;
			 p=p->next;
		 }
		 if(p){
			 q->next=p->next;
			 delete p;
		  }}

 }

int main(){

              list l1;

              l1.create();

              cout<<"\nAfter deleting 4    :";
              l1.delete1(4);

              l1.display();

              cout<<"\nAfter deleting 2nd element     :";
              l1.delete2(2);
              l1.display();
              cout<<"Inserting 9 at 3rd position";
              l1.insert(3, 9);
              l1.display();




}

