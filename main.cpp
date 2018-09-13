/*//
//  main.cpp
//  Tutorial 1
//
//  Created by Hassan Mokdad on 2018-Sep-12.
//  Copyright © 2018 Hassan Mokdad. All rights reserved.
//

#include <iostream>

int main() {
    std::cout<<"Enter numbers"<<std::endl;
    int i;
    int ctr = 0;
    
    while (std::cin>>i) {
        if(i<0)
            ++ctr;
        
    }
    std::cout <<ctr<< std::endl;
    return 0;
}


#include <iostream>

int main() {

    std::cout<<"Enter 2 numbers"<<std::endl;
    int v1,v2;
    int ctr = 0;
    std::cin>>v1>>v2;
    while (std::cin>>i) {
        if(i<0)
        ++ctr;
        
    }
    std::cout <<ctr<< std::endl;
    return 0;
}
Ω
#include <iostream>
using namespace std;
int main() {
    char c ='\x05';
    double n = 5;
    double z=5.5;
    

    
        std::cout <<z+n/2<<std::endl;
    
    
}
 
 
 
 */

#include <iostream>

int main() {
    int n,p,q;
    n = 5;
    p = 2;
    q=n++>p||p++!=3;
    
    std::cout<<"Enter 2 numbers"<<std::endl;
}
