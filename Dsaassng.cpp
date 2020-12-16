//============================================================================
// Name        : Dsaassng.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node {
int prn;
char name[20];
node* next;
int yr;
friend class list;
public:
node()
{
next = NULL;
}
};
class list
{
public:
node* header1, * header2;
list() {
header1 = NULL;
header2 = NULL;
}

node* create();
void display(node* p);
void add(node* head);
void del(node* head);
int count(node* p);
};

node* list::create()
{
char ch;
int year;
node* head;
node* temp = new node();
head = temp;
cout << "Enter prn of president ";
cin >> temp->prn;
cout << "Enter name of president";
cin >> temp->name;
cout << "Enter year";
cin >> temp->yr;
do {
temp->next = new node;
temp = temp->next;
cout << "Enter member name:";
cin >> temp->name;
cout << "enter prn of member:";
cin >> temp->prn;
cout << "year";
cin >> temp->yr;
cout << endl;
cout << "do you want to add another member?( y or Y for yes)";
cin >> ch;
} while (ch == 'Y' || ch == 'y');
temp->next = new node();
temp = temp->next;
cout << "enter secretary name:";
cin >> temp->name;
cout << "enter prn of secretary:";
cin >> temp->prn;
cout << "year";
cin >> temp->yr;
cout << endl;
temp->next = NULL;
return head;
}
void list::display(node* head) {
node* temp;
temp = head;
cout << "President:" << temp->name << endl;
cout << "year: " << temp->yr << endl;
cout << "PRN:" << temp->prn << endl << endl;
temp = temp->next;
cout << " Members";
for (int i = 0; temp->next != NULL; i++) {
cout << i << "Name:" << temp->name << endl;
cout << "PRN:" << temp->prn << endl;
cout << "year: " << temp->yr;
temp = temp->next;
}
cout << endl;
cout << "Secretary:" << temp->name << endl;
cout << "year: " << temp->yr;
cout << "PRN:" << temp->prn << endl << endl;

}

int list::count(node* p) {
node* counter = p;
int count = 0;
while (counter != NULL) {
count++;
counter = counter->next;
}
cout << "Total number of members in LL:" << count;
return count;
}

void list::add(node* head) {
int n;
cout << "Enter position where you want to add member:";
cin >> n;
node* nn, * temp;
node* ptr = new node();
nn = head;

node* an = new node();
if (n == 1) {
cout << "Enter New President's name:";
cin >> ptr->name;
cout << "PRN:";
cin >> ptr->prn;
cout << "year";
cin >> ptr->yr;
cout << endl;
ptr->next = head;
head = ptr;
cout << "Member is added! List has " << count(head) << "members";


}
else if (n == count(head) + 1) {
for (int i = 0; nn->next != NULL; i++) {
nn = nn->next;
}
cout << "Enter name of secretary:";
cin >> an->name;
cout << "PRN:";
cin >> an->prn;
cout << endl;
nn->next = an;
an->next = NULL;
cout << "Member is added! List has " << count(head)
<< " members now!\n\n";
}
else if (n > 1 && n <= count(head)) {
for (int i = 1; i < n; i++) {
temp = nn;
nn = nn->next;
}
cout << "Enter Name of Member : ";
cin >> an->name;
cout << "Enter PRN of Member : ";
cin >> an->prn;
cout << endl;
an->next = nn;
temp->next = an;
cout << "Member is added! List has " << count(head)
<< " members now!\n\n";
}
else {
cout << "Invalid Input Position";
}

}
void list::del(node* head) {
int key;
cout << "Enter the PRN of the student which is to be deleted : ";
cin >> key;
cout << endl;

node* nn, * temp;
nn = head;

if (nn->prn == key) {
head = nn->next;
delete (nn);
cout << "Member deleted! List has " << count(head)
<< " members now!\n\n";
}
else {
while (nn->prn != key) {
temp = nn;
nn = nn->next;
}

if (nn->prn == key && nn->next == NULL) {
temp->next = NULL;
delete (nn);
cout << "Member deleted! List has " << count(head)
<< " members now!\n\n";
}
else if (nn->prn == key) {
temp->next = nn->next;
delete (nn);
cout << "Member deleted! List has " << count(head)
<< " members now!\n\n";
}
else
cout << "Member not found!\n\n";
}
}

int main() {
list l1; int m;


do {
cout << "MENU:" << endl;
cout << "1.create list" << endl;
cout << "2.count total members in list" << endl;
cout << "3.Insert member in list by position" << endl;
cout << "4.delete member by position" << endl; cout << "0.EXIT";
cin >> m;
switch (m) {
case 1:l1.header1 = l1.create();
break;
case 2:l1.count(l1.header1);
break;
case 3:l1.add(l1.header1);
break;
case 4:l1.del(l1.header1);
break;
default:cout << "INVALID INPUT";
break;

}

} while (m != 0);

return 0;

}

