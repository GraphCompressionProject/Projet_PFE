
#include "stdafx.h"
#include "MoteurOrdre.h"
#include "SuperGraph.h"
#include "Moteur2.h"
#include "motorpar.h"
#include "CompressAgregation.h"
#include <map>
#include "TextTable.h"
#include <boost/thread.hpp>
#include "motorK2_trees.h"

void testk2(string graphName, string choix, int k )
{
	motorK2_trees motor;
	const char * c = graphName.c_str();
	motor.compressGraph(c, k, choix);
}

void test3(string graphName1, string data1, string iteration1) {

	Moteur2 motr;
	motr.CompressingGraph(graphName1, data1, iteration1);
}

void testbv (string graphName, string data, int window_size, int max_ref_count, int min_interval_length, int zeta_k)
{
	motorpar moteur;
	
	moteur.CompressGraph(graphName, data, window_size, max_ref_count, min_interval_length, zeta_k);
}

void testOrdre(string graphName)
{

	MoteurOrdre::orderGraph(graphName);
	
}


int main(int argc, char ** argv) {
	using namespace boost;
	string graphName1;
	string data1;
	string iteration1;



	int C; 
	stringstream(argv[1]) >> C;
	
	switch (C)
	{
	case 0: {
		testbv(argv[2], argv[3], atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));

	} break;

	case 1:
	{
		test3(argv[2], argv[3], argv[4]);
	} break;
	case 2:
	{
		testOrdre(argv[2]);
	} break;
	case 3:
	{
		testk2(argv[2], argv[3], atoi(argv[4]));
	}
	}
	

	

	return 0;
}
