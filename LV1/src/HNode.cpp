/*
 * HNode.cpp
 *
 *  Created on: Oct 29, 2026
 *      Author: filip
 */

#include "HNode.h"


HNode::HNode(char _znak, int _frekvencija) {
	znak = _znak;
	frekvencija = _frekvencija;
	levi = nullptr;
	desni = nullptr;
}

HNode::HNode(HNode *_levi, HNode *_desni) {
	levi = _levi;
	desni = _desni;
	znak = '\0';
	frekvencija = levi->getFrekvencija() + desni->getFrekvencija();

}

HNode::~HNode() {
	// TODO Auto-generated destructor stub
	delete levi;
	delete desni;
}

