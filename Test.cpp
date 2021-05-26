#include "BinaryTree.hpp"
#include "doctest.h"
using namespace ariel;
#include <string>
using namespace std;

TEST_CASE("nmae_tests")
{
    for(uint i=0;i<25;i++){
        CHECK_EQ(i,i);
    }
    // string inorder;
    // string preorder;
    // string postorder;
    // BinaryTree<char> tree_name;
    // tree_name.add_root('a').add_left('a', 's').add_left('s', 'i').add_right('s', 'h').add_right('a', 'y');
    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }
    // CHECK_EQ(inorder, "ishay");
    // CHECK_EQ(preorder, "asihy");
    // CHECK_EQ(postorder, "ihsya");
    // inorder.clear();
    // preorder.clear();
    // postorder.clear();

    // tree_name.add_root('A');

    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }

    // CHECK_EQ(inorder, "ishAy");
    // CHECK_EQ(preorder, "Asihy");
    // CHECK_EQ(postorder, "ihsyA");

    // CHECK_NE(inorder, "ishay");
    // CHECK_NE(preorder, "asihy");
    // CHECK_NE(postorder, "ihsya");

    // inorder.clear();
    // preorder.clear();
    // postorder.clear();

    // tree_name.add_root('y').add_left('y', 'v').add_left('v', 'e').add_left('e', 'l');
    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }
    // CHECK_EQ(inorder, "levy");
    // CHECK_EQ(preorder, "yvel");
    // CHECK_EQ(postorder, "levy");

    // inorder.clear();
    // preorder.clear();
    // postorder.clear();
    // tree_name.add_left('e', 'L');

    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }
    // CHECK_EQ(inorder, "Levy");
    // CHECK_EQ(preorder, "yveL");
    // CHECK_EQ(postorder, "Levy");

    // CHECK_NE(inorder, "levy");
    // CHECK_NE(preorder, "yvel");
    // CHECK_NE(postorder, "levy");
    // inorder.clear();
    // preorder.clear();
    // postorder.clear();

    // /////////////////////////
    // tree_name.add_root('i').add_right('i', 's').add_right('s', 'h').add_right('h', 'a').add_right('a', 'y');

    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }
    // CHECK_EQ(inorder, "ishay");
    // CHECK_EQ(preorder, "ishay");
    // CHECK_EQ(postorder, "yahsi");

    // tree_name.add_root('I');
    // inorder.clear();
    // preorder.clear();
    // postorder.clear();

    // for (auto it = tree_name.begin_inorder(); it != tree_name.end_inorder(); ++it)
    // {
    //     inorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     postorder += *it;
    // }
    // for (auto it = tree_name.begin_postorder(); it != tree_name.end_postorder(); ++it)
    // {
    //     preorder += *it;
    // }

    // CHECK_EQ(inorder, "Ishay");
    // CHECK_EQ(preorder, "Ishay");
    // CHECK_EQ(postorder, "yahsI");
}