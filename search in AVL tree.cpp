#include <iostream>

using namespace std;

class Node 
{
  public:
    int value;

  Node * left_child;
  Node * right_child;

  Node() 
  {
    value = 0;
    left_child = NULL;
    right_child = NULL;
  }

  Node(int v) 
  {
    value = v;
    left_child = NULL;
    right_child = NULL;
  }
};

class AVLtree 
{
  public:
    Node * root;

  AVLtree() 
  {
    root = NULL;
  }
 
  int height(Node * r) 
  {
    if (r == NULL)
    {
      return -1;
    }
    else 
    {
      int left_subtree_height = height(r->left_child);
      int right_subtree_height = height(r->right_child);

      if (left_subtree_height > right_subtree_height)
      {
        return (left_subtree_height + 1);
      }
      else 
      {
        return (right_subtree_height + 1);
      }
    }
  }

  int getBalanceFactor(Node * n) 
  {
    if (n == NULL)
    {
      return -1;
    }
    return height(n->left_child) - height(n->right_child);
  }

  Node * rightRotate(Node * x) 
  {
    Node * y = x->left_child;
    Node * T2 = y->right_child;
    y->right_child = x;
    x->left_child = T2;

    return y;
  }

  Node * leftRotate(Node * x) 
  {
    Node * y = x->right_child;
    Node * T2 = y->left_child;
    y->left_child = x;
    x->right_child = T2;

    return y;
  }

  Node * searchRecursive(Node* root, int val_to_find)
  {
    if(root == NULL) 
    {
      cout << val_to_find << " was Not Found!" << endl ;
      return root;
    }

    if(root->value == val_to_find)
    {
      cout << val_to_find << " was Found!" << endl ;
      return root; 
    }
    else
    {
      if(val_to_find > root->value) 
      {
        return searchRecursive(root->right_child, val_to_find) ;
      }
      else if(val_to_find < root->value) 
      {
        return searchRecursive(root->left_child, val_to_find) ;
      }
    }
  }

  Node* searchIterative(int val_to_find)
  {
    Node* temp = root ;
    while(1)
    {
      if(temp == NULL) 
      {
        cout << val_to_find << " was Not Found!" << endl ;
        return NULL ;
      }

      if(temp->value == val_to_find)
      {
        cout << val_to_find << " was Found!" << endl ;
        return temp;
      }
      else
      {
        if(val_to_find > temp->value) 
        {
          temp = temp->right_child ;
        }
        else if(val_to_find < temp->value) 
        {
          temp = temp->left_child ;
        }
      }
    }
  }
};

void prettyPrintTree(Node * r, int space) 
{
  if (r == NULL) 
  {
    return;
  }
  space += 10; 
  prettyPrintTree(r->right_child, space); 
  cout << endl;
  for (int i = 10; i < space; i++) 
  {
    cout << " ";   
  }
  cout << r->value << "\n"; 
  prettyPrintTree(r->left_child, space); 
}

int main()
{
  AVLtree obj;
  Node * n1 = new Node();
  Node * n2 = new Node();
  Node * n3 = new Node();
  Node * n4 = new Node();
  Node * n5 = new Node();
  Node * n6 = new Node();

  n1->value = 20;
  n2->value = 15;
  n3->value = 30;
  n4->value = 10;
  n5->value = 17;
  obj.root = n1 ;
  obj.root->left_child = n2 ;
  obj.root->right_child = n3;
  obj.root->left_child->left_child = n4;
  obj.root->left_child->right_child = n5 ;

  cout << "Tree:" << endl ;
  prettyPrintTree(obj.root , 1);
  cout << endl ;

  cout << "Recursive Search: " ;
  Node * search_result_1 = obj.searchRecursive(obj.root, 17);
  
  cout << "Iterative Search: " ;
  Node * search_result_2 = obj.searchIterative(17);
  
  cout << "Recursive Search: " ;
  Node * search_result_3 = obj.searchRecursive(obj.root, 8);
  
  cout << "Iterative Search: " ;
  Node * search_result_4 = obj.searchIterative(8);

  return 0 ;
}
