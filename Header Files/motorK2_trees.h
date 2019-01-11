#pragma once
#include <string>
#include "k2_Trees.hpp"
#include "DirectedGraph.h"
#include "Ik2_trees.hpp"

using namespace std;
class motorK2_trees
{


public:
	motorK2_trees();
	~motorK2_trees();

	void compressGraph(const char* graphName,int k, string type)
	{
		if (type == "K2") compressGraphK2Stat(graphName, k);
		if (type == "IK2") compressGraphInterK2(graphName, k);
		if (type == "IK2") compressGraphDiffInterK2(graphName, k);

	};

	void compressGraphK2Stat(const char* graphName, int k) {
		DirectedGraph graph(graphName);
		k2_Trees tree(k, graph.getNodes(), graph.getMatrix());
		cout << tree.get_T() << "\n" << tree.get_L();
	};

	void compressGraphInterK2(const char* graphName, int k) {
		DirectedGraph graph(graphName);
		//nbT : dimonsion temporelle
		//Ik2_Trees tree(k, nbT, graph.getNodes(), 0, int A[10][10][10]);
		//cout << tree.get_T() << "\n" << tree.get_L();
	};

	void compressGraphDiffInterK2(const char* graphName, int k) {
		DirectedGraph graph(graphName);
		//nbT : dimonsion temporelle
		//Ik2_Trees tree(k, nbT, graph.getNodes(), 1, int A[10][10][10]);
		//cout << tree.get_T() << "\n" << tree.get_L();
	};



	void saveGraph();
};

