#include <iostream>
#include <string>
using namespace std;

class node {
public:
        string   name;
        double      score;
        node *link;
        void   set_data(string   s, double n);
};

void   node::set_data(string s, double n) {
           name = s;
           score = n;
}

class my_list {
        node   *head;
public:
        my_list() {
                head = NULL;
        }
        void add_to_head(node   t);
        int  how_many_A();
        bool  all_pass();
        int  how_many_failed();
        void show_all_data();
};

void my_list::add_to_head(node t) {
        node   *p;
        p = new   node;
        (*p) = t;
        p->link = head;
        head = p;
}


void my_list::show_all_data()
{
        node *p;

        for ( p = head; p != NULL; p = p->link)
                cout << p->name << " : " << p->score << endl;

}

int  my_list::how_many_A()
{
    node *p;
    int count =0;
    for(p=head ; p !=  NULL; p= p->link){
        count ++;
    }
    return count;
}

bool  my_list::all_pass()
{
    node *p;
    for(p = head; p != NULL ; p= p->link){
        if(p->score >= 60){
            return true;
        }
        else {
            return false;
        }
    }

}


int main()
{
my_list    a;
node   tmp;
        tmp.set_data("Kim", 83.5);
        a.add_to_head(tmp);
        tmp.set_data("Lee", 58.2);
        a.add_to_head(tmp);
        tmp.set_data("Park", 91.3);
        a.add_to_head(tmp);
        tmp.set_data("Choi", 93.7);
        a.add_to_head(tmp);
        tmp.set_data("Ryu", 77.1);
        a.add_to_head(tmp);
        tmp.set_data("Yang", 94.9);
        a.add_to_head(tmp);
        tmp.set_data("Hong", 53.2);
        a.add_to_head(tmp);

        cout << "\nThe list. \n";
        a.show_all_data();

        cout << "The number of students with grade A = " << a.how_many_A() << endl;
        if ( a.all_pass() )

                cout << "Yes, They all passed.\n";
        else
                cout << "No, They didn't all pass. \n";

        return 0;

}