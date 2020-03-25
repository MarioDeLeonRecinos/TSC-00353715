#include <iostream>
#include "math_tools.h"
#include "display_tools.h"


int main(){
    Matrix m_ori, m_cof, m_trans, m_ans;
    
	float num;
    
	zeroes(m_ori, 3);
    
    m_ori.at(0).at(0) = 2;
    m_ori.at(0).at(1) = 2;
    m_ori.at(0).at(2) = 3;
    m_ori.at(1).at(0) = 4;
    m_ori.at(1).at(1) = 5;
    m_ori.at(1).at(2) = 6;
    m_ori.at(2).at(0) = 7;
    m_ori.at(2).at(1) = 8;
    m_ori.at(2).at(2) = 9;

    if (determinant(m_ori) != 0.0){
        cofactors(m_ori, m_cof);
        transpose(m_cof, m_trans);
        num = (1 / determinant(m_ori));
        productRealMatrix(num, m_trans, m_ans);

        showMatrix(m_ans);
    }
    else{
        EXIT_FAILURE;
    }

    return 0;
}
