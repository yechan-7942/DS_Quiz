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
        void list_invert();
        void show_all_data();
};

void my_list::add_to_head(node t)
{
        node   *p;
        p = new   node;
        (*p) = t;
        p->link = head;
        head = p;
}

void my_list::list_invert()
{
      node *p =NULL;
    for(p= head; p!= NULL; p= p->link){
        p= p->link;
    }
}

void my_list::show_all_data()
{
        node *p;

        for ( p = head; p != NULL; p = p->link)
                cout << p->name << " : " << p->score << endl;

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
        tmp.set_data("Choi", 55.1);
        a.add_to_head(tmp);
        tmp.set_data("Ryu", 77.1);
        a.add_to_head(tmp);
        tmp.set_data("Yang", 41.3);
        a.add_to_head(tmp);
        tmp.set_data("Hong", 78.2);
        a.add_to_head(tmp);

        cout << "\nThe list before the inversion\n" ;
        a.show_all_data();

        a.list_invert();
        cout << "\nThe list after the inversion\n" ;

        a.show_all_data();
        cout << endl;

        return 0;

}
