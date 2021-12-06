#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <random>

using std::cout;
using std::endl;
using std::string;

void printBT(const prefix, const BSTNode* node, bool isLeft)
{
	if(node!=nullptr)
	{
		cout<<prefix;
		cout<<(isLeft ? "|---" : "+--");
		
		//imprimir valor del nodo
		cout <<node->m_val<<endl;
		
		//ingresa el siguiente nivel - rama dereche e izquierda
		printBT(prefix + (isLeft ? "|   " : "    "), node->m_left, true);
		printBT(prefix + (isLeft ? "|   " : "    "), node->m_left, false);
	}
}

void printBT(const BSTNode* node)
{
	printBT("", node, false);
}

printBT(root);
















