#include<iostream>
#include<iomanip>
using namespace std;
enum color{RED,BLACK};
class Node
{
public:
    int data;
    bool color;
    Node* parent;
    Node* left;
    Node* right;
    Node(int el,bool col,Node* p,Node* l,Node* r)
    {
        data=el;
        color=col;
        parent=p;
        left=l;
        right=r;
    }
};
class Rbtree
{
private:
    Node* root;
    Node* nil;
    void rotate_left(Node* temp)
    {
        Node* right_child=temp->right;
        temp->right=right_child->left;
        if(right_child->left!=nil)
        {
            right_child->left->parent=temp;
        }
        right_child->parent=temp->parent;
        if(temp->parent==nil)
        {
            root=right_child;
        }
        else if(temp==temp->parent->left)
        {
            temp->parent->left=right_child;
        }
        else
        {
            temp->parent->right=right_child;
        }
        right_child->left=temp;
        temp->parent=right_child;
    }
    void rotate_right(Node* temp)
    {
        Node* left_child=temp->left;
        temp->left=left_child->right;
        if(left_child->right!=nil)
        {
            left_child->right->parent=temp;
        }
        left_child->parent=temp->parent;
        if(temp->parent==nil)
        {
            root=left_child;
        }
        else if(temp==temp->parent->left)
        {
            temp->parent->left=left_child;
        }
        else
        {
            temp->parent->right=left_child;
        }
        left_child->right=temp;
        temp->parent=left_child;
    }
    void rb_insert_fixup(Node* temp)
    {
        while(temp->parent->color==RED)
        {
            if(temp->parent==temp->parent->parent->left)
            {
                Node* uncle=temp->parent->parent->right;
                if(uncle->color==RED)
                {
                    temp->parent->color=BLACK;
                    uncle->color=BLACK;
                    temp->parent->parent->color=RED;
                    temp=temp->parent->parent;
                }
                else
                {
                    if(temp==temp->parent->right)
                    {
                        temp=temp->parent;
                        rotate_left(temp);
                    }
                    temp->parent->color=BLACK;
                    temp->parent->parent->color=RED;
                    rotate_right(temp->parent->parent);
                }
            }
            else
            {
                Node* uncle=temp->parent->parent->left;
                if(uncle->color==RED)
                {
                    temp->parent->color=BLACK;
                    uncle->color=BLACK;
                    temp->parent->parent->color=RED;
                    temp=temp->parent->parent;
                }
                else
                {
                    if(temp==temp->parent->left)
                    {
                        temp=temp->parent;
                        rotate_right(temp);
                    }
                    temp->parent->color=BLACK;
                    temp->parent->parent->color=RED;
                    rotate_left(temp->parent->parent);
                }
            }
        }
        root->color=BLACK;
    }
    Node* rb_insert_node(Node* temp,Node* par,int el)
    {
        if(temp==nil)
        {
            temp=new Node(el,RED,par,nil,nil);
            if(par==nil)
            {
                root=temp;
            }
            if(el < par->data)
            {
                par->left=temp;
            }
            else
            {
                par->right=temp;
            }
        }
        else
        {
            if(el < temp->data)
            {
                return(rb_insert_node(temp->left,temp,el));
            }
            else
            {
                return (rb_insert_node(temp->right,temp,el));
            }
        }
        return temp;
    }
    Node* rb_find_node(Node* temp,int el)
    {
        if(temp==nil)
        {
            return nil;
        }
        if(el < temp->data)
        {
            return (rb_find_node(temp->left,el));
        }
        else if(el > temp->data)
        {
            return (rb_find_node(temp->right,el));
        }
        else
        {
            return temp;
        }
    }
    Node* rb_find_min(Node* temp)
    {
        Node* ptr;
        while(temp!=nil)
        {
            ptr=temp;
            temp=temp->left;
        }
        return ptr;
    }
    
    void rb_transplant(Node* u,Node* v)
    {
        if(u->parent==nil)
        {
            root=v;
        }
        else if(u==u->parent->left)
        {
            u->parent->left=v;
        }
        else
        {
            u->parent->right=v;
        }
        v->parent=u->parent;
    }
    void rb_delete_fixup(Node* temp)
    {
        while(temp!=root && temp->color==BLACK)
        {
            if(temp==temp->parent->left)
            {
                Node* sibling=temp->parent->right;
                if(sibling->color==RED)
                {
                    sibling->color=BLACK;
                    temp->parent->color=RED;
                    rotate_left(temp->parent);
                    sibling=temp->parent->right;
                }
                if(sibling->left->color==BLACK && sibling->right->color==BLACK)
                {
                    sibling->color=RED;
                    temp=temp->parent;
                }
                else
                {
                    if(sibling->right->color==BLACK)
                    {
                        sibling->left->color=BLACK;
                        sibling->color=RED;
                        rotate_right(sibling);
                        sibling=temp->parent->right;
                    }
                    sibling->color=temp->parent->color;
                    temp->parent->color=BLACK;
                    sibling->right->color=BLACK;
                    rotate_left(temp->parent);
                    temp=root;
                }
            }
            else
            {
                Node* sibling=temp->parent->left;
                if(sibling->color==RED)
                {
                    sibling->color=BLACK;
                    temp->parent->color=RED;
                    rotate_right(temp->parent);
                    sibling=temp->parent->left;
                }
                if(sibling->left->color==BLACK && sibling->right->color==BLACK)
                {
                    sibling->color=RED;
                    temp=temp->parent;
                }
                else
                {
                    if(sibling->left->color==BLACK)
                    {
                        sibling->right->color=BLACK;
                        sibling->color=RED;
                        rotate_left(sibling);
                        sibling=temp->parent->left;
                    }
                    sibling->color=temp->parent->color;
                    temp->parent->color=BLACK;
                    sibling->left->color=BLACK;
                    rotate_right(temp->parent);
                    temp=root;
                }
            }
        }
        temp->color=BLACK;
    }
    void rb_delete_node(Node* temp)
    {
        Node* y=temp;
        Node* x;
        int y_original_color=y->color;
        if(temp->left==nil)
        {
            x=temp->right;
            rb_transplant(temp,temp->right);
        }
        else if(temp->right==nil)
        {
            x=temp->left;
            rb_transplant(temp,temp->left);
        }
        else
        {
            y=rb_find_min(temp->right);
            y_original_color=y->color;
            x=y->right;
            if(y->parent==temp)
            {
                x->parent=y;
            }
            else
            {
                rb_transplant(y,y->right);
                y->right=temp->right;
                y->right->parent=y;
            }
            rb_transplant(temp,y);
            y->left=temp->left;
            y->left->parent=y;
            y->color=temp->color;
        }
        if(y_original_color==BLACK)
        {
            rb_delete_fixup(x);
        }
    }
    
    void rb_show_data(Node* temp)
    {
        if(temp==nil || temp==NULL)
        {
            return;
        }
        else
        {
            rb_show_data(temp->left);
            cout<<setw(5)<<temp->data<<setw(10)<<temp->color<<endl;
            rb_show_data(temp->right);
        }
    }
public:
    Rbtree()
    {
        nil=new Node(-1,BLACK,NULL,NULL,NULL);      //the main master trick
        root=nil;
    }
    void insert_node(int el)
    {
        Node* temp=rb_insert_node(root,nil,el);
        rb_insert_fixup(temp);
    }
    void delete_node(int el)
    {
        Node* temp=rb_find_node(root,el);
        if(temp==nil)
        {
            return;
        }
        else
        {
            rb_delete_node(temp);
        }
    }
    void show_data()
    {
        cout<<"Inorder walk"<<endl;
        cout<<"   "<<"Data"<<"     "<<"Color"<<endl;
        rb_show_data(root);
    }
    void show_root_data()
    {
        cout<<"The informations of the Root node is"<<endl;
        cout<<"   "<<"Data"<<"     "<<"Color"<<endl;
        cout<<setw(5)<<root->data<<setw(10)<<root->color<<endl;
    }
};
int main()
{
    Rbtree rbt;

    rbt.insert_node(9);
    rbt.insert_node(7);
    rbt.insert_node(11);
    rbt.insert_node(6);
    rbt.insert_node(15);
    rbt.insert_node(8);
    rbt.insert_node(18);
    rbt.insert_node(16);
    rbt.insert_node(17);
    rbt.insert_node(5);
    rbt.insert_node(4);
    rbt.insert_node(23);
    rbt.insert_node(45);
    rbt.insert_node(50);
    rbt.insert_node(70);
    rbt.insert_node(115);

    rbt.show_data();
    rbt.show_root_data();

    rbt.delete_node(9);
    rbt.show_data();
    rbt.show_root_data();
    return 0;
}