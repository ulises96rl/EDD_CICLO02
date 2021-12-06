#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <random>


void Tree::TREEPRINT()
{
    int i = 0;
    while (i <= treeHeight(getroot())){
        printlv(i);
        i++;
        cout << endl;
    }
}
    
void Tree::printlv(int n){
    Node* temp = getroot();
    int val = pow(2, treeHeight(root) -n+2);
    cout << setw(val) << "";
    prinlv(temp, n, val);
}
    
void Tree::dispLV(Node*p, int lv, int d)
{
    int disp = 2 * d;
    if (lv == 0){
        if (p == NULL){

            cout << " x ";
            cout << setw(disp -3) << "";
            return;
        }
        else{
            int result = ((p->key <= 1) ? 1 : log10(p->key) + 1);
            cout << " " << p->key << " ";
            cout << setw(disp - result-2) << "";
        }
    }
    else
    {
        if (p == NULL&& lv >= 1){
            dispLV(NULL, lv - 1, d);
            dispLV(NULL, lv - 1, d);
        }
        else{
            dispLV(p->left, lv - 1, d);
            dispLV(p->right, lv - 1, d);
        }
    }
}   
