
#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    template <typename T>
    class BinaryTree
    {
        class Node
        {
        public:
            T data;
            Node *left_Node;
            Node *right_Node;
            Node(const T &n) : data(n), left_Node(nullptr), right_Node(nullptr){};
        };

    public:
        BinaryTree &add_root(T root) { return *this; }
        BinaryTree &add_right(T change, T new_right) { return *this; }
        BinaryTree &add_left(T change_left, T new_left) { return *this; }

        friend std::ostream &operator<<(std::ostream &out, const BinaryTree &tr)
        {
            return out;
        }
        class run_over_tree
        {
        public:
            Node *itr_node;

            run_over_tree(Node *ptr = nullptr) : itr_node(ptr){}; //constractor
            virtual run_over_tree &operator++(int)
            {
                return *this;
            }
            virtual run_over_tree &operator++()
            {
                return *this;
            }

            bool operator!=(const run_over_tree &other) const
            {
                return false;
            }
            bool operator==(const run_over_tree &other) const
            {
                return false;
            }
            T &operator*() const
            {
                return itr_node->data;
            }
            T *operator->() const
            {
                return &(itr_node->data);
            }
        };

        class inOrder : public run_over_tree{};
        class preOrder : public run_over_tree{};
        class postOrder : public run_over_tree{};

        inOrder &begin()
        {
            return *(new inOrder());
        }
        inOrder &end()
        {
            return *(new inOrder());
        }
        postOrder &begin_postorder()
        {
            return *(new postOrder());
        }
        postOrder &end_postorder()
        {
            return *(new postOrder());
        }
        preOrder &begin_preorder()
        {
            return *(new preOrder());
        }
        preOrder &end_preorder()
        {
            return *(new preOrder());
        }
        inOrder &begin_inorder()
        {
            return *(new inOrder());
        }
        inOrder &end_inorder()
        {
            return *(new inOrder());
        }
    };

} // namespace ariel
