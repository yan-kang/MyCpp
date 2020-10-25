//
//  main.cpp
//  Contacts
//
//  Created by kang on 2020/10/20.
//
#include "../Headers/util.h"


Addressbooks addb = {0};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int select;
    while (true) {
        showMenue();
        cin>>select;
        selectAction(select);
    }
    return 0;
}
