/*
 * HTree.cpp
 *
 *  Created on: Oct 29, 2026
 *      Author: filip
 */

#include "HTree.h"

HTree::HTree() {
	koren = nullptr;
	// TODO Auto-generated constructor stub

}

HTree::~HTree() {
	// TODO Auto-generated destructor stub
}

void HTree::kreirajStablo(int *nizFrekvencija) {
	std::vector<HNode*> nizKorisnih;

	for(int i=0; i<256; i++)
	{
		if(nizFrekvencija[i] > 0)
		{
			//da li moze da se autmatski prevede i u char, ilu mora neki casting?
			nizKorisnih.push_back(new HNode(i, nizFrekvencija[i]));
		}
	}

	std::sort(nizKorisnih.begin(), nizKorisnih.end(), [] (const HNode* a, const HNode* b)
			{
		return a->getFrekvencija() < b->getFrekvencija();
			});

	while(nizKorisnih.size() > 1)
	{
		HNode* n1 = nizKorisnih[0];
		HNode* n2 = nizKorisnih[1];

		HNode* roditelj = new HNode(n1, n2);

		nizKorisnih[0] = roditelj;
		nizKorisnih.erase(nizKorisnih.begin() +1);


		std::sort(nizKorisnih.begin(), nizKorisnih.end(), [] (const HNode* a, const HNode* b)
		{
			return a->getFrekvencija() < b->getFrekvencija();
		});
	}

	if(nizKorisnih.empty())
	{
		koren  = nullptr;
		return;

	}
	koren  = nizKorisnih[0];

}
