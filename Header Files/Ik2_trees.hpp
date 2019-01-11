#ifndef K2_TREES_IMPLEMENTATION_IK2_TREES_HPP
#define K2_TREES_IMPLEMENTATION_IK2_TREES_HPP
#include <boost/dynamic_bitset.hpp>
#include <ctgmath>
#include <iostream>

class Ik2_Trees{
    private:
        std::vector<boost::dynamic_bitset<> > T;
        boost::dynamic_bitset<> _T;
        boost::dynamic_bitset<> _L;
        int nbT;
        int k ;
        int prof ;

    public:

        Ik2_Trees(int k,int nbT, int n,bool diff, int A [10][10][10]);

        void CalcDiff(int A [10][10][10],int B[10][10][10]);
        // function that creates a T list for each level
        boost::dynamic_bitset<> build_from_matrix(int n,int l,int p,int q, int A [10][10][10]);
        // Concatenate the T lists in 2 lists T and L
        void BuildTree();
        /*
         * Utils functions
         */
        int logk(int k, int m);
        bool all_null_C(boost::dynamic_bitset<> C);
        bool all_null_C(std::vector<boost::dynamic_bitset<>> Ctmp);

        boost::dynamic_bitset<> get_T();
        boost::dynamic_bitset<> get_L();
        int rank(boost::dynamic_bitset<> _T,int n);
};




#endif //K2_TREES_IMPLEMENTATION_IK2_TREES_HPP