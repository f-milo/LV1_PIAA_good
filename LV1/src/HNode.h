/*
 * HNode.h
 *
 *  Created on: Oct 29, 2026
 *      Author: filip
 */

#ifndef HNODE_H_
#define HNODE_H_

class HNode {
private:
	char znak;
	int frekvencija;
	HNode* levi;
	HNode* desni;
public:
	HNode() {}
	HNode(char _znak, int _frekvencija);
	HNode(HNode* _levi, HNode* _desni);

	virtual ~HNode();

	int getFrekvencija() const { return frekvencija; }
	char getZnak() const { return znak; }
	HNode* getLevi() { return levi; }
	HNode* getDesni() { return desni; }
};

#endif /* HNODE_H_ */
